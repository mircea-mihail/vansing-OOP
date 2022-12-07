//**  separarea codului în fișiere .cpp și .h
//**  moșteniri
//**          funcții virtuale (pure) apelate prin pointeri de clasa bază
//          apelarea constructorului din clasa de bază (trebuie să fie parametrizat)
//          suprascris cc/op=
//  dynamic_cast
//  excepții
//          ierarhie proprie cu baza std::exception sau derivată din std::exception (minim 2 clase)
//          utilizare cu sens: de exemplu, throw în constructor, try/catch în main

//  funcții și atribute static
//  STL
//  smart pointers
//  cât mai multe const
//  rescrs operator <<
//  citirea informațiilor complete a n obiecte (de diferite tipuri), memorarea și afișarea acestora
//  meniu interactiv

#include <iostream>
#include <string>
#include <vector>
#include <memory>
#include "vans.h"
#include "shoes.h"
#include "clothes.h"

using namespace std;

class menu{
private:
    static void print_options(){
        cout << "1-add shoe      11-shoe data\n";
        cout << "2-add clothing  \n";
        cout << "5-stop\n\n";
    }
public:
    static void start(){
        static vector <shared_ptr<vans>> v;
        bool go_loop = true;
        string auxString; bool auxBool; int auxInt; float auxFloat;
        shoes auxshoe;

        while(go_loop){
            print_options();
            int case_val;
            cin >> case_val;
            switch(case_val){
                case(1):
                    cout << "model: "; cin >> auxString;
                    cout << "laces? "; cin >> auxBool;
                    cout << "size:  "; cin >> auxInt;
                    cout << "price: "; cin >> auxFloat;
                    auxshoe = new (shoes)(auxInt, auxFloat, auxString, auxBool);
                    v.emplace_back(shared_ptr<vans>(&auxshoe));
                    break;
                case(11):
                    cout << "what shoe to display data for?\n";
                    cin >> auxInt;
                    cout << "size " << (*(v.begin() + auxInt))->getSize() << ", price " << (*(v.begin() + auxInt))->getPrice();
                case(5):
                    go_loop = false;
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
