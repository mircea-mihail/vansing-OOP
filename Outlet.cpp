#include "Outlet.h"

void Outlet::addVans(const shared_ptr<Vans>(&newVans)){
    v.emplace_back(newVans);
    if(typeid(Clothes) == typeid(*newVans))
        noClothes ++;
    if(typeid(Shoes) == typeid(*newVans))
        noShoes ++;
}

shared_ptr<Vans> Outlet::getVans(int vansPos){
    return v[vansPos];
}

unsigned long Outlet::noItems(){
    return v.size();
}

void Outlet::printShoes(){
    for(auto &i: v){
        if(typeid(Shoes) == typeid(*i)) {
            cout << i;
        }
    }
}
void Outlet::printClothes(){
    for(auto &i : v){
        if(typeid(Clothes) == typeid(*i))
            cout << i;
    }
}

void Outlet::printAll(){
    for(auto &i: v){
        cout << i;
    }
    cout << '(' << v.size() << " items)" << endl;
}

void Outlet::addDefault(){
    addVans(make_shared<Shoes>(42, 170.5, "slip-ons", 0));
    addVans(make_shared<Shoes>(36, 199.99, "slip-ons", 0));
    addVans(make_shared<Shoes>(39, 300, "old-skool", 1));
    addVans(make_shared<Shoes>(44, 500, "sk8-high", 1));
    addVans(make_shared<Clothes>(40, 200, "T-shirt", 'm', "green"));
    addVans(make_shared<Shoes>(41, 310.5, "sk8-high", 1));
    addVans(make_shared<Clothes>(38, 500,"jeans" , 'f', "black"));
    addVans(make_shared<Shoes>(38, 250, "old-skool", 1));
    addVans(make_shared<Shoes>(42, 240, "vans-era", 1));
    addVans(make_shared<Clothes>(36, 349.99,"hoodie", 'u', "blue"));
    addVans(make_shared<Clothes>(44, 400,"hoodie", 'u', "yellow"));
    addVans(make_shared<Clothes>(42, 50, "socks", 'u', "rainbow"));
}

void Outlet::deleteItem(int pos){
    v.erase(v.begin() + pos);
}

void Outlet::deleteAll(){
    v.clear();
}

Outlet::~Outlet() = default;