#include "menu.h"

void menu::print_options(){
    cout << "\nshoes:   1-add   11-data  12-all\n";
    cout << "clothes: 2-add   21-data  22-all\n";
    cout << "all:     3-els   31-all   32-add def\n";
    cout << "delete:  4-item  41-all   42-end\n\n";
}

void menu::start(){
    bool go_loop; char auxChar; string auxString2;
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
                    cout << auxshoe; // same as auxshoe->pall();
                    cout << endl << endl << *auxshoe << endl << endl;
                }
                else cout << "the item is not a shoe\n";
                break;
            case(12):
                outlet::printShoes();
                break;

            case(2):
                cout << "item:     "; cin >>auxString;
                cout << "sex(m/f): "; cin >> auxChar;
                if(auxChar != 'm' && auxChar != 'f') auxChar = 'u';
                cout << "color:    "; cin >> auxString2;
                cout << "size:     "; cin >> auxInt;
                cout << "price:    "; cin >> auxFloat;
                auxcloth = make_shared<clothes>(auxInt, auxFloat, auxString, auxChar, auxString2);
                outlet::addVans(auxcloth);
                break;
            case(21):
                cout << "what cloth to display data for?\n";
                cin >> auxInt;
                //ce pot face cu acea dereferentiere ca sa evit warningul
                /*
                    ce e scris in typeid se executa si se evalueaza (de acolo provine warningul)
                    ca difera in acest fel typeof
                    ca sa rezolv pun typeid in ceva auto&
                 */
                if(typeid(clothes) == typeid(*(outlet::getVans(auxInt)))) {
                    auxcloth = dynamic_pointer_cast<clothes>(outlet::getVans(auxInt));
                    cout << auxcloth; //same as auxcloth->pall();
                }
                else cout << "the item is not a clothing item\n";
                break;
            case(22):
                outlet::printClothes();
                break;

            case(3):
                cout <<"there are " << outlet::no_items() << " items\n";
                break;
            case(31):
                outlet::printAll();
                break;
            case(32):
                outlet::addDefault();
                break;

            case(4):
                cout << "what item to delete\n";
                cin >> auxInt;
                outlet::deleteItem(auxInt);
                break;
            case(41):
                cout<<"are you sure you want to delete everything? (y/n)\n";
                cin >> auxChar; if(auxChar == 'y' || auxChar == 'Y') outlet::deleteAll();
                break;
            case(42):
                go_loop = false;
                break;
            default:
                cout << "invalid input\n";
        }
    }
}