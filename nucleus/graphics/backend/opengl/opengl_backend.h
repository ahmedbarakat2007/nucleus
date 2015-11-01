/**
 * (c) 2015 Alexandro Sanchez Bach. All rights reserved.
 * Released under GPL v2 license. Read LICENSE for more details.
 */

#pragma once

#include "nucleus/common.h"
#include "nucleus/graphics/graphics.h"

namespace gfx {

class OpenGLBackend : public IBackend {
public:
    OpenGLBackend();
    ~OpenGLBackend();

    virtual ICommandQueue* createCommandQueue() override;
    virtual ICommandBuffer* createCommandBuffer() override;
    virtual void createPipeline() override;
    virtual void createShader() override;
};

}  // namespace gfx
