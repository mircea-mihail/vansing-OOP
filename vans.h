#ifndef VansING_OOP_Vans_H
#define VansING_OOP_Vans_H
#include <iostream>
#include "IOStream.h"

class Vans:public IOStream{
protected:
    int size;
    float price;

public:
    explicit Vans(int size_ = 0, float price_ = 0);
    Vans(const Vans& rhs);
    Vans& operator= (const Vans& rhs);

    void setSize(int newSize);
    void setPrice(float newPrice);

    int getSize() const;
    float getPrice() const;

    static void brandPrint();

    ~Vans() override;
};


#endif //VansING_OOP_Vans_H
