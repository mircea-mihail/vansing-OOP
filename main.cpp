//**  separarea codului în fișiere .cpp și .h
//**  moșteniri
//**          funcții virtuale (pure) apelate prin pointeri de clasa bază
//          apelarea constructorului din clasa de bază (trebuie să fie parametrizat)
//          suprascris cc/op=
//  dynamic_cast
//  excepții
//          ierarhie proprie cu baza std::exception sau derivată din std::exception (minim 2 clase)
//          utilizare cu sens: de exemplu, throw în constructor, try/catch în main

//**  funcții și atribute static
//**  STL
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

class outlet:vans{
private:
    static vector <shared_ptr<vans>> v;
public:
    outlet() = delete;
    static void addVans(shared_ptr<vans>(newVans));
    static shared_ptr<vans> getVans(int vansPos);
};

vector <shared_ptr<vans>>outlet::v;

void outlet::addVans(shared_ptr<vans>(newVans)){
    v.emplace_back(newVans);
}

shared_ptr<vans> outlet::getVans(int vansPos){
    return v[vansPos];
}

class menu{
private:
    static void print_options(){
        cout << "\n1-add shoe      11-shoe data\n";
        cout << "2-add clothing  \n";
        cout << "5-stop\n\n";
    }

public:
    menu() = delete;
    static void start(){
        static bool go_loop; static char auxChar;
        static string auxString; static bool auxBool; static int auxInt; static float auxFloat;
        static shared_ptr<shoes> auxshoe;
        static shared_ptr<clothes> auxcloth;
        go_loop = true;
        while(go_loop){
            print_options();
            int case_val;
            cin >> case_val;
            switch(case_val){
                case(1):
                    cout << "model:"; cin >> auxString;
                    cout << "laces (y/n)? "; cin >> auxChar;
                    auxBool = (auxChar == 'y' ? 1 : 0);
                    cout << "size:  "; cin >> auxInt;
                    cout << "price: "; cin >> auxFloat;
                    auxshoe = make_shared<shoes>(auxInt, auxFloat, auxString, auxBool);
                    outlet::addVans(auxshoe);
                    break;
                case(11):
                    cout << "what shoe to display data for?\n";
                    cin >> auxInt;
                    auxshoe = dynamic_pointer_cast<shoes>(outlet::getVans(auxInt));
                    auxshoe->pall();
                    break;

                case(2):
                    cout << "sex: (m/f/o)"; cin >> auxChar;
                    cout << "color: "; cin >> auxString;
                    cout << "size:  "; cin >> auxInt;
                    cout << "price: "; cin >> auxFloat;
                    auxcloth = make_shared<clothes>(auxInt, auxFloat, auxChar, auxString);
                    outlet::addVans(auxcloth);
                    break;
                case(21):
                    cout << "what cloth to display data for?\n";
                    cin >> auxInt;
                    auxcloth = dynamic_pointer_cast<clothes>(outlet::getVans(auxInt));
                    auxcloth->pall();
                    break;
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
