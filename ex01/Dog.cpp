#include "Dog.hpp"

Dog::Dog(): Animal(){
    type = "Dog";
    std::cout << "Dog Default constructor Called\n";
}

Dog::Dog(const Dog& other): Animal(other){
    std::cout << "Dog copy constructor Called\n";
}

Dog& Dog::operator=(const Dog& other){
    std::cout << "Dog copy assignement operator Called\n";
    if (this != &other)
        type = other.type;
    return *this;
}

void Dog::makeSound() const{
    std::cout << "Dogs don't meow\n";
}

Dog::~Dog(){ std::cout << "Dog destructor Called\n";}