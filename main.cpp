/*
    2 șabloane de proiectare
**        singleton


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
Menu * Menu::singleMenu = nullptr;

int main() {
    Menu *menu = Menu::getMenuInstance();
    menu->start();
    return 0;
}
