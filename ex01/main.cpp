#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

void HelperTest7(Dog& dog1)
{
    Dog dog2;

    dog2 = dog1;
}
void    test7()
{
    Dog dog1;

    HelperTest7(dog1);
    dog1.makeSound();
}

int main()
{
    test7();
    // int N = 4;
    // Animal* Animals[N];
    // Animal* animal = new Animal();

    // //Create array of Dogs and Cats
    // for (int i = 0; i < N / 2; i++)
    //     Animals[i] = new Dog();
    // for (int i = N / 2; i < N; i++)
    //     Animals[i] = new Cat();
    
    // //Make sound for each Animal
    // for (int i = 0; i < N; i++)
    //     Animals[i]->makeSound();
    
    // //Make sound for Animal
    // animal->makeSound();

    // //Delete all Animals
    // for (int i = 0; i < N; i++)
    //     delete Animals[i];
    // delete animal;
    return 0;
}