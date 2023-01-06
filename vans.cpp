#include "vans.h"
using namespace std;

Vans::Vans(int size_, float price_){
    size = size_;
    price = price_;
    //cout << "constructed Vans:\nsize " << size << "\nproduct_type " <<product_type << "\n\n";
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

void Vans::setSize(const int newSize){
    size = newSize;
}

void Vans::setPrice(const float newPrice){
    price = newPrice;
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