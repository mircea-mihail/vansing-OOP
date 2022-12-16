#ifndef VANSING_OOP_SHOES_H_
#define VANSING_OOP_SHOES_H_
#include <iostream>
#include <memory>
#include "vans.h"

using namespace std;


class shoes : public vans{
private:
    string model;
    bool laces;

public:
    explicit shoes(int size_ = 0, float price_ = 0, string model_ = "", bool laces = false);
    shoes(const shoes &rhs);
    shoes& operator=(const shoes& rhs);

    void setLaces(const bool &newLaces);
    void setModel(const string &newModel);

    bool getLaces()const;
    string getModel()const;

    static void printShoeAsc();

    void pall(std::ostream &)const override;

    ~shoes() override;
};

#endif