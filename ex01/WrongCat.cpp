#include "WrongCat.hpp"

WrongCat::WrongCat(): WrongAnimal(){
    type = "WrongCat";
    std::cout << "WrongCat Default constructor Called\n";
}

WrongCat::WrongCat(const WrongCat& other): WrongAnimal(other){
    std::cout << "WrongCat copy constructor Called\n";
}

WrongCat& WrongCat::operator=(const WrongCat& other){
    std::cout << "WrongCat copy assignement operator Called\n";
    if (this != &other)
        type = other.type;
    return *this;
}

void WrongCat::makeSound() const{
    std::cout << "dWrongCats don't bark\n";
}

WrongCat::~WrongCat(){ std::cout << "WrongCat destructor Called\n";}