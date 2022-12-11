//
// Created by mircea on 12/7/22.
//

#include <iostream>
#include "vans.h"
#ifndef VANSING_OOP_CLOTHES_H_
#define VANSING_OOP_CLOTHES_H_

using namespace std;

class clothes : public vans{
private:
    string item;
    char sex;
    string color;
public:
    explicit clothes(int size_ = 0, float price_ = 0, char sex_ = ' ', string color_ = "");
    clothes(const clothes &rhs);
    void setSex(char newSex);
    void setColor(string newColor);

    char getSex()const;
    string getColor()const;

    void pall() override;

    ~clothes();
};

#endif