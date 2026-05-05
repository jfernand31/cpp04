#include <iostream>
#include "Cat.hpp"

Cat::Cat() : Animal("Cat") { std::cout << "Cat default constructor called\n"; }

Cat::Cat(const Cat &other) : Animal(other.type)
{
    std::cout << "Cat copy constructor called\n";
}

Cat &Cat::operator=(const Cat &other)
{
    if (this != &other)
    {
        this->type = other.type;
    }
    std::cout << "Cat assignment operator called\n";
    return (*this);
}

Cat::~Cat() { std::cout << "Cat destructor called\n"; }

void    Cat::makeSound() const
{
    std::cout << this->type << " meows\n";
}
