/*
--    2 design patterns
**        singleton --> the menu
--        decorator --> vans logo print?

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

int main() {
    shared_ptr<Menu> menu = Menu::getMenuInstance();
    menu->start();
    return 0;
}
