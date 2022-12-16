//**  separarea codului în fișiere .cpp și .h
//**  moșteniri
//**          funcții virtuale (pure) apelate prin pointeri de clasa bază
//**          apelarea constructorului din clasa de bază (trebuie să fie parametrizat)
//**          suprascris cc/op=
//**  dynamic_cast
//**  excepții
//**          ierarhie proprie cu baza std::exception sau derivată din std::exception (minim 2 clase)
//**          utilizare cu sens: de exemplu, throw în constructor, try/catch în main

//**  funcții și atribute static
//**  STL
//**  smart pointers
//**  cât mai multe const
//**  rescrs operator <<
//**  citirea informațiilor complete a n obiecte (de diferite tipuri), memorarea și afișarea acestora
//**  meniu interactiv
// draw.io
#include "menu.h"

using namespace std;

vector<shared_ptr<vans>> outlet::v;


int main() {
    menu::start();
    return 0;
}
