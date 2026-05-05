#include "Animal.hpp"
#include <iostream>

Animal::Animal() : type("unknown") { std::cout << "Animal default constructor called\n"; }

Animal::Animal(const std::string &type) : type(type) { std::cout << "Animal constructor called\n"; }

Animal::Animal(const Animal &other) : type(other.type) { std::cout << "Animal copy constructor called\n"; }

Animal  &Animal::operator=(const Animal &other)
{
    if (this != &other)
    {
        this->type = other.type;
    }
    std::cout << "Animal assignment operator called\n";
    return (*this);
}

Animal::~Animal() { std::cout << "Animal destructor called\n"; }

void    Animal::makeSound() const
{
    std::cout << this->type << " makes a indescribable sound\n";
}