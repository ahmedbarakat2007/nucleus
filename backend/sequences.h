/**
 * (c) 2014-2016 Alexandro Sanchez Bach. All rights reserved.
 * Released under GPL v2 license. Read LICENSE for more details.
 */

#pragma once

#include "nucleus/common.h"
#include "nucleus/cpu/hir/instruction.h"
#include "nucleus/cpu/hir/opcodes.h"
#include "nucleus/cpu/hir/type.h"

namespace cpu {
namespace backend {

union InstrKey {
    using Value = U32;

    struct {
        U32 opcode : 8;
        U32 dest : 5;
        U32 src1 : 5;
        U32 src2 : 5;
        U32 src3 : 5;
        U32 reserved : 4;
    };

    Value value;

    InstrKey(const hir::Instruction* instr) : value(0) {
        const auto& opInfo = hir::opcodeInfo[instr->opcode];
        // Fill opcode field
        opcode = instr->opcode;

        // Fill destination field
        dest = opInfo.getSignatureDest();
        if (dest == hir::OPCODE_SIG_TYPE_V || (dest == hir::OPCODE_SIG_TYPE_M && instr->dest)) {
            dest = (hir::OPCODE_SIG_TYPE_V + instr->dest->type);
        }
        if (dest == hir::OPCODE_SIG_TYPE_M && !instr->dest) {
            dest = (hir::OPCODE_SIG_TYPE_X);
        }

        // Fill source 1 field
        src1 = opInfo.getSignatureSrc1();
        if (src1 == hir::OPCODE_SIG_TYPE_V || (src1 == hir::OPCODE_SIG_TYPE_M && instr->src1.value)) {
            src1 = (hir::OPCODE_SIG_TYPE_V + instr->src1.value->type);
        }
        if (src1 == hir::OPCODE_SIG_TYPE_M && !instr->src1.value) {
            src1 = (hir::OPCODE_SIG_TYPE_X);
        }

        // Fill source 2 field
        src2 = opInfo.getSignatureSrc2();
        if (src2 == hir::OPCODE_SIG_TYPE_V) {
            src2 += instr->src2.value->type;
        }

        // Fill source 3 field
        src3 = opInfo.getSignatureSrc3();
        if (src3 == hir::OPCODE_SIG_TYPE_V) {
            src3 += instr->src3.value->type;
        }
    }
};

struct Op {
};

struct VoidOp : Op {
    static constexpr InstrKey::Value key = hir::TYPE_VOID;
    void load(const hir::Value* v) {
    }
};

struct ImmediateOp : Op {
    static constexpr InstrKey::Value key = hir::OPCODE_SIG_TYPE_I;
    hir::Instruction::Immediate immediate;

    void load(hir::Instruction::Immediate i) {
        this->immediate = i;
    }
};

struct BlockOp : Op {
    static constexpr InstrKey::Value key = hir::OPCODE_SIG_TYPE_B;
    const hir::Block* block;

    void load(const hir::Block* f) {
        this->block = f;
    }
};

struct FunctionOp : Op {
    static constexpr InstrKey::Value key = hir::OPCODE_SIG_TYPE_F;
    const hir::Function* function;

    void load(const hir::Function* f) {
        this->function = f;
    }
};

/**
 * Generic Value operand
 * @tparam  OpType     Derived operand type (CRTP)
 * @tparam  KeyValue   Operand key
 * @tparam  RegType    Type of emitter register
 * @tparam  ConstType  Type of constant value
 */
template <typename OpType, typename RegType, typename ConstType, int KeyValue>
struct ValueOp : Op {
private:
    bool isEqual(const OpType& other) const {
        // Constant, Constant
        if (isConstant && other.isConstant) {
            return reinterpret_cast<const OpType*>(this)->constant() == other.constant();
        }
        // Register, Register
        if (!isConstant && !other.isConstant) {
            return reg == other.reg;
        }
        return false;
    }

public:
    static constexpr InstrKey::Value key = hir::OPCODE_SIG_TYPE_V + KeyValue;
    const hir::Value* value;

    bool isConstant;
    RegType reg;
    operator const RegType&() const {
        return reg;
    }
    // Comparison operators
    bool operator==(const OpType& other) const { return isEqual(other); }
    bool operator!=(const OpType& other) const { return !isEqual(other); }

    // Constant properties
    virtual bool isConstant16b() const { return true; }
    virtual bool isConstant32b() const { return true; }
    virtual bool isConstant64b() const { return true; }

