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

void outlet::addDefault(){
    addVans(make_shared<shoes>(42, 170.5, "slip-ons", 0));
    addVans(make_shared<shoes>(36, 199.99, "slip-ons", 0));
    addVans(make_shared<shoes>(39, 300, "old-skool", 1));
    addVans(make_shared<shoes>(44, 500, "sk8-high", 1));
    addVans(make_shared<clothes>(40, 200, "T-shirt", 'm', "green"));
    addVans(make_shared<shoes>(41, 310.5, "sk8-high", 1));
    addVans(make_shared<clothes>(38, 500,"jeans" , 'f', "black"));
    addVans(make_shared<shoes>(38, 250, "old-skool", 1));
    addVans(make_shared<shoes>(42, 240, "vans-era", 1));
    addVans(make_shared<clothes>(36, 349.99,"hoodie", 'u', "blue"));
    addVans(make_shared<clothes>(44, 400,"hoodie", 'u', "yellow"));
    addVans(make_shared<clothes>(42, 50, "socks", 'u', "rainbow"));
}

void outlet::deleteItem(int a){
    v.erase(v.begin() + a);
}

void outlet::deleteAll(){
    v.clear();
}

outlet::~outlet() = default;