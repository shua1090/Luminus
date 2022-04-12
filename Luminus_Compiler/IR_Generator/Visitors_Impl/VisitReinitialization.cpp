# include "../LuminusCompiler.h"

antlrcpp::Any LuminusCompiler::visitReinitialization(LuminusParser::ReinitializationContext *context) {
    std::cout << "Visit Reinit2!" << std::endl;
    Value *lhs = this->visit(context->id).as<Value *>();
    std::cout << "Left lhs" << std::endl;
    Value *rhs = this->visit(context->value).as<Value *>();
    std::cout << "Came out of the thing" << std::endl;
    std::cout << typeToString(lhs->getType()) << std::endl;
    std::cout << typeToString(rhs->getType()) << std::endl;
    if (lhs->getType() != PointerType::get(rhs->getType(), 0)) {
        std::cout << "Mismatch Error!" << std::endl;
    }
    std::cout << "Here!" << std::endl;
    return Builder->CreateStore(rhs, lhs);
}

