#include "vans.h"
using namespace std;

vans::vans(int size_, float price_){
    size = size_;
    price = price_;
    //cout << "constructed vans:\nsize " << size << "\nproduct_type " <<product_type << "\n\n";
}

vans::vans(const vans &rhs):vans(rhs.size, rhs.price){};

vans & vans::operator= (const vans& rhs){
    if(this != &rhs){
        size = rhs.size;
        price = rhs.price;
    }
    return *this;
}

int vans::getSize() const{
    return size;
}
float vans::getPrice() const{
    return price;
}

void vans::setSize(const int newSize){
    size = newSize;
}

void vans::setPrice(const float newPrice){
    price = newPrice;
}

vans::~vans() = default;