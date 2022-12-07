//
// Created by mircea on 12/7/22.
//
#include <iostream>
#include "vans.h"
using namespace std;

vans::vans(int size_, float price_){
    size = size_;
    price = price_;
    //cout << "constructed vans:\nsize " << size << "\nproduct_type " <<product_type << "\n\n";
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

vans::~vans() {
    std::cout << "deleting vans\n";
}