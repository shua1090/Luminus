//
// Created by shynn on 4/11/2022.
//

#include "../LuminusCompiler.h"

int findIndex(std::vector<std::string> vec, std::string letter) {
    for (int i = 0; i < vec.size(); i++) {
        if (vec[i] == letter) {
            return i;
        }
    }
    return -1;
}

antlrcpp::Any LuminusCompiler::visitAccessInternal(LuminusParser::AccessInternalContext *context) {
    logger.addLog("Visiting AccessInternal expression (" + context->getText() + ") at " + __FILE__ + " on " +
                  std::to_string(__LINE__));
    Value *left = this->visit(context->exp).as<Value *>();
    logger.addSpecificLog("Found the thing being accessed, it has a type of " + typeToString(left->getType()));
    std::string right = context->accessed_element->getText();
    if (!left->getType()->isPointerTy() && !left->getType()->
            getContainedType(0)->isStructTy()
            ) {
        logger.addLog("The thing being accessed is not a valid struct!");
        throw std::runtime_error("Error! LHS is not a struct!");
    }
    std::string structname = left->getType()->getContainedType(0)->getStructName().str();
    if (sdm.getVariable(structname) == nullptr) {
        logger.addLog("The struct " + structname + " doesn't exist");
        throw std::runtime_error("Struct doesn't exist???");
    }
    auto tempVar = sdm.getVariable(structname);
    int index = findIndex(tempVar->argsAsStrings, right);
    logger.addSpecificLog("Index being accessed in the struct is " + std::to_string(index));
    if (index == -1) {
        logger.addLog("Index of element being accessed in struct DNE!");
        throw std::runtime_error(("That Member doesn't exist!" + right).c_str());
    }

    logger.addSpecificLog("Creating GEP for structure (type of struct: " + typeToString(left->getType()) + ")");

    Value *gip = Builder->CreateInBoundsGEP(tempVar->typeOfStruct, left,
                                            {ConstantInt::get(INT32_TYPE, 0),
                                             ConstantInt::get(INT32_TYPE, index)
                                            }, "LoadStructData");

    return gip;
}

