#ifndef VANSING_OOP_EXCEPTIONS_H
#define VANSING_OOP_EXCEPTIONS_H

#include <iostream>

class outOfBounds : public std::exception{
public:
    outOfBounds() = default;
    const char* what() const noexcept override;
};

class tooManyChars : public std::exception{
public:
    tooManyChars() = default;
    const char * what()const noexcept override;
};

#endif