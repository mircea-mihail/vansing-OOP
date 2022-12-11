#ifndef VANSING_OOP_VANS_H
#define VANSING_OOP_VANS_H
#include <iostream>

class vans{
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

    virtual void pall() = 0;

    virtual~vans();
};


#endif //VANSING_OOP_VANS_H
