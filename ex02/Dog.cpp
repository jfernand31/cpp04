#include <iostream>
#include "Dog.hpp"

Dog::Dog() : Animal("Dog"), brain(new Brain())
{
    std::cout << "Dog default constructor called\n";
}

Dog::Dog(const Dog &other) : Animal(other.type)
{
    std::cout << "Dog copy constructor called\n";
    brain = new Brain(*other.brain);
}

Dog &Dog::operator=(const Dog &other)
{
    std::cout << "Dog assignment operator called\n";
    if (this != &other)
    {
        Animal::operator=(other);
        delete brain;
        brain = new Brain(*other.brain);
    }
    return (*this);
}

Dog::~Dog()
{
    delete brain;
    std::cout << "Dog destructor called\n";
}

void    Dog::makeSound() const
{
    std::cout << this->type << " barks\n";
}
