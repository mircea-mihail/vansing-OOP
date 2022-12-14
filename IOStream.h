#ifndef VANSING_OOP_IOSTREAM_H
#define VANSING_OOP_IOSTREAM_H
#include <iostream>

class IOStream {
protected:
    virtual void pall(std::ostream & ) const = 0;

    friend std::ostream& operator<< (std::ostream &, const IOStream & );
    friend std::ostream& operator<< (std::ostream &, const IOStream * );

    virtual~IOStream();
};


#endif
