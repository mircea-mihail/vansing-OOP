#include "Vans.h"
using namespace std;

Vans::Vans(int size_, float price_){
    id = IdGenerator<int>::getId();
    size = size_;
    price = price_;
}

Vans::Vans(const Vans &rhs):Vans(rhs.size, rhs.price){};

Vans & Vans::operator= (const Vans& rhs){
    if(this != &rhs){
        size = rhs.size;
        price = rhs.price;
    }
    return *this;
}

int Vans::getSize() const{
    return size;
}
float Vans::getPrice() const{
    return price;
}

int Vans::getId() const{
    return id;
}

void Vans::setSize(const int newSize){
    size = newSize;
}

void Vans::setPrice(const float newPrice){
    price = newPrice;
}

void Vans::setId(int newId){
    id = newId;
}


void Vans::brandPrint(){
    cout << "                         \n"
            "   )       )             \n"
            "  /((   ( /(   (     (   \n"
            " (_))\\  )(_))  )\\ )  )\\  \n"
            " _)((_)((_)_  _(_/( ((_) \n"
            " \\ V / / _` || ' \\))(_-< \n"
            "  \\_/  \\__,_||_||_| /__/ \n"
            "                         ";
}

Vans::~Vans() = default;