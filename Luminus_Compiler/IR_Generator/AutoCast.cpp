//
// Created by shynn on 4/11/2022.
// The Goal of this section of code
// is to cast two sides of an expression
// to the same value, so that an operation can
// be enacted on them
//

#include "LuminusCompiler.h"

void LuminusCompiler::autoCast(Value *a, Value *b) {
    if (a->getType() == b->getType()) {
        return;
    } else {
        // Todo: Add warning handling here
        if (a->getType() == INT32_TYPE && b->getType() == FLOAT_TYPE) {
            b = Builder->CreateCast(Instruction::CastOps::SIToFP, a, FLOAT_TYPE);
        } else if (a->getType() == FLOAT_TYPE && b->getType() == INT32_TYPE) {
            a = Builder->CreateCast(Instruction::CastOps::SIToFP, b, FLOAT_TYPE);
        } else {
            throw std::runtime_error("Cannot auto cast!");
        }


    }
}