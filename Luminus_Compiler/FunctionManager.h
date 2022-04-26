//
// Created by shynn on 4/25/2022.
//

#ifndef LUMINUS_FUNCTIONMANAGER_H
#define LUMINUS_FUNCTIONMANAGER_H

#include "LuminusCompiler.h"
#include "llvm/IR/Function.h"

using namespace llvm;

class FunctionManager {
    std::vector<Function *> functions;
public:
    FunctionManager() {
        functions.clear();
    }

    void addFunction(Function *function) {
        functions.push_back(function);
    }

    void removeFunction(Function *function) {
        functions.erase(std::remove(functions.begin(), functions.end(), function), functions.end());
    }

    void removeFunction(std::string name) {
        for (auto it = functions.begin(); it != functions.end(); it++) {
            if ((*it)->getName() == name) {
                functions.erase(it);
                return;
            }
        }
    }

    Function *getFunction(std::string name) {
        for (auto it = functions.begin(); it != functions.end(); it++) {
            if ((*it)->getName() == name) {
                return *it;
            }
        }
        return nullptr;
    }

    std::vector<Function *> getFunctions() {
        return functions;
    }

};

#endif //LUMINUS_FUNCTIONMANAGER_H
