//
// Created by shynn on 4/6/2022.
//

#ifndef LUMINUS_VISITCONDITIONALS_CPP
#define LUMINUS_VISITCONDITIONALS_CPP

#include "../LuminusCompiler.h"

antlrcpp::Any LuminusCompiler::visitConditional_statement(LuminusParser::Conditional_statementContext *context) {
    Value *firstCondition = this->visit(context->if_teil->value).as<Value *>();

    auto origBlock = Builder->GetInsertBlock();

    BasicBlock *succesfulCondition = llvm::BasicBlock::Create(*TheContext, "condsuccess", curFunction);
    BasicBlock *cont = llvm::BasicBlock::Create(*TheContext, "cont", curFunction);
    Builder->SetInsertPoint(succesfulCondition);
    this->visitChildren(context->if_teil->execute_vals);

    if (!this->returns) {
        Builder->CreateBr(cont);
    }
    this->returns = false;

    Builder->SetInsertPoint(origBlock);
    Builder->CreateCondBr(firstCondition, succesfulCondition, cont);
    Builder->SetInsertPoint(cont);

    for (int i = 0; i < context->else_if_container.size(); i++) {
        Value *condCheck = this->visit(context->else_if_container[i]->value).as<Value *>();

        BasicBlock *succesfulElifCondition = llvm::BasicBlock::Create(*TheContext, "elifcondsuccess", curFunction);
        BasicBlock *contCondition = llvm::BasicBlock::Create(*TheContext, "elifcont", curFunction);
        Builder->SetInsertPoint(succesfulElifCondition);
        this->visitChildren(context->else_if_container[i]->ops);
        if (!this->returns) {
            Builder->CreateBr(contCondition);
        }
        this->returns = false;
        Builder->SetInsertPoint(cont);
        Builder->CreateCondBr(condCheck, succesfulElifCondition, contCondition);
        Builder->SetInsertPoint(contCondition);
        cont = contCondition;
    }
    return antlrcpp::Any();
}

#endif //LUMINUS_VISITCONDITIONALS_CPP
