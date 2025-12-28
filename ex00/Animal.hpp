#ifndef Animal_hpp
#define Animal_hpp

#include <iostream>

class Animal
{
    protected:
        std::string type;
    public:
        Animal();
        Animal(const Animal& other);
        Animal& operator=(const Animal& other);
        virtual ~Animal();

        std::string getType() const ;
        virtual void makeSound() const;
};


#endif