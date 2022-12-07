//
// Created by mircea on 12/7/22.
//
#include <iostream>
#include "shoes.h"

using namespace std;

shoes::shoes(int size_, float price_, string model_, bool laces_) : vans(size_, price_){
    model = std::move(model_);
    laces = laces_;
    cout << "constructed shoes:\nsize " << getSize() << "\n\n";
}

shoes::shoes(const shoes &rhs):vans(rhs.size, rhs.price), model(rhs.model), laces(rhs.laces) {}

shoes& shoes::operator=(const shoes *rhs){
    this->model = (*rhs).model;
    this->laces = (*rhs).laces;
    this->price = (*rhs).price;
    this->size = (*rhs).size;
    return *this;
}
bool shoes::getLaces()const{
    return laces;
}
void shoes::setLaces(const bool &newLaces){
    laces = newLaces;
}
string shoes::getModel()const{
    return model;
}
void shoes::setModel(const string &newModel){
    model = newModel;
}

void shoes::pall(){
    cout << "size " << getSize() << "\nmodel " << model << "\n\n";
}

shoes::~shoes(){
    cout << "deleting the shoes\n";
}