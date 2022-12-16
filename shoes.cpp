#include "shoes.h"

using namespace std;

shoes::shoes(int size_, float price_, string model_, bool laces_) : vans(size_, price_){
    model = std::move(model_);
    laces = laces_;
}

shoes::shoes(const shoes &rhs):vans(rhs.size, rhs.price), model(rhs.model), laces(rhs.laces) {}

shoes& shoes::operator=(const shoes& rhs){
    if(this != &rhs) {
        this->model = (rhs).model;
        this->laces = (rhs).laces;
        this->price = (rhs).price;
        this->size = (rhs).size;
    }
        return *this;

}
bool shoes::getLaces()const{
    return laces;
}
void shoes::setLaces(const bool &newLaces){
    laces = newLaces;
}
string shoes::getModel()const{
    return model;
}
void shoes::setModel(const string &newModel){
    model = newModel;
}

void shoes::printShoeAsc(){
    cout << "     ._......     \n"
            "     |X/.*| |     \n"
            "     |X/+ | |     \n"
            "     |X/* | |     \n"
            "____/     ; ;       \n"
            "\\_____/|_/_/\n";
}

void shoes::pall(std::ostream & os)const{
    os << model << (laces == 1 ? ", with laces" : ", no laces") << ", size " << size << ", price " << price <<" lei\n";
}

shoes::~shoes() = default;