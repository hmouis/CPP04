#include "Cat.hpp"
#include "Brain.hpp"

Cat::Cat(): Animal(){
    type = "Cat";
    brain = new Brain();
    std::cout << "Cat Default constructor Called\n";
}

Cat::Cat(const Cat& other): Animal(other){
    std::cout << "Cat copy constructor Called\n";
    *this = other;
}

Cat& Cat::operator=(const Cat& other){
    std::cout << "Cat copy assignement operator Called\n";
    if (this != &other){
        brain = other.brain;
        type = other.type;
    }
    return *this;
}

void Cat::makeSound() const{
    std::cout << "Cats don't bark\n";
}

Cat::~Cat(){ 
    std::cout << "Cat destructor Called\n";
    delete brain;
}