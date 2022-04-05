//
// Created by shynn on 4/1/2022.
//

#include "../LuminusCompiler.h"

antlrcpp::Any LuminusCompiler::visitCastToType(LuminusParser::CastToTypeContext *context) {
    Value *originalType = this->visit(context->inner).as<Value *>();
    auto destTy = this->textToType(context->cast_type->getText());


    if (originalType->getType() == FLOAT_PTR_TYPE) {
        originalType = Builder->CreateLoad(FLOAT_TYPE, originalType, "loadtmp");
    } else if (originalType->getType() == INT32_PTR_TYPE) {
        originalType = Builder->CreateLoad(INT32_TYPE, originalType, "loadtmp");
    }


    if (originalType->getType() == INT32_TYPE && destTy == FLOAT_TYPE) {
        return Builder->CreateCast(Instruction::SIToFP, originalType, destTy);
    } else if (originalType->getType() == FLOAT_TYPE && destTy == INT32_TYPE) {
        return Builder->CreateCast(Instruction::FPToSI, originalType, destTy);
    } else throw std::exception("! Cast not supported !");
}