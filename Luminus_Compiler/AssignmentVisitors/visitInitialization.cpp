//
// Created by shynn on 4/25/2022.
//

#include "../LuminusCompiler.h"

antlrcpp::Any LuminusCompiler::visitInit_stmt(LuminusParser::Init_stmtContext *context) {
    Type * type = getType(context->type->getText());
    Value * rhs = this->visit(context->rhs).as<Value*>();

    auto *vaste = Builder->CreateAlloca(type, nullptr, context->id->getText());
    std::string text="";
    text += context->type->getText();
    text += " ";
    text += context->id->getText();
    text += " = ";
    text += context->rhs->getText();
    text += ";";

    vaste->addAnnotationMetadata(
            text
    );
    vaste->addAnnotationMetadata(context->getText());
    if (rhs->getType() != type) {
        std::cout << "RHS Type != LHS Type" << std::endl;
        exit(1);
    }
    Builder->CreateStore(rhs, vaste);
    this->vm.addVariable(context->id->getText(), vaste);
    return vaste;
}