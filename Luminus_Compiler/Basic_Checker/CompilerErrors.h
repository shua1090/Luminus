//
// Created by shynn on 3/27/2022.
//

#ifndef LUMINUS_COMPILERERRORS_H
#define LUMINUS_COMPILERERRORS_H

#include <string>
#include <iostream>

class BaseError {
public:
    size_t lineNum;
    size_t columNum;
    std::string errorDescription;
    std::string line;

    BaseError() = default;
    virtual  void printError(){
        std::cout << "Base Error -> ";
    }

    void printSpecificError() const {
        std::cout << std::endl << std::string(50, '-') << std::endl;
        std::cout << "Compile Error occurred on line  " << lineNum << std::endl;// "." << columNum << std::endl;
//        std::cout << "Specific Source Code: " <<std::endl << std::string(4, ' ') << line << std::endl;
//        std::cout << "    " << "^" << std::string(line.length()-1, '~') << std::endl;
        std::cout << "Description: " << errorDescription << std::endl;
        std::cout << std::string(50, '#') << std::endl;
    }
};

#include "CompilerErrors/TypeErrors.h"
#include "CompilerErrors/FunctionErrors.h"
#include "CompilerErrors/DeclarationErrors.h"


#endif //LUMINUS_COMPILERERRORS_H
