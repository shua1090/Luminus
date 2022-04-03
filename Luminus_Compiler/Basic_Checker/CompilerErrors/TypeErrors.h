//
// Created by shynn on 3/29/2022.
//

#ifndef LUMINUS_TYPEERRORS_H
#define LUMINUS_TYPEERRORS_H

#include "../CompilerErrors.h"

class TypeError : public BaseError {
public:
    virtual void printError() override {
        BaseError::printError();
        std::cout << "Type Error -> ";
    }
};

class TypeMismatchError : public TypeError {
    virtual void printError() override {
        TypeError::printError();
        std::cout << "Type Mismatch Error -> ";
    }
};

#endif //LUMINUS_TYPEERRORS_H
