//
// Created by shynn on 4/1/2022.
//

#include "../LuminusCompiler.h"

antlrcpp::Any LuminusCompiler::visitMultiplyOrDivide(LuminusParser::MultiplyOrDivideContext *context) {
    Value *left = this->visit(context->left).as<Value *>();
    Value *right = this->visit(context->right).as<Value *>();

    if (left->getType()->isPointerTy()) {
        left = Builder->CreateLoad(left->getType()->getContainedType(0), left);
    }
    if (right->getType()->isPointerTy()) {
        right = Builder->CreateLoad(right->getType()->getContainedType(0), right);
    }
    if (left->getType() == right->getType()) {

        auto opType = BinaryOperator::Mul;
        if (left->getType() == INT32_TYPE) {
            if (context->op->getText() == "/") {
                opType = BinaryOperator::SDiv;
            }
        } else if (left->getType() == FLOAT_TYPE) {
            opType = BinaryOperator::FMul;
            if (context->op->getText() == "/") {
                opType = BinaryOperator::FDiv;
            }
        }

        return Builder->CreateBinOp(opType,
                                    left,
                                    right
        );
    } else {
        std::cout << "Error in mul/div, printing" << std::endl;
        std::cout << "Left: " << std::endl;
        left->getType()->print(llvm::outs());
        std::cout << std::endl << "Right: ";
        right->getType()->print(llvm::outs());
        std::cout << std::endl;

        return nullptr;
    }
}