/**
 * (c) 2014-2016 Alexandro Sanchez Bach. All rights reserved.
 * Released under GPL v2 license. Read LICENSE for more details.
 */

#include "opcodes.h"

namespace cpu {
namespace hir {

OpcodeInfo opcodeInfo[__OPCODE_COUNT + 1] = {
#define OPCODE(id, name, signature)  { name, 0, signature },
#include "opcodes.inl"
#undef OPCODE
};

}  // namespace hir
}  // namespace cpu
