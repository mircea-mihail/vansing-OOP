#ifndef  VANSING_OOP_MENU_H
#define VANSING_OOP_MENU_H
#include <iostream>
#include <string>
#include <memory>
#include "shoes.h"
#include "clothes.h"
#include "vans.h"
#include "outlet.h"
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
