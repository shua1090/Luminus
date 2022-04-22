//
// Created by shynn on 4/6/2022.
//

#ifndef LUMINUS_VISITCONDITIONALS_CPP
#define LUMINUS_VISITCONDITIONALS_CPP

#include "../LuminusCompiler.h"

antlrcpp::Any LuminusCompiler::visitConditional_statement(LuminusParser::Conditional_statementContext *context) {
    logger.addLog("Visiting Conditional Statement (" + context->getText() + ") at " + __FILE__ + " on " +
                  std::to_string(__LINE__));
    Value *firstCondition = this->visit(context->if_teil->value).as<Value *>();
    logger.addSpecificLog("First Condition evaluates to something of type " + typeToString(firstCondition->getType()));
    auto origBlock = Builder->GetInsertBlock();

    BasicBlock *succesfulCondition = llvm::BasicBlock::Create(*TheContext, "condsuccess", curFunction);
    BasicBlock *cont = llvm::BasicBlock::Create(*TheContext, "cont", curFunction);
    Builder->SetInsertPoint(succesfulCondition);
    logger.addSpecificLog("Visiting Children of succesful condition");
    this->visitChildren(context->if_teil->execute_vals);

    if (!this->returns) {
        Builder->CreateBr(cont);
    }
    this->returns = false;

    Builder->SetInsertPoint(origBlock);
    Builder->CreateCondBr(firstCondition, succesfulCondition, cont);
    Builder->SetInsertPoint(cont);
    logger.addSpecificLog("Finished initial if statement visit");
    for (int i = 0; i < context->else_if_container.size(); i++) {
        logger.addSpecificLog("Beginning elif statement visit");
        Value *condCheck = this->visit(context->else_if_container[i]->value).as<Value *>();\
        logger.addSpecificLog("Condition evaluates to something with type " + typeToString(condCheck->getType()));

        BasicBlock *succesfulElifCondition = llvm::BasicBlock::Create(*TheContext, "elifcondsuccess", curFunction);
        BasicBlock *contCondition = llvm::BasicBlock::Create(*TheContext, "elifcont", curFunction);
        Builder->SetInsertPoint(succesfulElifCondition);
        logger.addSpecificLog("Visiting elif children");
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
    logger.addSpecificLog("Leaving Conditional Statement");
    return antlrcpp::Any();
}

#endif //LUMINUS_VISITCONDITIONALS_CPP
