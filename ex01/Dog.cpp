#include "Dog.hpp"

Dog::Dog(): Animal(){
    std::cout << "Dog Default constructor Called\n";
    type = "Dog";
    brain = new Brain();
}

Dog::Dog(const Dog& other): Animal(other){
    std::cout << "Dog copy constructor Called\n";
    if (this != &other)
    {
        if (other.brain)
            brain = new Brain(*(other.brain));
        else
            brain = new Brain();
        type = other.type;
    }
}

Dog& Dog::operator=(const Dog& other){
    std::cout << "Dog copy assignement operator Called\n";
    if (this != &other){
        delete brain;
        if (other.brain)
            brain = new Brain(*(other.brain));
        else
            brain = new Brain();
        type = other.type;
    }
    return *this;
}

void Dog::makeSound() const{
    std::cout << "Dogs don't meow\n";
}

Dog::~Dog(){ 
    std::cout << "Dog destructor Called\n";
    delete brain;
}