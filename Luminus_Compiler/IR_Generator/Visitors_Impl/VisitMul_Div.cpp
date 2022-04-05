//
// Created by shynn on 4/1/2022.
//

#include "../LuminusCompiler.h"

antlrcpp::Any LuminusCompiler::visitMultiplyOrDivide(LuminusParser::MultiplyOrDivideContext *context) {
    Value *left = this->visit(context->left).as<Value *>();
    Value *right = this->visit(context->right).as<Value *>();

    auto opType = BinaryOperator::Mul;

    if (context->op->getText() == "/") {
        opType = BinaryOperator::FDiv;
    }
    if (left->getType()->isPointerTy()) {
        left = Builder->CreateLoad(INT32_TYPE, left);
    }
    if (right->getType()->isPointerTy()) {
        right = Builder->CreateLoad(INT32_TYPE, right);
    }
    if (left->getType() == right->getType()) {
        return Builder->CreateBinOp(opType,
                                    left,
                                    right
        );
    } else {
        std::cout << "Error in this method, printing" << std::endl;
        std::cout << "Left: " << std::endl;
        left->getType()->print(llvm::outs());
        std::cout << std::endl << "Right: ";
        right->getType()->print(llvm::outs());
        std::cout << std::endl;

        return nullptr;
    }
}