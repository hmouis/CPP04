#include "Cat.hpp"

Cat::Cat(): Animal(){
    type = "Cat";
    std::cout << "Cat Default constructor Called\n";
}

Cat::Cat(const Cat& other): Animal(other){
    std::cout << "Cat copy constructor Called\n";
}

Cat& Cat::operator=(const Cat& other){
    std::cout << "Cat copy assignement operator Called\n";
    if (this != &other)
        type = other.type;
    return *this;
}

void Cat::makeSound() const{
    std::cout << "Cats don't bark\n";
}

Cat::~Cat(){ std::cout << "Cat destructor Called\n";}