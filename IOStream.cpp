#include "IOStream.h"

std::ostream& operator<< (std::ostream & os, const IOStream & obj) {
    obj.pall(os);
    return os;
}

std::ostream& operator<< (std::ostream & os, const IOStream * obj) {
    obj -> pall(os);
    return os;
}

IOStream::~IOStream() = default;
