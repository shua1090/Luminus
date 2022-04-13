#include "../LuminusCompiler.h"

antlrcpp::Any LuminusCompiler::visitFunctionCall(LuminusParser::FunctionCallContext *context) {
    logger.addLog("Visiting FunctionCall Expression (" + context->getText() + ") at " + __FILE__ + " on " +
                  std::to_string(__LINE__));
    Function *f = TheModule->getFunction(context->funcid->getText());
    if (f == nullptr) {
        // TODO: FUNCTION DOESNT EXIST
        logger.addLog("Function " + context->funcid->getText() + " DNE!");
        return nullptr;
    } else {
        int paramCount = f->getFunctionType()->getNumParams();
        std::vector<Value *> paramCallValues(context->args.size());
        for (int i = 0; i < context->args.size(); i++) {
            paramCallValues[i] = this->visit(context->args[i]).as<Value *>();
            logger.addSpecificLog(
                    "Parameter " + std::to_string(i) + " has type " + typeToString(paramCallValues[i]->getType()));


            if (paramCallValues[i]->getType()->isPointerTy()
                && !(i < f->arg_size() && paramCallValues[i]->getType() == f->getArg(i)->getType())
                && context->args[i]->getText().find('&') == std::string::npos
                    )
                //svm.getVariable(removeAllStars(context->args[i]->getText())) != nullptr
            {
                if (paramCallValues[i]->getType()->getContainedType(0)->isArrayTy()) {
                    logger.addSpecificLog("Found array type for parameter " + std::to_string(i) + ", using GEP on it");
                    paramCallValues[i] = Builder->CreateGEP(paramCallValues[i]->getType()->getContainedType(0),
                                                            paramCallValues[i],
                                                            {ConstantInt::get(INT32_TYPE, 0),
                                                             ConstantInt::get(INT32_TYPE, 0)
                                                            }
                    );
                } else {
                    logger.addSpecificLog(
                            "Found pointer type for parameter " + std::to_string(i) + ", loading its value");
                    paramCallValues[i] = Builder->CreateLoad(paramCallValues[i]->getType()->getContainedType(0),
                                                             paramCallValues[i]);
                }
            }

        }
        logger.addLog("Leaving Function Call");
        return static_cast<Value *> ( Builder->CreateCall(f, paramCallValues));
    }
}

antlrcpp::Any LuminusCompiler::visitFunc_Call_Expression(LuminusParser::Func_Call_ExpressionContext *context) {
    return this->visit(context->call).as<Value *>();
}