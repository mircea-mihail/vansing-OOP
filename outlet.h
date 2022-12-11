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
    static void addVans(shared_ptr<vans>(newVans));
    static shared_ptr<vans> getVans(int vansPos);
    static void printShoes();
    static void printClothes();
    static void printAll();
};


#endif //VANSING_OOP_OUTLET_H
