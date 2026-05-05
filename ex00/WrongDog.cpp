#include <iostream>
#include "WrongDog.hpp"

WrongDog::WrongDog() : WrongAnimal("Wrong Dog") { std::cout << "WrongDog default constructor called\n"; }

WrongDog::WrongDog(const WrongDog &other) : WrongAnimal(other.type)
{
    std::cout << "WrongDog copy constructor called\n";
}

WrongDog &WrongDog::operator=(const WrongDog &other)
{
    if (this != &other)
    {
        this->type = other.type;
    }
    std::cout << "WrongDog assignment operator called\n";
    return (*this);
}

WrongDog::~WrongDog() { std::cout << "WrongDog destructor called\n"; }

void    WrongDog::makeSound() const
{
    std::cout << this->type << " barks\n";
}
