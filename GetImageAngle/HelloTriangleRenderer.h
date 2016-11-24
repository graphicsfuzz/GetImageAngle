#pragma once

#include "stdafx.h"

#include "CommandLineArgs.h"

#define COMPILE_ERROR_EXIT_CODE 101
#define LINK_ERROR_EXIT_CODE 102
#define RENDER_ERROR_EXIT_CODE 103
#define PNG_ERROR_EXIT_CODE 104

namespace GetImageAngle
{
    class HelloTriangleRenderer
    {
    public:

        HelloTriangleRenderer(
            CommandLineArgs args,
            GLsizei width,
            GLsizei height)
            :   args(args),
                mProgram(0),
                width(width),
                height(height)
        {
        }

        ~HelloTriangleRenderer();
        void Draw();
        void OnWindowSizeChanged(GLsizei width, GLsizei height);
        bool Initialize();
        void Step(double deltaTime, double elapsedTime);

    private:
        CommandLineArgs args;
        GLuint mProgram;
        GLsizei width = -1;
        GLsizei height = -1;

        const size_t channels = 4;

        size_t stepCountdown = 10;

        bool saved = false;
    };
}