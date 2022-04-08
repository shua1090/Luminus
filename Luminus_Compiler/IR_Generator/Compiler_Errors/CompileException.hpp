#ifndef COMPILER_EXCEPTIONS_H
#define COMPILER_EXCEPTIONS_H

#include <string>
#include <vector>
#include <iostream>

struct BaseError{
    int characterNum;
    int rowNum;
    std::string textLine;
    std::string specificError;
    virtual std::string getString();
};

class CompilerErrorHandler{
    std::vector<BaseError*> errors;
    void addError(BaseError* be){
        this->errors.push_back(be);
    }
    void printErrors(){
        for (int i = 0; i < errors.size(); i++){
            BaseError * be = errors[i];
            std::cout << "Compiler Error - " << be->getString() << std::endl;
            std::cout << be->textLine << std::endl;
            
        }
    }
};

#endif