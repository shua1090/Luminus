//
// Created by shynn on 4/24/2022.
//

#ifndef LUMINUS_VARIABLEMANAGER_H
#define LUMINUS_VARIABLEMANAGER_H

#include "LuminusCompiler.h"

class VariableManager {
private:
    std::vector<std::unordered_map<std::string, Value *>> names;
public:

    std::vector<std::string> &split(const std::string &s, char delim, std::vector<std::string> &elems) {
        std::stringstream ss(s + ' ');
        std::string item;
        while (std::getline(ss, item, delim)) {
            elems.push_back(item);
        }
        return elems;
    }

    void addScope() {
        names.emplace_back();
    }

    void removeScope() {
        names.pop_back();
    }

    Value *getVariable(std::string varName) {
        for (int i = 0; i < names.size(); i++) {
            try {
                return names[i][varName];
            } catch (std::exception &a) {}
        }
        return nullptr;
    }

    void addVariable(std::string varName, Value *typeOfVariable) {
        this->names[names.size() - 1][varName] = typeOfVariable;
    }
};

#endif //LUMINUS_VARIABLEMANAGER_H
