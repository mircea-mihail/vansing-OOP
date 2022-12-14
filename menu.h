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

class menu{
private:
    static void print_options();

public:
    menu() = delete;
    static void start();
};

#endif
