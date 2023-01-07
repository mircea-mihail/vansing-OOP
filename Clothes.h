#ifndef VANSING_OOP_CLOTHES_H_
#define VANSING_OOP_CLOTHES_H_
#include <iostream>
#include "Vans.h"

using namespace std;

class Clothes : public Vans{
private:
    string item;
    char sex;
    string color;
public:
    explicit Clothes(int size_ = 0, float price_ = 0, string item_ = "",  char sex_ = ' ', string color_ = "");
    Clothes(const Clothes &rhs);
    Clothes& operator= (const Clothes &rhs);

    void setSex(char newSex);
    void setColor(string newColor);

    char getSex()const;
    string getColor()const;

    void pall(std::ostream &) const override;
    static void printClothesAsc();

    std::shared_ptr<Vans> clone() const override{
        shared_ptr<Clothes> aux = make_shared<Clothes>(this->size, this->price, this->item, this->sex, this->color);
        return aux;
    }

    ~Clothes() override;
};

#endif