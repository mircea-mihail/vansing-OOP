#ifndef VANSING_OOP_OUTLET_H
#define VANSING_OOP_OUTLET_H
#include <iostream>
#include <memory>
#include <vector>
#include "Shoes.h"
#include "Clothes.h"
#include "Vans.h"


using namespace std;

class Outlet{
private:
    static vector <shared_ptr<Vans>> v;
public:
    Outlet() = delete;

    static void addVans(const shared_ptr<Vans>(&newVans));
    static shared_ptr<Vans> getVans(int vansPos);
    static unsigned long noItems();

    static void printShoes();
    static void printClothes();
    static void printAll();

    static void addDefault();
    static void deleteItem(int pos);
    static void deleteAll();

    ~Outlet();
};


#endif //VANSING_OOP_OUTLET_H
