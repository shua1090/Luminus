# include "../LuminusCompiler.h"

antlrcpp::Any LuminusCompiler::visitReinitialization(LuminusParser::ReinitializationContext *context) {
    logger.addLog("Visiting Reinitialization Statement (" + context->getText() + ") at " + __FILE__ + " on " +
                  std::to_string(__LINE__));
    Value *lhs = this->visit(context->id).as<Value *>();
    Value *rhs = this->visit(context->value).as<Value *>();

    logger.addSpecificLog("LHS of reinitialization has type " + typeToString(lhs->getType()));
    logger.addSpecificLog("RHS of reinitialization has type " + typeToString(rhs->getType()));

    if (lhs->getType() != PointerType::get(rhs->getType(), 0)) {
        logger.addSpecificLog("Loading RHS, because LHS type != RHS type");
        rhs = Builder->CreateLoad(rhs->getType()->getContainedType(0), rhs);
    }
    logger.addSpecificLog("Leaving Reinitialization, creating store");
    return Builder->CreateStore(rhs, lhs);
}

