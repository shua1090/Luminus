//
// Created by shynn on 4/6/2022.
//

#ifndef LUMINUS_VISITCONDITIONALS_CPP
#define LUMINUS_VISITCONDITIONALS_CPP

#include "../LuminusCompiler.h"

antlrcpp::Any LuminusCompiler::visitConditional_statement(LuminusParser::Conditional_statementContext *context) {
    Value *firstCondition = this->visit(context->if_teil->value).as<Value *>();
    if (context->else_if_container.empty() && context->else_teil == nullptr) {
        std::cout << "Condition!" << std::endl;

        auto origBlock = Builder->GetInsertBlock();

        BasicBlock *succesfulCondition = llvm::BasicBlock::Create(*TheContext, "ifcondsuccess", curFunction);
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
    }
    return antlrcpp::Any();
}

#endif //LUMINUS_VISITCONDITIONALS_CPP
