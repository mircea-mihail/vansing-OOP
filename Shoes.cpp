#include "Shoes.h"

using namespace std;

Shoes::Shoes(int size_, float price_, string model_, bool laces_) : Vans(size_, price_){
    model = std::move(model_);
    laces = laces_;
}

Shoes::Shoes(const Shoes &rhs):Vans(rhs.size, rhs.price), model(rhs.model), laces(rhs.laces) {}

Shoes& Shoes::operator=(const Shoes& rhs){
    if(this != &rhs) {
        this->model = (rhs).model;
        this->laces = (rhs).laces;
        this->price = (rhs).price;
        this->size = (rhs).size;
    }
        return *this;

}
bool Shoes::getLaces()const{
    return laces;
}
void Shoes::setLaces(const bool &newLaces){
    laces = newLaces;
}
string Shoes::getModel()const{
    return model;
}
void Shoes::setModel(const string &newModel){
    model = newModel;
}

void Shoes::printShoeAsc(){
    cout << "     ._......     \n"
            "     |X/.*| |     \n"
            "     |X/+ | |     \n"
            "     |X/* | |     \n"
            "____/     ; ;       \n"
            "\\_____/|_/_/\n";
}

void Shoes::pall(std::ostream & os)const{
    os << model << (laces == 1 ? ", with laces" : ", no laces") << ", size " << size << ", price " << price <<" lei\n";
}

Shoes::~Shoes() = default;