#include "stdafx.h"
#include "CommandLineArgs.h"

using namespace GetImageAngle;


bool CommandLineArgs::parse_args(int argc, char* argv[])
{
    vertex_shader = "";
    fragment_shader = "";
    std::string curr_arg;
    for (int i = 1; i < argc; i++) {
        curr_arg = std::string(argv[i]);
        if (!curr_arg.compare(0, 2, "--")) {
            if (!curr_arg.compare("--persist")) {
                persist = true;
                continue;
            }
            else if (!curr_arg.compare("--animate")) {
                animate = true;
                continue;
            }
            else if (!curr_arg.compare("--exit_compile")) {
                exit_compile = true;
                continue;
            }
            else if (!curr_arg.compare("--exit_linking")) {
                exit_linking = true;
                continue;
            }
            else if (!curr_arg.compare("--output")) {
                output = argv[++i];
                continue;
            }
            else if (!curr_arg.compare("--vertex")) {
                vertex_shader = argv[++i];
                continue;
            }
            printf("Unknown argument %s\n", curr_arg.c_str());
            continue;
        }
        if (fragment_shader == "")
            fragment_shader = curr_arg;
        else printf("Ignoring extra argument %s\n", curr_arg.c_str());
    }
    return (fragment_shader != "");
}

