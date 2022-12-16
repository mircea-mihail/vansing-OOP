#ifndef VANSING_OOP_CLOTHES_H_
#define VANSING_OOP_CLOTHES_H_
#include <iostream>
#include "vans.h"
#include "vans.h"


using namespace std;

class clothes : public vans{
private:
    string item;
    char sex;
    string color;
public:
    explicit clothes(int size_ = 0, float price_ = 0, string item_ = "",  char sex_ = ' ', string color_ = "");
    clothes(const clothes &rhs);
    clothes& operator= (const clothes &rhs);

    void setSex(char newSex);
    void setColor(string newColor);

    char getSex()const;
    string getColor()const;

    void pall(std::ostream &) const override;
    static void printClothesAsc();

    ~clothes() override;
};

#endif