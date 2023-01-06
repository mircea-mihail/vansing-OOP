#include "Exceptions.h"

const char * TooManyChars::what()const noexcept{
    return "too many characters";
}

const char* OutOfBounds::what() const noexcept{
    return "out of bounds";
}