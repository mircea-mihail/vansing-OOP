#include "clothes.h"

#include <utility>

clothes::clothes(int size_, float price_, string item_, char sex_, string color_):vans(size_, price_){
    item = item_;
    sex = sex_;
    color = std::move(color_);
}

clothes::clothes(const clothes &rhs):vans(rhs.size, rhs.price), item(rhs.item), sex(rhs.sex), color(rhs.color){}

clothes& clothes::operator= (const clothes &rhs){
    if(this != &rhs){
        item = rhs.item;
        sex = rhs.sex;
        color = rhs.color;
        size = rhs.size;
        price = rhs.price;
    }
    return *this;
}

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

void clothes::pall()const{
    cout << item << ", sex " << sex << ", color " << color << ", size " << size << ", price " << price << " lei\n";
}

void clothes::printClothesAsc() {
    cout << "   __   __\n"
            " /|  `-´  |\\\n"
            "/_|  o.o  |_\\\n"
            "  | o`o´o |\n"
            "  |  o^o  |\n"
            "  |_______|\n";
}

clothes::~clothes() = default;