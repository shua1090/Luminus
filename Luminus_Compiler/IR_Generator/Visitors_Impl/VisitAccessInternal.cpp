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
    std::cout << "Visit Access Internal" << std::endl;
    Value *left = this->visit(context->exp).as<Value *>();
    std::string right = context->accessed_element->getText();
    if (!left->getType()->isPointerTy() && !left->getType()->
            getContainedType(0)->isStructTy()
            ) {
        throw std::exception("Error! LHS is not a struct!");
    }
    std::string structname = left->getType()->getContainedType(0)->getStructName().str();
    if (sdm.getVariable(structname) == nullptr) {
        throw std::exception("Struct doesn't exist???");
    }
    auto tempVar = sdm.getVariable(structname);
    std::cout << "structName: " << structname << std::endl;
    int index = findIndex(tempVar->argsAsStrings, right);
    if (index == -1) {
        throw std::exception(("That Member doesn't exist!" + right).c_str());
    }

    std::cout << "left: " << typeToString(left->getType()) << std::endl;
    std::cout << "type: " << typeToString(tempVar->typeOfStruct) << std::endl;
    std::cout << "val: " << typeToString(tempVar->typeOfStruct->getContainedType(index)) << std::endl;

    std::cout << (cast<PointerType>(left->getType())->isOpaqueOrPointeeTypeMatches(tempVar->typeOfStruct)) << std::endl;

    Value *gip = Builder->CreateInBoundsGEP(tempVar->typeOfStruct, left,
                                            {ConstantInt::get(INT32_TYPE, 0),
                                             ConstantInt::get(INT32_TYPE, index)
                                            }, "LoadStructData");
    std::cout << "gip!" << std::endl;
    return gip;
}

