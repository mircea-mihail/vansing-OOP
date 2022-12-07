//
// Created by mircea on 12/7/22.
//

#include "clothes.h"
#include "vans.h"

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
    cout << "sex " << sex << "\ncolor " << color << "\n\n";
}

clothes::~clothes(){
    cout<<"deleting clothes\n";
}