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
    static vector <shared_ptr<vans>> v;
public:
    outlet() = delete;

    static void addVans(const shared_ptr<vans>(&newVans));
    static shared_ptr<vans> getVans(int vansPos);
    static unsigned long noItems();

    static void printShoes();
    static void printClothes();
    static void printAll();

    static void addDefault();
    static void deleteItem(int pos);
    static void deleteAll();

    ~outlet();
};


#endif //VANSING_OOP_OUTLET_H
