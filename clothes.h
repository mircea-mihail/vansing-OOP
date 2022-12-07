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
    char sex;
    string color;
public:
    void setSex(char newSex);
    void setColor(string newColor);

    char getSex()const;
    string getColor()const;

    void pall() override;

    ~clothes();
};

#endif