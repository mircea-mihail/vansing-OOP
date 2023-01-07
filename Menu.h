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
#include "IdGenerator.h"

using namespace std;

//singleton
class Menu{
private:
    static shared_ptr<Menu> singleMenu;
    void printOptions();
    Menu() = default;

public:
    static shared_ptr<Menu> getMenuInstance();
    void start();
    ~Menu() = default;
};

#endif
