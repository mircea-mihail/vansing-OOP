#include "outlet.h"

void outlet::addVans(const shared_ptr<vans>(&newVans)){
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