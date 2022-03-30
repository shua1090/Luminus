//
// Created by shynn on 3/29/2022.
//

#ifndef LUMINUS_DECLARATIONERRORS_H
#define LUMINUS_DECLARATIONERRORS_H

#include "../CompilerErrors.h"

class DeclarationError : public BaseError {
public:
    virtual void printError() override {
        BaseError::printError();
        std::cout << "Declaration Error -> ";
    }
};

class VariableAlreadyDeclared : public DeclarationError {
public:
    virtual void printError() override {
        DeclarationError::printError();
        std::cout << "Variable Already Declared -> ";
    }
};

class NonexistentVariable : public DeclarationError {
public:
    virtual void printError() override {
        DeclarationError::printError();
        std::cout << "Nonexistent Variable Error -> ";
    }
};


#endif //LUMINUS_DECLARATIONERRORS_H
