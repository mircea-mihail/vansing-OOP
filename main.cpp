/*
--    2 design patterns
**        singleton --> the menu
--        facade    --> make a facade to get detailed info of the stock

    o clasă șablon (template)
    o metodă șablon                         --> cheapest shoe/cloth (outlet)
    o metodă / clasă template specializată

    o clasă pentru generat IDuri pentru obiecte

    metodă clone

**    code style
**        classes:    PascalCase
**        methods:    camelCase
**        variables:  camelCase

    diagrama UML a proiectului
*/

#include "Menu.h"

using namespace std;

vector<shared_ptr<Vans>> Outlet::v;
shared_ptr<Menu> Menu::singleMenu = nullptr;

int Outlet::noShoes = 0;
int Outlet::noClothes = 0;

int main() {
    shared_ptr<Menu> menu = Menu::getMenuInstance();
    menu->start();
    return 0;
}
