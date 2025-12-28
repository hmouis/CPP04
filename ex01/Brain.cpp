#include "Brain.hpp"

Brain::Brain(){
    std::cout << "Brain Default constructor Called\n";
}

Brain::Brain(const Brain& other){
    std::cout << "Brain copy constructor Called\n";
    *this = other;
}

Brain& Brain::operator=(const Brain& other){
    std::cout << "Brain copy assignement operator Called\n";
    if (this != &other){
        for (int i = 0; i < 100; i++)
            ideas[i] = other.ideas[i];
    }
    return *this;
}

Brain::~Brain(){ std::cout << "Brain destructor Called\n";}