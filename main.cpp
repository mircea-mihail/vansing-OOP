/*
    2 șabloane de proiectare
        o clasă șablon (template)

    o metodă șablon
        o metodă / clasă template specializată
        o clasă pentru generat IDuri pentru obiecte

    metodă clone

--    code style
        classes:    PascalCase
        methods:    camelCase
        variables:  camelCase

    diagrama UML a proiectului
*/

#include "menu.h"

using namespace std;

vector<shared_ptr<Vans>> Outlet::v;


int main() {
    Menu::start();
    return 0;
}
