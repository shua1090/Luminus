//
// Created by shynn on 3/27/2022.
//

#ifndef LUMINUS_ERRORLOGGER_H
#define LUMINUS_ERRORLOGGER_H

#include <utility>
#include <vector>
#include <string>
#include <iostream>
#include "CompilerErrors.h"

class Logger {
public:
    std::vector<BaseError *> errors;

    Logger() = default;

    void addError(BaseError *error) {
        this->errors.push_back(error);
    }

    void printErrors() {
        for (int i = 0; i < errors.size(); i++) {
            errors[i]->printError();
            errors[i]->printSpecificError();
        }
    }

    ~Logger(){
        for (int i = 0; i < errors.size(); i++){
            delete errors[i];
        }
    }
};

#endif //LUMINUS_ERRORLOGGER_H
