//
// Created by shynn on 4/10/2022.
//

#ifndef LUMINUS_TYPEERRORS_HPP
#define LUMINUS_TYPEERRORS_HPP

#include "./CompileException.hpp"

struct TypeError : BaseError {
    std::string getString() {
        return "TypeError <- " + BaseError::getString();
    }
};


struct TypeMismatchError : TypeError {
    std::string getString() {
        return "TypeMismatchError <- " + TypeError::getString();
    }
};

#endif //LUMINUS_TYPEERRORS_HPP
