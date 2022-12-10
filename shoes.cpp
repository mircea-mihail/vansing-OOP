//
// Created by mircea on 12/7/22.
//
#include <iostream>
#include <memory>
#include "shoes.h"

using namespace std;

shoes::shoes(int size_, float price_, string model_, bool laces_) : vans(size_, price_){
    model = std::move(model_);
    laces = laces_;
}

shoes::shoes(const shoes &rhs):vans(rhs.size, rhs.price), model(rhs.model), laces(rhs.laces) {}

shoes& shoes::operator=(std::shared_ptr<shoes> rhs){
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
    cout << model << (laces == 1 ? ", with laces" : ", no laces") << ", size " << size << ", price " << price <<" lei\n";
}

shoes::~shoes(){
    cout << "deleting the shoes\n";
}