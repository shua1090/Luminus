//
// Created by shynn on 3/27/2022.
//

#ifndef LUMINUS_COMPILER_ERROR_TYPES_H
#define LUMINUS_COMPILER_ERROR_TYPES_H
#include <string>
#include <iostream>
class BaseError{
public:
    size_t lineNum;
    size_t columNum;
    std::string errorDescription;
    std::string line;
    BaseError() = default;
    virtual  void printError(){
        std::cout << "Base Error -> ";
    }
    void printSpecificError() const{
        std::cout << std::endl << std::string(50, '-') << std::endl;
        std::cout << "Compile Error occurred on line  "<< lineNum << std::endl;// "." << columNum << std::endl;
//        std::cout << "Specific Source Code: " <<std::endl << std::string(4, ' ') << line << std::endl;
//        std::cout << "    " << "^" << std::string(line.length()-1, '~') << std::endl;
        std::cout << "Description: " << errorDescription << std::endl;
        std::cout << std::string(50, '#') << std::endl;
    }
};

class TypeError : public BaseError{
public:
    virtual void printError() override {
        BaseError::printError();
        std::cout << "Type Error -> ";
    }
};
class TypeMismatchError: public TypeError{
    virtual void printError() override {
        TypeError::printError();
        std::cout << "Type Mismatch Error -> ";
    }
};

class DeclarationError:public BaseError{
public:
    virtual void printError() override {
        BaseError::printError();
        std::cout << "Declaration Error -> ";
    }
};

class VariableAlreadyDeclared:public DeclarationError{
public:
    virtual void printError() override {
        DeclarationError::printError();
        std::cout << "Variable Already Declared -> ";
    }
};

class NonexistentVariable:public DeclarationError{
public:
    virtual void printError() override {
        DeclarationError::printError();
        std::cout << "Nonexistent Variable Error -> ";
    }
};

class FunctionError:public BaseError{
public:
    virtual void printError() override {
        BaseError::printError();
        std::cout << "Function Error -> ";
    }
};

class NestedFunctionError: public FunctionError{
public:
    virtual void printError() override{
        FunctionError::printError();
        std::cout<< "Nested Function Error -> ";
    }
};

class FunctionAlreadyDefinedError: public FunctionError{
public:
    virtual void printError() override {
        FunctionError::printError();
        std::cout<<"Function Already Exists Error -> ";
    }
};

#endif //LUMINUS_COMPILER_ERROR_TYPES_H
