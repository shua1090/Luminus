//
// Created by shynn on 4/12/2022.
//

#ifndef LUMINUS_COMPILERLOGGER_H
#define LUMINUS_COMPILERLOGGER_H

#include <string>
#include <iostream>

#include "CompileException.hpp"


class CompilerLogger {

#ifdef COLORS_ENABLED
    std::string yellow = "\033[93m";
    std::string reset = "\033[0m";
#else
    std::string yellow = "";
    std::string reset = "";
#endif
public:

    void addLog(std::string s) {
        if (v != QUIET) {
            std::cout << yellow << "[LOGGER] " << s << reset << std::endl;
        }
    }

    void addSpecificLog(std::string s) {
        if (v == VERBOSE) {
            std::cout << yellow << "[LOGGER] " << s << reset << std::endl;
        }
    }

    enum Verbosity {
        QUIET,
        VISITING,
        VERBOSE,
    };
    Verbosity v = QUIET;
};

#endif //LUMINUS_COMPILERLOGGER_H
