//
// Created by mircea on 12/11/22.
//

#ifndef VANSING_OOP_OUTLET_H
#define VANSING_OOP_OUTLET_H
#include <iostream>
#include <memory>
#include <vector>
#include "shoes.h"
#include "clothes.h"
#include "vans.h"


using namespace std;

class outlet{
private:
    vector <shared_ptr<vans>> v;
public:
    outlet() = default;

    void addVans(const shared_ptr<vans>(&newVans));
    shared_ptr<vans> getVans(int vansPos);
    unsigned long no_items();

    void printShoes();
    void printClothes();
    void printAll();

    void addDefault();
    void deleteItem(int pos);
    void deleteAll();

    ~outlet();
};


#endif //VANSING_OOP_OUTLET_H
