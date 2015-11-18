/**
 * (c) 2015 Alexandro Sanchez Bach. All rights reserved.
 * Released under GPL v2 license. Read LICENSE for more details.
 */

#pragma once

#include "nucleus/graphics/shader.h"
#include "nucleus/graphics/backend/opengl/opengl.h"
#include "nucleus/graphics/hir/type.h"

#include <vector>

namespace gfx {

// Forward declarations
namespace hir {
class Instruction;
class Block;
class Function;
class Module;
}  // namespace hir

class OpenGLShader : public Shader {
    // Utilities
    std::string getType(hir::Type);
    std::string getFunctionDeclaration(S32 id, const std::vector<hir::Type>& typeIn, hir::Type typeOut);

    // Compile HIR components into GLSL
    std::string compile(hir::Instruction* instr);
    std::string compile(hir::Block* block);
    std::string compile(hir::Function* function);
    std::string compile(hir::Module* module);

public:
    GLuint id;

    bool initialize(const ShaderDesc& desc);
};

}  // namespace gfx
