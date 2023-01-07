#ifndef  VANSING_OOP_MENU_H
#define VANSING_OOP_MENU_H
#include <iostream>
#include <string>
#include <memory>
#include "Shoes.h"
#include "Clothes.h"
#include "Vans.h"
#include "Outlet.h"
#include "IOStream.h"

using namespace std;

//singleton
class Menu{
private:
    static Menu* singleMenu;
    void printOptions();
    Menu() = default;

public:
    static Menu* getMenuInstance();
    void start();
    ~Menu() = default;
};

#endif
