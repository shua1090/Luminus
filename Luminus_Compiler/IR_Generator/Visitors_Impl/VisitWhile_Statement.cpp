//
// Created by shynn on 4/10/2022.
//

#include "../LuminusCompiler.h"

antlrcpp::Any LuminusCompiler::visitWhile_statement(LuminusParser::While_statementContext *context) {
    auto loopBlock = BasicBlock::Create(*TheContext, "loop", curFunction);
    auto contBlock = BasicBlock::Create(*TheContext, "continue_while", curFunction);

    auto cond = this->visit(context->condition).as<Value *>();
    Builder->CreateCondBr(cond, loopBlock, contBlock);

    Builder->SetInsertPoint(loopBlock);
    this->visit(context->ops);
    auto whileCond = this->visit(context->condition).as<Value *>();
    Builder->CreateCondBr(whileCond, loopBlock, contBlock);
    Builder->SetInsertPoint(contBlock);
    return nullptr;
}