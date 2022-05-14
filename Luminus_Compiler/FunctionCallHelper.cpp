//
// Created by shynn on 5/13/2022.
//

#include "LuminusCompiler.h"

Value *
LuminusCompiler::createFunctionCall(Value *precursor, LuminusParser::Func_Call_ExpressionContext *ctx, Function *f) {
    std::vector<Value *> args;
    if (precursor != nullptr) {
        args.push_back(precursor);
    }
    for (auto arg: ctx->call->args) {
        Value *argN = visit(arg).as<Value *>();
        args.push_back(argN);
    }
    return Builder->CreateCall(f, args);
    return nullptr;
}