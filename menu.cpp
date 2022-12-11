#include "menu.h"

void menu::print_options(){
    cout << "\nshoes:   1-add  11-data  12-all\n";
    cout << "clothes: 2-add  21-data  22-all\n";
    cout << "all:     5-stop 51-all\n\n";
}

void menu::start(){
    bool go_loop; char auxChar;
    string auxString; bool auxBool; int auxInt; float auxFloat;
    shared_ptr<shoes> auxshoe;
    shared_ptr<clothes> auxcloth;
    go_loop = true;
    while(go_loop){
        print_options();
        int case_val;
        cin >> case_val;
        switch(case_val){
            case(1):
                cout << "model:      "; cin >> auxString;
                cout << "laces(y/n): "; cin >> auxChar;
                auxBool = (auxChar == 'y' ? 1 : 0);
                cout << "size:       "; cin >> auxInt;
                cout << "price:      "; cin >> auxFloat;
                auxshoe = make_shared<shoes>(auxInt, auxFloat, auxString, auxBool);
                outlet::addVans(auxshoe);
                break;
            case(11):
                cout << "what shoe to display data for?\n";
                cin >> auxInt;
                if(typeid(shoes) == typeid(*(outlet::getVans(auxInt)))) {
                    auxshoe = dynamic_pointer_cast<shoes>(outlet::getVans(auxInt));
                    auxshoe->pall();
                }
                else cout << "the item is not a shoe\n";
                break;
            case(12):
                outlet::printShoes();
                break;

            case(2):
                cout << "sex(m/f): "; cin >> auxChar;
                if(auxChar != 'm' && auxChar != 'f') auxChar = 'u';
                cout << "color:    "; cin >> auxString;
                cout << "size:     "; cin >> auxInt;
                cout << "price:    "; cin >> auxFloat;
                auxcloth = make_shared<clothes>(auxInt, auxFloat, auxChar, auxString);
                outlet::addVans(auxcloth);
                break;
            case(21):
                cout << "what cloth to display data for?\n";
                cin >> auxInt;
                //ce pot face cu acea dereferentiere ca sa evit warningul
                if(typeid(clothes) == typeid(*(outlet::getVans(auxInt)))) {
                    auxcloth = dynamic_pointer_cast<clothes>(outlet::getVans(auxInt));
                    auxcloth->pall();
                }
                else cout << "the item is not a clothing item\n";
                break;
            case(22):
                outlet::printClothes();
                break;

            case(5):
                go_loop = false;
                break;
            case(51):
                outlet::printAll();
                break;
            default:
                cout << "invalid input\n";
        }
    }
}