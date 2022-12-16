#include "exceptions.h"

const char * tooManyChars::what()const noexcept{
    return "too many characters";
}

const char* outOfBounds::what() const noexcept{
    return "out of bounds";
}