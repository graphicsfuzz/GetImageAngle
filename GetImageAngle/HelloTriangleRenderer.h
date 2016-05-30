#pragma once

#include "stdafx.h"

namespace GetImageAngle
{
    class HelloTriangleRenderer
    {
    public:
        HelloTriangleRenderer();
        ~HelloTriangleRenderer();
        void Draw();
        void OnWindowSizeChanged(GLsizei width, GLsizei height);
        bool Initialize();

    private:
        GLuint mProgram;
    };
}