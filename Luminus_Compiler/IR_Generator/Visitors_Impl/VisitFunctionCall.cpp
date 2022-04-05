#include "../LuminusCompiler.h"

antlrcpp::Any LuminusCompiler::visitFunctionCall(LuminusParser::FunctionCallContext *context) {
    Function *f = TheModule->getFunction(context->funcid->getText());
    if (f == nullptr) {
        // TODO: FUNCTION DOESNT EXIST
        return nullptr;
    } else {
        int paramCount = f->getFunctionType()->getNumParams();

        if (context->args.size() != paramCount) {
            std::cout << "Param count incorrect!" << std::endl;
            // TODO: INCORRECT CALL!
        }
        std::vector<Value *> paramCallValues(paramCount);
        for (int i = 0; i < paramCallValues.size(); i++) {
            if (f->getFunctionType()->getParamType(i)->isPointerTy()) {
                paramCallValues[i] = svm.getVariable(context->args[i]->getText());
            } else paramCallValues[i] = this->visit(context->args[i]).as<Value *>();
            std::cout << "Type " << i << " ";
            paramCallValues[i]->getType()->dump();
            std::cout << std::endl;
            if (paramCallValues[i]->getType() != f->getFunctionType()->getParamType(i)) {
                //TODO: INCORRECT CALL TYPES
            }
        }
        return static_cast<Value *> ( Builder->CreateCall(f, paramCallValues));
    }
}

antlrcpp::Any LuminusCompiler::visitFunc_Call_Expression(LuminusParser::Func_Call_ExpressionContext *context) {
    return this->visit(context->call).as<Value *>();
}