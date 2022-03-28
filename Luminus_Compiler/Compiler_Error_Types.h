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
        std::cout << std::endl << "Compile Error occurred on "<< lineNum << "." << columNum << std::endl;
        std::cout << "Specific Source Code: " <<std::endl << std::string(4, ' ') << line << std::endl;
        std::cout << "    " << "^" << std::string(line.length()-1, '~') << std::endl;
        std::cout << "Description: " << errorDescription << std::endl;
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
#endif //LUMINUS_COMPILER_ERROR_TYPES_H
