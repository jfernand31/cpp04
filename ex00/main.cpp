#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "WrongDog.hpp"
#include <iostream>

int main(void)
{
    Animal  *a = new Animal();
    Animal  *b = new Dog();
    Animal  *c = new Cat();

    WrongAnimal *d = new WrongAnimal();
    WrongAnimal *e = new WrongDog();
    WrongAnimal *f = new WrongCat();

    std::cout << "== Right Poly ==\n";
    a->makeSound();
    b->makeSound();
    c->makeSound();

    std::cout << "== Wrong Poly ==\n";
    d->makeSound();
    e->makeSound();
    f->makeSound();

    delete a;
    delete b;
    delete c;
    //since this destructors are not virtual this would leave leaks if Dog or Cat had any memory allocated inside the class.
    delete d;
    delete e;
    delete f;
    return (0);
}
