#ifndef VansING_OOP_Vans_H
#define VansING_OOP_Vans_H
#include <iostream>
#include "IOStream.h"
#include "IdGenerator.h"

class Vans:public IOStream{
protected:
    int id;
    int size;
    float price;

public:
    explicit Vans(int size_ = 0, float price_ = 0);
    Vans(const Vans& rhs);
    Vans& operator= (const Vans& rhs);

    void setSize(int newSize);
    void setPrice(float newPrice);
    void setId(int newId);

    int getSize() const;
    float getPrice() const;
    int getId() const;

    static void brandPrint();

    ~Vans() override;
};


#endif
