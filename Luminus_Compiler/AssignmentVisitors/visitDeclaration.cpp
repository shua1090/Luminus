//
// Created by shynn on 4/25/2022.
//

#include "../LuminusCompiler.h"

antlrcpp::Any LuminusCompiler::visitDecl_stmt(LuminusParser::Decl_stmtContext *context) {
    std::cout << "HereNice" << std::endl;
    auto *vaste = Builder->CreateAlloca(Type::getInt32Ty(*TheContext), nullptr, context->id->getText());
    vaste->addAnnotationMetadata(context->getText());
    this->vm.addVariable(context->id->getText(), vaste);
    return vaste;
}