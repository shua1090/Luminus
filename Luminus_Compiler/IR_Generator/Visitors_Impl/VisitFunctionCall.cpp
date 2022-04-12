#include "../LuminusCompiler.h"

antlrcpp::Any LuminusCompiler::visitFunctionCall(LuminusParser::FunctionCallContext *context) {
    Function *f = TheModule->getFunction(context->funcid->getText());
    if (f == nullptr) {
        // TODO: FUNCTION DOESNT EXIST
        return nullptr;
    } else {
        int paramCount = f->getFunctionType()->getNumParams();
        std::vector<Value *> paramCallValues(context->args.size());
        for (int i = 0; i < context->args.size(); i++) {
            paramCallValues[i] = this->visit(context->args[i]).as<Value *>();
            paramCallValues[i]->getType()->dump();
            if (paramCallValues[i]->getType()->isPointerTy()
                && !(i < f->arg_size() && paramCallValues[i]->getType() == f->getArg(i)->getType()))
                //svm.getVariable(removeAllStars(context->args[i]->getText())) != nullptr
            {
                paramCallValues[i] = Builder->CreateLoad(paramCallValues[i]->getType()->getContainedType(0),
                                                         paramCallValues[i]);
                paramCallValues[i]->getType()->dump();
            }
        }
        return static_cast<Value *> ( Builder->CreateCall(f, paramCallValues));
    }
}

antlrcpp::Any LuminusCompiler::visitFunc_Call_Expression(LuminusParser::Func_Call_ExpressionContext *context) {
    return this->visit(context->call).as<Value *>();
}