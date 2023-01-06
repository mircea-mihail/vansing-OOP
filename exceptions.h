#ifndef VANSING_OOP_EXCEPTIONS_H
#define VANSING_OOP_EXCEPTIONS_H

#include <iostream>

class OutOfBounds : public std::exception{
public:
    OutOfBounds() = default;
    const char* what() const noexcept override;
};

class TooManyChars : public std::exception{
public:
    TooManyChars() = default;
    const char * what()const noexcept override;
};

#endif