//
// Created by shynn on 3/27/2022.
//

#ifndef LUMINUS_LUMVISITOR_H
#define LUMINUS_LUMVISITOR_H

#include "LuminusVisitor.h"
#include <unordered_map>

enum Types {
    NONEXISTENT,
    INTEGER,
    DOUBLE,
    BOOLEAN,
    VOID,
};

struct LumFunction {
    Types returnType;
    std::vector<Types> args;
    bool hasValidReturnVal = false;

    bool sameReturnval(LumFunction &lf) const {
        if (lf.returnType == returnType) return true;
        return false;
    }

    bool sameArgs(LumFunction &lf) {
        if (lf.args.size() != this->args.size()) return false;
        for (int i = 0; i < args.size(); i++) {
            if (this->args[i] != lf.args[i]) return false;
        }
        return true;
    }
};

class LumVisitor : public LuminusVisitor {

    static Types textToType(std::string type) {
        Types dec_type_t;
        if (type == "int") {
            dec_type_t = INTEGER;
        } else if (type == "double") {
            dec_type_t = DOUBLE;
        } else if (type == "bool") {
            dec_type_t = BOOLEAN;
        } else if (type == "void") {
            dec_type_t = VOID;
        } else {
            dec_type_t = INTEGER;
        }
        return dec_type_t;
    }

};

#endif //LUMINUS_LUMVISITOR_H
