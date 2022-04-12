# include "../LuminusCompiler.h"

antlrcpp::Any LuminusCompiler::visitReinitialization(LuminusParser::ReinitializationContext *context) {
    Value *lhs = this->visit(context->id).as<Value *>();
    Value *rhs = this->visit(context->value).as<Value *>();

    std::cout << "LEFT HAND: " << context->id->getText() << " " << typeToString(lhs->getType()) << std::endl;
    std::cout << "Right HAND: " << context->value->getText() << " " << typeToString(rhs->getType()) << std::endl;

    if (lhs->getType() != PointerType::get(rhs->getType(), 0)) {
        std::cout << "Mismatch Error!" << std::endl;
    }
    return Builder->CreateStore(rhs, lhs);
}

