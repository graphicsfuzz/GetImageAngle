#pragma once

#include "stdafx.h"


namespace GetImageAngle
{
    class CommandLineArgs
    {
    public:
        bool persist = false,
            exit_compile = false,
            exit_linking = false,
            animate = false;

        std::string vertex_shader;
        std::string fragment_shader;
        std::string output = "output.ppm";

        bool CommandLineArgs::parse_args(int argc, char* argv[]);
    };
}
