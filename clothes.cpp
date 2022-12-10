//
// Created by mircea on 12/7/22.
//

#include "clothes.h"
#include "vans.h"

clothes::clothes(int size_, float price_, char sex_, string color_):vans(size_, price_){
    sex = sex_;
    color = color_;
}

clothes::clothes(const clothes &rhs):vans(rhs.size, rhs.price), sex(rhs.sex), color(rhs.color){}

void clothes::setSex(char newSex){
    sex = newSex;
}
void clothes::setColor(string newColor){
    color = std::move(newColor);
}

char clothes::getSex()const{
    return sex;
}
string clothes::getColor()const{
    return color;
}

void clothes::pall(){
    cout << "sex " << sex << ", color " << color << ", size " << size << ", price " << price << " lei\n";
}

clothes::~clothes(){
    cout<<"deleting clothes\n";
}