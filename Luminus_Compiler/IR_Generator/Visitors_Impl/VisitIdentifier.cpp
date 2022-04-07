//
// Created by shynn on 4/1/2022.
//

#include "../LuminusCompiler.h"

antlrcpp::Any LuminusCompiler::visitIdentifierExpression(LuminusParser::IdentifierExpressionContext *context) {
    Value *var = this->svm.getVariable(context->id->getText());
    if (var == nullptr) throw std::exception("ERR!");
    std::cout << "Type (ID):";
    var->dump();
    std::cout << std::endl;
    if (var->getType() == INT32_PTR_TYPE) {
        std::cout << "Load Int32" << std::endl;
        var = Builder->CreateLoad(INT32_TYPE, var);
        std::cout << "Is it still a pointer??? " << var->getType()->isPointerTy() << std::endl;
    } else if (var->getType() == FLOAT_PTR_TYPE) {
        std::cout << "Load Float" << std::endl;
        var = Builder->CreateLoad(FLOAT_TYPE, var);
    } else {
        throw std::exception("ERR!");
    }

    return var;
}