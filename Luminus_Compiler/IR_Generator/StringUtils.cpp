//
// Created by shynn on 4/10/2022.
//

#include "LuminusCompiler.h"

// trim from start
inline std::string &LuminusCompiler::ltrim(std::string &s) {
    s.erase(s.begin(), std::find_if(s.begin(), s.end(),
                                    std::not1(std::ptr_fun<int, int>(std::isspace))));
    return s;
}

// trim from end
inline std::string &LuminusCompiler::rtrim(std::string &s) {
    s.erase(std::find_if(s.rbegin(), s.rend(),
                         std::not1(std::ptr_fun<int, int>(std::isspace))).base(), s.end());
    return s;
}

std::string LuminusCompiler::trim(std::string text) {
    return ltrim(rtrim(text));
}

std::string typeToString(Type *t) {
    std::string type_str;
    llvm::raw_string_ostream rso(type_str);
    t->print(rso);
    return rso.str();
}