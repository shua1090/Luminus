#ifndef COMPILER_EXCEPTIONS_H
#define COMPILER_EXCEPTIONS_H

#include <string>
#include <vector>
#include <iostream>
#include <thread>
#include <chrono>


std::string red = "\033[91m";
std::string green = "\033[92m";
std::string yellow = "\033[93m";
std::string blue = "\033[93m";
std::string purple = "\033[95m";
std::string underline_on = "\033[4m";
std::string underline_off = "\033[24m";

std::string move_forward = "\033[%dC";
std::string move_backward = "\033[%dD";

std::string reset = "\033[0m";

using namespace std::chrono_literals;

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
        std::string firstText = "Hello, I am cool!";
        std::string secondText = "Wait replace that, one sec!";
        std::string thirdText = "Nicedude yup!";
        std::string arr[]{firstText, secondText, thirdText};
        std::cout << "nice" << std::endl;
        
        std::cout << firstText;
        std::this_thread::sleep_for(1s);
        printf(move_backward.c_str(), firstText.size());
        fflush(stdout);

        std::cout << secondText;
        std::this_thread::sleep_for(1s);
        printf(move_backward.c_str(), firstText.size());
        fflush(stdout);
        std::this_thread::sleep_for(3s);
        std::cout << std::endl;
    }

    ~CompilerErrorHandler(){
        for (int i = 0; i < errors.size(); i++){
            delete errors[i];
        }
    }
};

#endif