//  separarea codului în fișiere .cpp și .h
//  moșteniri
//          funcții virtuale (pure) apelate prin pointeri de clasa bază
//          apelarea constructorului din clasa de bază (trebuie să fie parametrizat)
//          suprascris cc/op=
//  dynamic_cast
//  excepții
//          ierarhie proprie cu baza std::exception sau derivată din std::exception (minim 2 clase)
//          utilizare cu sens: de exemplu, throw în constructor, try/catch în main

//  funcții și atribute static
//  STL
//  smart pointers
//  cât mai multe const
//  rescrs operator <<
//  citirea informațiilor complete a n obiecte (de diferite tipuri), memorarea și afișarea acestora
//  meniu interactiv

#include <iostream>
#include <string>
#include <utility>
using namespace std;

class vans{
private:
    int size;
    string product_type;

public:
    vans(int size_, string product_type_);

    int getSize() const;
    string getProduct_type() const;

    void setSize(int newSize);
    void setProduct_type(const string& newType);

    virtual void pall(){
        cout << "size " << size << "\nproduct_type " <<product_type << "\n\n";
    }

    ~vans();
};

class shoes : public vans{
private:
    string model;
    string print;

public:
    shoes(int size_, string product_type_, string model_, string print_);

    string getPrint()const;
    string getModel()const;

    void setPrint(const string &newPrint);
    void setModel(const string &newModel);

    void pall() override;

    ~shoes();
};

class clothes:vans{

};

///vans
/////////////////////////////////////////////////////////////////////////////////////////////////////
vans::vans(int size_, string product_type_){
    size = size_;
    product_type = std::move(product_type_);
    cout << "constructed vans:\nsize " << size << "\nproduct_type " <<product_type << "\n\n";
}

int vans::getSize() const{
    return size;
}
string vans::getProduct_type() const{
    return product_type;
}

void vans::setSize(const int newSize){
    size = newSize;
}
void vans::setProduct_type(const string& newType){
    product_type = newType;
}

vans::~vans() {
    cout << "deleting vans\n";
}

///shoes
/////////////////////////////////////////////////////////////////////////////////////////////////////

shoes::shoes(int size_, string product_type_, string model_, string print_) : vans(size_, std::move(product_type_)){
    model = std::move(model_);
    print = std::move(print_);
    cout << "constructed shoes:\nsize " << getSize() << "\nproduct_type " << getProduct_type() << "\nmodel " << model << "\nprint " << print << "\n\n";
}

string shoes::getPrint()const{
    return print;
}
string shoes::getModel()const{
    return model;
}

void shoes::setPrint(const string &newPrint){
    print = newPrint;
}
void shoes::setModel(const string &newModel){
    model = newModel;
}

void shoes::pall(){
cout << "size " << getSize() << "\nproduct_type " << getProduct_type() << "\nmodel " << model << "\nprint " << print << "\n\n";
}

shoes::~shoes(){
    cout << "deleting the shoes\n";
}

///clothes
/////////////////////////////////////////////////////////////////////////////////////////////////////

int main() {
    //vans v(34, "shoe");
    shoes s(35, "shoe", "slip-ons", "blue");
    s.setProduct_type("cockring");
    cout << "noul tip de produs este " << s.getProduct_type() << endl;
    return 0;
}
