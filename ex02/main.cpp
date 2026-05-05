#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include <iostream>

int main(void)
{
    Animal  **array = new Animal*[10];

    std::cout << "\n--- CREATION ---\n";
    for (int i = 0; i < 10; i++)
    {
        if(i < 5)
            array[i] = new Dog();
        else
            array[i] = new Cat();
    }
    std::cout << "\n--- SOUNDS ---\n";
    for (int i = 0; i < 10; i++)
        array[i]->makeSound();
    std::cout << "\n--- DESTRUCTION ---\n";
    for (int i = 0; i < 10; i++)
        delete array[i];
    
    delete[] array;
    return (0);
}
