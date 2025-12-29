#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include "WrongAnimal.hpp"
#include "Brain.hpp"


int main()
{
    int N = 4;
    Animal* Animals[N];

    //Create array of Dogs and Cats
    for (int i = 0; i < N / 2; i++)
        Animals[i] = new Dog();
    for (int i = N / 2; i < N; i++)
        Animals[i] = new Cat();
    
    //Make sound for each Animal
    for (int i = 0; i < N; i++)
        Animals[i]->makeSound();
    


    //Delete all Animals
    for (int i = 0; i < N; i++)
        delete Animals[i];

    return 0;
}