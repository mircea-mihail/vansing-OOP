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

class Menu{
private:
    static void printOptions();


public:
    Menu() = delete;
    static void start();
};

#endif
