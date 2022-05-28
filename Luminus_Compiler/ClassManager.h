#ifndef LUMINUS_CLASSMANAGER_H
#define LUMINUS_CLASSMANAGER_H

#include "LuminusCompiler.h"

struct InnerClass{
    std::string className;
    StructType *type;
    std::vector<std::string> fields;
    std::vector<Function*> functions;

    Function * getFunction(std::string funcName){
        for(Function *f : functions){
            if(f->getName() == funcName) return f;
        }
        return nullptr;
    }
};

class ClassManager {
    std::unordered_map<std::string, InnerClass*> innerClasses;
public:
    ClassManager(){
        innerClasses = std::unordered_map<std::string, InnerClass*>();
    }

    void addInnerClass(std::string className, InnerClass * ic){
        innerClasses[className] = ic;
    }

    InnerClass * getInnerClass(std::string className){
        auto a = innerClasses[className];
        return innerClasses[className];
    }

    ~ClassManager(){
        for(auto &innerClass : innerClasses){
            delete innerClass.second;
        }
    }
};

#endif
