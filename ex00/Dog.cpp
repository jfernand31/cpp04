#include <iostream>
#include "Dog.hpp"

Dog::Dog() : Animal("Dog") { std::cout << "Dog default constructor called\n"; }

Dog::Dog(const Dog &other) : Animal(other.type)
{
    std::cout << "Dog copy constructor called\n";
}

Dog &Dog::operator=(const Dog &other)
{
    if (this != &other)
    {
        this->type = other.type;
    }
    std::cout << "Dog assignment operator called\n";
    return (*this);
}

Dog::~Dog() { std::cout << "Dog destructor called\n"; }

void    Dog::makeSound() const
{
    std::cout << this->type << " barks\n";
}
