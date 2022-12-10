//
// Created by mircea on 12/7/22.
//
#include <iostream>
#include "vans.h"
#ifndef VANSING_OOP_SHOES_H_
#define VANSING_OOP_SHOES_H_

using namespace std;


class shoes : public vans{
private:
    string model;
    bool laces;

public:
    explicit shoes(int size_ = 0, float price_ = 0, string model_ = "", bool laces = false);
    shoes(const shoes &rhs);

    shoes& operator=(shared_ptr<shoes> rhs);

    void setLaces(const bool &newLaces);
    void setModel(const string &newModel);

    bool getLaces()const;
    string getModel()const;

    void pall() override;

    ~shoes();
};

#endif