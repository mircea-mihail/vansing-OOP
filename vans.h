#ifndef VANSING_OOP_VANS_H
#define VANSING_OOP_VANS_H
#include <iostream>
#include "IOStream.h"

class vans:public IOStream{
protected:
    int size;
    float price;

public:
    explicit vans(int size_ = 0, float price_ = 0);
    vans(const vans& rhs);
    vans& operator= (const vans& rhs);

    void setSize(int newSize);
    void setPrice(float newPrice);

    int getSize() const;
    float getPrice() const;

    static void brandPrint();

    ~vans() override;
};


#endif //VANSING_OOP_VANS_H
