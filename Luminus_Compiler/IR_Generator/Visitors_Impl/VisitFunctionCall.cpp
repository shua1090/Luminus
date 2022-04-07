#include "../LuminusCompiler.h"

antlrcpp::Any LuminusCompiler::visitFunctionCall(LuminusParser::FunctionCallContext *context) {
    Function *f = TheModule->getFunction(context->funcid->getText());
    if (f == nullptr) {
        // TODO: FUNCTION DOESNT EXIST
        return nullptr;
    } else {
        int paramCount = f->getFunctionType()->getNumParams();
        std::cout << context->args.size();
        std::cout << "-" << paramCount << std::endl;
        if (context->args.size() != paramCount) {
            std::cout << "Param count incorrect!" << std::endl;
            // TODO: INCORRECT CALL!
        }
        std::vector<Value *> paramCallValues(context->args.size());
        for (int i = 0; i < context->args.size(); i++) {
//            if (f->getFunctionType()->getParamType(i)->isPointerTy()) {
//                paramCallValues[i] = svm.getVariable(context->args[i]->getText());
//            } else
            paramCallValues[i] = this->visit(context->args[i]).as<Value *>();
            std::cout << "Type (Func Call)" << i << " ";
            paramCallValues[i]->getType()->dump();
            std::cout << std::endl;
        }
        return static_cast<Value *> ( Builder->CreateCall(f, paramCallValues));
    }
}

antlrcpp::Any LuminusCompiler::visitFunc_Call_Expression(LuminusParser::Func_Call_ExpressionContext *context) {
    return this->visit(context->call).as<Value *>();
}