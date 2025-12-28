#ifndef Brain_hpp
#define Brain_hpp

#include <iostream>
#include "Animal.hpp"

class Brain
{
    public:
        std::string ideas[100];
        Brain();
        Brain(const Brain& other);
        Brain& operator=(const Brain& other);
        ~Brain();
};


#endif