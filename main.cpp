//**  separarea codului în fișiere .cpp și .h
//**  moșteniri
//**          funcții virtuale (pure) apelate prin pointeri de clasa bază
//**          apelarea constructorului din clasa de bază (trebuie să fie parametrizat)
//          suprascris cc/op=
//**  dynamic_cast
//  excepții
//          ierarhie proprie cu baza std::exception sau derivată din std::exception (minim 2 clase)
//          utilizare cu sens: de exemplu, throw în constructor, try/catch în main

//**  funcții și atribute static
//**  STL
//**  smart pointers
//**  cât mai multe const
//  rescrs operator <<
//**  citirea informațiilor complete a n obiecte (de diferite tipuri), memorarea și afișarea acestora
//**  meniu interactiv

#include <iostream>
#include <string>
#include <vector>
#include <memory>
#include "vans.h"
#include "shoes.h"
#include "clothes.h"

using namespace std;

class outlet:vans{
private:
    static vector <shared_ptr<vans>> v;
public:
    outlet() = delete;
    static void addVans(shared_ptr<vans>(newVans));
    static shared_ptr<vans> getVans(int vansPos);
    static void printShoes();
    static void printClothes();
    static void printAll();
};

vector <shared_ptr<vans>>outlet::v;

void outlet::addVans(shared_ptr<vans>(newVans)){
    v.emplace_back(newVans);
}

shared_ptr<vans> outlet::getVans(int vansPos){
    return v[vansPos];
}

void outlet::printShoes(){
    for(auto &i: v){
        if(typeid(shoes) == typeid(*i)) {
            i->pall();
        }
    }
}
void outlet::printClothes(){
    for(auto &i : v){
        if(typeid(clothes) == typeid(*i))
            i->pall();
    }
}

void outlet::printAll(){
    for(auto &i: v){
        i->pall();
    }
}

class menu{
private:
    static void print_options(){
        cout << "\nshoes:   1-add  11-data  12-all\n";
        cout << "clothes: 2-add  21-data  22-all\n";
        cout << "all:     5-stop 51-all\n\n";
    }

public:
    menu() = delete;
    static void start(){
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
};

int main() {
    menu::start();
    return 0;
}

//vector/string/ orice fara * clasic nu avem de ce sa folosim destructor
//in clasele baxa destructorul
