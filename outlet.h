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

class outlet:vans{
private:
    static vector <shared_ptr<vans>> v;
public:
    outlet() = delete;

    static void addVans(const shared_ptr<vans>(&newVans));
    static shared_ptr<vans> getVans(int vansPos);
    static unsigned long no_items();

    static void printShoes();
    static void printClothes();
    static void printAll();

    static void addDefault();
    static void deleteItem(int a);
    static void deleteAll();

    ~outlet() override;
};


#endif //VANSING_OOP_OUTLET_H
