#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include "WrongAnimal.hpp"


int main()
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;

    i->makeSound();
    j->makeSound();

    meta->makeSound();
    delete meta;
    delete i;
    delete j;
    std::cout << "\n*** Testing Wrong Animal and cat ***\n\n";
    const WrongAnimal* WrongA = new WrongAnimal();
    const WrongAnimal* WrongC = new WrongCat();

    std::cout << WrongC->getType() << " " << std::endl;

    WrongC->makeSound();
    WrongA->makeSound();

    delete WrongA;
    delete WrongC;

    return 0;
}