//
// Created by mircea on 1/7/23.
//

#include "OutletFacade.h"

void OutletFacade::print(){
    cout << "    shoes available:\n";
    Outlet::printShoes();
    cout << Outlet::getNoShoes() << " shoes\n\n";
    cout << "    clothes available:\n";
    Outlet::printClothes();
    cout << Outlet::getNoClothes() << " clothes\n\n";
    cout << "in total, there are " << Outlet::noItems() << " items\n";

}