#include "Menu.h"
#include "Exceptions.h"

void Menu::printOptions(){
    cout << "\nShoes:   1-add   11-data  12-all\n";
    cout << "Clothes: 2-add   21-data  22-all\n";
    cout << "all:     3-els   31-all   32-add def\n";
    cout << "delete:  4-item  41-all   42-end\n\n";
}

shared_ptr<Menu> Menu::getMenuInstance(){
    if(singleMenu == nullptr) {
        shared_ptr<Menu> auxPtr(new Menu);
        singleMenu = auxPtr;
    }

    return singleMenu;
}

void Menu::start(){
    bool go_loop; char auxChar; string auxString2;
    string auxString; bool auxBool; int auxInt; float auxFloat;
    shared_ptr<Shoes> auxshoe;
    shared_ptr<Clothes> auxcloth;
    go_loop = true;
    while(go_loop){
        printOptions();
        int case_val;
        cin >> case_val;
        try {
            switch (case_val) {
                case (1):
                    cout << "model:      ";
                    cin >> auxString;
                    cout << "laces(y/n): ";
                    cin >> auxString2;
                    if(auxString2[1] != '\0')
                        throw TooManyChars();
                    auxChar = auxString2[0];
                    if (auxChar == 'y' || auxChar == 'Y')
                        auxBool = true;
                    else
                        auxBool = false;
                    cout << "size:       ";
                    cin >> auxInt;
                    cout << "price:      ";
                    cin >> auxFloat;
                    auxshoe = make_shared<Shoes>(auxInt, auxFloat, auxString, auxBool);
                    Outlet::addVans(auxshoe);
                    auxshoe->brandPrint();
                    break;
                case (11):
                    cout << "what shoe to display data for?\n";
                    cin >> auxInt;
                    if (auxInt >= Outlet::noItems())
                        throw OutOfBounds();
                    if (typeid(Shoes) == typeid(*(Outlet::getVans(auxInt)))) {
                        auxshoe = dynamic_pointer_cast<Shoes>(Outlet::getVans(auxInt));
                        auxshoe->printShoeAsc();
                        cout << auxshoe; // same as auxshoe->pall();
                    } else cout << "the item is not a shoe\n";
                    break;
                case (12):
                    Outlet::printShoes();
                    break;

                case (2):
                    cout << "item:     ";
                    cin >> auxString;
                    cout << "sex(m/f): ";
                    cin >> auxString2;
                    if(auxString2[1] != '\0')
                        throw TooManyChars();
                    auxChar = auxString2[0];
                    if (auxChar != 'm' && auxChar != 'f') auxChar = 'u';
                    cout << "color:    ";
                    cin >> auxString2;
                    cout << "size:     ";
                    cin >> auxInt;
                    cout << "price:    ";
                    cin >> auxFloat;
                    auxcloth = make_shared<Clothes>(auxInt, auxFloat, auxString, auxChar, auxString2);
                    Outlet::addVans(auxcloth);
                    auxcloth->brandPrint();
                    break;
                case (21):
                    cout << "what cloth to display data for?\n";
                    cin >> auxInt;
                    if (auxInt >= Outlet::noItems())
                        throw OutOfBounds();
                    if (typeid(Clothes) == typeid(*(Outlet::getVans(auxInt)))) {
                        auxcloth = dynamic_pointer_cast<Clothes>(Outlet::getVans(auxInt));
                        auxcloth->printClothesAsc();
                        cout << auxcloth; //same as auxcloth->pall();
                    } else cout << "the item is not a clothing item\n";
                    break;
                case (22):
                    Outlet::printClothes();
                    break;

                case (3):
                    cout << "there are " << Outlet::noItems() << " items\n";
                    break;
                case (31):
                    Outlet::printAll();
                    break;
                case (32):
                    Outlet::addDefault();
                    break;
                case (4):
                    cout << "what item to delete\n";
                    cin >> auxInt;
                    if(auxInt < 0 || auxInt >= Outlet::noItems())
                        throw(OutOfBounds());
                    Outlet::deleteItem(auxInt);
                    break;
                case (41):
                    cout << "are you sure you want to delete everything? (y/n)\n";
                    cin >> auxChar;
                    if (auxChar == 'y' || auxChar == 'Y')
                        Outlet::deleteAll();
                    break;
                case (42):
                    go_loop = false;
                    break;
                default:
                    cout << "invalid input\n";
            }
        }
        catch (const OutOfBounds &oob){
            cout << oob.what() << endl;
        }
        catch (const TooManyChars &tmc){
            cout << tmc.what() << endl;
        }
    }
}