#ifndef VANSING_OOP_Shoes_H_
#define VANSING_OOP_Shoes_H_
#include <iostream>
#include <memory>
#include "Vans.h"

using namespace std;


class Shoes : public Vans{
private:
    string model;
    bool laces;

public:
    explicit Shoes(int size_ = 0, float price_ = 0, string model_ = "", bool laces_ = false);
    Shoes(const Shoes &rhs);
    Shoes& operator=(const Shoes& rhs);

    void setLaces(const bool &newLaces);
    void setModel(const string &newModel);

    bool getLaces()const;
    string getModel()const;

    static void printShoeAscii();

    void pall(std::ostream &)const override;

    std::shared_ptr<Vans> clone() const override;

    ~Shoes() override;
};

#endif