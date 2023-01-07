#ifndef VANSING_OOP_OUTLETFACADE_H
#define VANSING_OOP_OUTLETFACADE_H

#include <iostream>
#include "Outlet.h"
using namespace std;

//limited functionality facade directed towards the customer
//who is only able to purchase not to make changes to the stock

class OutletFacade {

public:
    OutletFacade() = default;

    static void print();

    ~OutletFacade() = default;
};



#endif //VANSING_OOP_OUTLETFACADE_H
