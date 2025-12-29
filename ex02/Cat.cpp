#include "Cat.hpp"
#include "Brain.hpp"

Cat::Cat(): Animal(){
    std::cout << "Cat Default constructor Called\n";
    type = "Cat";
    brain = new Brain();
}

Cat::Cat(const Cat& other): Animal(other){
    std::cout << "Cat copy constructor Called\n";
    if (this != &other)
    {
        brain = new Brain(*(other.brain));
        type = other.type;
    }
}

Cat& Cat::operator=(const Cat& other){
    std::cout << "Cat copy assignement operator Called\n";
    if (this != &other){
        delete brain;
        brain = new Brain(*(other.brain));
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