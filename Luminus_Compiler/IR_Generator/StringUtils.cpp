//
// Created by shynn on 4/10/2022.
//

#include "LuminusCompiler.h"

// trim from start
static inline std::string &LuminusCompiler::ltrim(std::string &s) {
    s.erase(s.begin(), std::find_if(s.begin(), s.end(),
                                    std::not1(std::ptr_fun<int, int>(std::isspace))));
    return s;
}

// trim from end
static inline std::string &LuminusCompiler::rtrim(std::string &s) {
    s.erase(std::find_if(s.rbegin(), s.rend(),
                         std::not1(std::ptr_fun<int, int>(std::isspace))).base(), s.end());
    return s;
}

static std::string LuminusCompiler::trim(std::string text) {
    return ltrim(rtrim(text));
}