    void load(const hir::Value* v) {
        value = v;
        isConstant = value->isConstant();
        if (!isConstant) {
            reg = RegType(v->reg);
        }
    }
};

template <typename RegType>
struct I8OpBase : ValueOp<I8OpBase<RegType>, RegType, S08, hir::TYPE_I8> {
    using Base = ValueOp<I8OpBase<RegType>, RegType, S08, hir::TYPE_I8>;
    const S08 constant() const {
        return Base::value->constant.i8;
    }
};
template <typename RegType>
struct I16OpBase : ValueOp<I16OpBase<RegType>, RegType, S16, hir::TYPE_I16> {
    using Base = ValueOp<I16OpBase<RegType>, RegType, S16, hir::TYPE_I16>;
    const S16 constant() const {
        return Base::value->constant.i16;
    }
};
template <typename RegType>
struct I32OpBase : ValueOp<I32OpBase<RegType>, RegType, S32, hir::TYPE_I32> {
    using Base = ValueOp<I32OpBase<RegType>, RegType, S32, hir::TYPE_I32>;
    const S32 constant() const {
        return Base::value->constant.i32;
    }
    bool isConstant16b() const override {
        return ((constant() & 0xFFFF) == 0);
    }
};
template <typename RegType>
struct I64OpBase : ValueOp<I64OpBase<RegType>, RegType, S64, hir::TYPE_I64> {
    using Base = ValueOp<I64OpBase<RegType>, RegType, S64, hir::TYPE_I64>;
    const S64 constant() const {
        return Base::value->constant.i64;
    }
    bool isConstant16b() const override {
        return ((constant() & 0xFFFF) == 0);
    }
    bool isConstant32b() const override {
        return ((constant() & 0xFFFFFFFF) == 0);
    }
};
template <typename RegType>
struct F32OpBase : ValueOp<F32OpBase<RegType>, RegType, F32, hir::TYPE_F32> {
    using Base = ValueOp<F32OpBase<RegType>, RegType, F32, hir::TYPE_F32>;
    const F32 constant() const {
        return Base::value->constant.f32;
    }
};
template <typename RegType>
struct F64OpBase : ValueOp<F64OpBase<RegType>, RegType, F64, hir::TYPE_F64> {
    using Base = ValueOp<F64OpBase<RegType>, RegType, F64, hir::TYPE_F64>;
    const F64 constant() const {
        return Base::value->constant.f64;
    }
};
template <typename RegType>
struct V128OpBase : ValueOp<V128OpBase<RegType>, RegType, V128, hir::TYPE_V128> {
    using Base = ValueOp<V128OpBase<RegType>, RegType, V128, hir::TYPE_V128>;
    const V128 constant() const {
        return Base::value->constant.v128;
    }
};
template <typename RegType>
struct V256OpBase : ValueOp<V256OpBase<RegType>, RegType, V256, hir::TYPE_V256> {
    using Base = ValueOp<V256OpBase<RegType>, RegType, V256, hir::TYPE_V256>;
    const V256 constant() const {
        return Base::value->constant.v256;
   }
};
template <typename RegType>
struct PtrOpBase : ValueOp<PtrOpBase<RegType>, RegType, void*, hir::TYPE_PTR> {
    using Base = ValueOp<PtrOpBase<RegType>, RegType, void*, hir::TYPE_PTR>;
    const void* constant() const {
        return reinterpret_cast<void*>(Base::value->constant.i64); // TODO
    }
};

/**
 * Instruction type
 * @tparam  O   Opcode
 * @tparam  D   Type of destination operand
 * @tparam  S1  Type of source 1 operand
 * @tparam  S2  Type of source 2 operand
 * @tparam  S3  Type of source 3 operand
 */
template <hir::Opcode O, typename D = VoidOp, typename S1 = VoidOp, typename S2 = VoidOp, typename S3 = VoidOp>
struct I {
    static constexpr InstrKey::Value key = (O) | (D::key << 8) | (S1::key << 13) | (S2::key << 18) | (S3::key << 23);
    const hir::Instruction* instr;
    D dest;
    S1 src1;
    S2 src2;
    S3 src3;

    I(const hir::Instruction* i) {
        instr = i;
        dest.load(i->dest);
        src1.load(i->src1);
        src2.load(i->src2);
        src3.load(i->src3);
    }
};

/**
 * Sequence
 * @tparam  S  Derived sequence (CRTP)
 * @tparam  I  Instruction type
 */
template <typename S, typename I>
struct SequenceBase {
    static constexpr InstrKey::Value key = I::key;
};

}  // namespace backend
}  // namespace cpu
