#include "IOStream.h"

std::ostream& operator<< (std::ostream & os, const IOStream & obj) {
    obj.pall();
    return os;
}

std::ostream& operator<< (std::ostream & os, const IOStream * obj) {
    obj -> pall();
    return os;
}

IOStream::~IOStream() = default;
