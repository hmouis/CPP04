#include "Animal.hpp"

Animal::Animal(){ std::cout << "Animal Default constructor Called\n"; }

Animal::Animal(const Animal& other)
{
    std::cout << "Animal copy constructor Called\n";
    *this = other;
}

Animal& Animal::operator=(const Animal& other)
{
    std::cout << "Animal copy assignement operator Called\n";
    if (this != &other)
        type = other.type;
    return *this;
}

std::string Animal::getType() const {
    return type; 
}

Animal::~Animal(){ std::cout << "Animal destructor Called\n";}