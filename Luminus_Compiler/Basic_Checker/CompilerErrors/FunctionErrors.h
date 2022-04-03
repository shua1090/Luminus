//
// Created by shynn on 3/29/2022.
//

#ifndef LUMINUS_FUNCTIONERRORS_H
#define LUMINUS_FUNCTIONERRORS_H

#include "../CompilerErrors.h"


class FunctionError : public BaseError {
public:
    virtual void printError() override {
        BaseError::printError();
        std::cout << "Function Error -> ";
    }
};

class NestedFunctionError : public FunctionError {
public:
    virtual void printError() override {
        FunctionError::printError();
        std::cout << "Nested Function Error -> ";
    }
};

class FunctionAlreadyDefinedError : public FunctionError {
public:
    virtual void printError() override {
        FunctionError::printError();
        std::cout << "Function Already Exists Error -> ";
    }
};

class WrongNumberOfArgumentsError : public FunctionError {
public:
    virtual void printError() override {
        FunctionError::printError();
        std::cout << "Wrong Number of Arguments Error -> ";
    }
};

class UnreachableCodeWarning : public FunctionError {
public:
    virtual void printError() override {
        FunctionError::printError();
        std::cout << "Unreachable Code Warning -> ";
    }
};

class InvalidReturnStatement : public FunctionError {
public:
    virtual void printError() override {
        FunctionError::printError();
        std::cout << "Invalid/Nonexistent Return Error -> ";
    }
};

#endif //LUMINUS_FUNCTIONERRORS_H
