#ifndef COMPILER_EXCEPTIONS_H
#define COMPILER_EXCEPTIONS_H

#include <string>
#include <vector>
#include <iostream>

std::string red = "\\033[91m";
std::string reset = "\\033[49m";
struct BaseError{
    int characterNum;
    int rowNum;
    std::string textLine;
    std::string specificError;
    std::string getString(){return "Base Error";}
};

class CompilerErrorHandler{
    std::vector<BaseError*> errors;
public:
    void addError(BaseError* be){
        this->errors.push_back(be);
    }

    void printErrors(){
        for (int i = 0; i < errors.size(); i++){
            BaseError * be = errors[i];
            std::cout << std::string(std::max(be->getString().size(), be->textLine.size()), '#') << std::endl;
            std::cout << "Compiler Error - " << be->getString() << std::endl;
            std::cout << be->textLine << std::endl;
            std::cout << red << std::string(be->characterNum, ' ') << "^" << reset << std::endl;
            std::cout << std::string(std::max(be->getString().size(), be->textLine.size()), '#') << std::endl;
        }
    }

    ~CompilerErrorHandler(){
        for (int i = 0; i < errors.size(); i++){
            delete errors[i];
        }
    }
};

#endif