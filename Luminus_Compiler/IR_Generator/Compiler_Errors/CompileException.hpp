#ifndef COMPILER_EXCEPTIONS_H
#define COMPILER_EXCEPTIONS_H

#include <string>
#include <utility>
#include <vector>
#include <iostream>
#include <thread>
#include <chrono>

namespace colors {
    std::string red = "\033[91m";
    std::string green = "\033[92m";
    std::string yellow = "\033[93m";
    std::string blue = "\033[94m";
    std::string purple = "\033[95m";
    std::string underline_on = "\033[4m";
    std::string underline_off = "\033[24m";

    std::string move_forward = "\033[%dC";
    std::string move_backward = "\033[%dD";

    std::string reset = "\033[0m";
}
using namespace std::chrono_literals;

struct BaseError {
    int characterNum;
    int rowNum;
    std::string textLine;
    std::string specificError;

    std::string getString() { return "Base Error"; }
};

struct BaseWarning : BaseError {
    std::string getString() { return "Base Warning"; }
};

class CompilerErrorHandler {
    std::vector<BaseError *> errors;
    std::string fileName;
    std::vector<std::string> fileData;
public:
    CompilerErrorHandler(std::string fileName) {
        this->fileName = fileName;
        auto inpStream = std::ifstream(fileName);
        int i = 0;
        std::string tempLine;
        while (std::getline(inpStream, tempLine)) {
            this->fileData.push_back(tempLine);
        }
    }

    void addError(BaseError *be, antlr4::ParserRuleContext rc, std::string specific_error) {
        be->characterNum = rc.getStart()->getCharPositionInLine();
        be->rowNum = rc.getStart()->getLine();
        be->specificError = std::move(specific_error);
        be->textLine = fileData[be->rowNum][be->characterNum];
        this->errors.push_back(be);
    }

    void printErrors() {
        for (int i = 0; i < errors.size(); i++) {
            BaseError *be = errors[i];
            std::string ErrorDescription = "Compilation Error - " + be->getString();
            std::cout << std::string(std::max(ErrorDescription.size(), be->textLine.size()), '#') << std::endl;
            std::cout << ErrorDescription << std::endl;
            std::cout << colors::yellow << be->textLine << colors::reset << std::endl;
            std::cout << colors::red << std::string(be->characterNum, ' ') << "^" << colors::reset << std::endl;
            std::cout << colors::red << be->specificError << colors::reset << std::endl;
            std::cout << std::string(std::max(ErrorDescription.size(), be->textLine.size()), '#') << std::endl;
        }
    }

    ~CompilerErrorHandler(){
        for (int i = 0; i < errors.size(); i++){
            delete errors[i];
        }
    }

};

#endif