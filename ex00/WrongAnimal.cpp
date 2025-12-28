#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(){ std::cout << "WrongAnimal Default constructor Called\n"; }

WrongAnimal::WrongAnimal(const WrongAnimal& other)
{
    std::cout << "WrongAnimal copy constructor Called\n";
    *this = other;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& other)
{
    std::cout << "WrongAnimal copy assignement operator Called\n";
    if (this != &other)
        type = other.type;
    return *this;
}

std::string WrongAnimal::getType() const {
    return type; 
}

void WrongAnimal::makeSound() const{
    std::cout << "WrongAnimal sound\n";
}

WrongAnimal::~WrongAnimal(){ std::cout << "WrongAnimal destructor Called\n";}