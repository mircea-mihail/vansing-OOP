#include "Clothes.h"

#include <utility>

Clothes::Clothes(int size_, float price_, string item_, char sex_, string color_):Vans(size_, price_){
    item = std::move(item_);
    sex = sex_;
    color = std::move(color_);
}

Clothes::Clothes(const Clothes &rhs):Vans(rhs.size, rhs.price), item(rhs.item), sex(rhs.sex), color(rhs.color){}

Clothes& Clothes::operator= (const Clothes &rhs){
    if(this != &rhs){
        item = rhs.item;
        sex = rhs.sex;
        color = rhs.color;
        size = rhs.size;
        price = rhs.price;
    }
    return *this;
}

void Clothes::setSex(char newSex){
    sex = newSex;
}
void Clothes::setColor(string newColor){
    color = std::move(newColor);
}

char Clothes::getSex()const{
    return sex;
}
string Clothes::getColor()const{
    return color;
}

void Clothes::pall(std::ostream &os)const{
    os << id << ": " << item << ", sex " << sex << ", color " << color << ", size " << size << ", price " << price << " lei\n";
}

void Clothes::printClothesAsc() {
    cout << "   __   __\n"
            " /|  `-´  |\\\n"
            "/_|  o.o  |_\\\n"
            "  | o`o´o |\n"
            "  |  o^o  |\n"
            "  |_______|\n";
}

std::shared_ptr<Vans> Clothes::clone() const{
    shared_ptr<Clothes> aux = make_shared<Clothes>(this->size, this->price, this->item, this->sex, this->color);
    return aux;
}

Clothes::~Clothes() = default;