#ifndef VANSING_OOP_Shoes_H_
#define VANSING_OOP_Shoes_H_
#include <iostream>
#include <memory>
#include "vans.h"

using namespace std;


class Shoes : public Vans{
private:
    string model;
    bool laces;

public:
    explicit Shoes(int size_ = 0, float price_ = 0, string model_ = "", bool laces = false);
    Shoes(const Shoes &rhs);
    Shoes& operator=(const Shoes& rhs);

    void setLaces(const bool &newLaces);
    void setModel(const string &newModel);

    bool getLaces()const;
    string getModel()const;

    static void printShoeAsc();

    void pall(std::ostream &)const override;

    ~Shoes() override;
};

#endif