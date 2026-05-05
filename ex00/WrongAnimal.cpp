#include "WrongAnimal.hpp"
#include <iostream>

WrongAnimal::WrongAnimal() : type("wrong unknown") { std::cout << "WrongAnimal default constructor called\n"; }

WrongAnimal::WrongAnimal(const std::string &type) : type(type) { std::cout << "WrongAnimal constructor called\n"; }

WrongAnimal::WrongAnimal(const WrongAnimal &other) : type(other.type) { std::cout << "WrongAnimal copy constructor called\n"; }

WrongAnimal  &WrongAnimal::operator=(const WrongAnimal &other)
{
    if (this != &other)
    {
        this->type = other.type;
    }
    std::cout << "WrongAnimal assignment operator called\n";
    return (*this);
}

WrongAnimal::~WrongAnimal() { std::cout << "WrongAnimal destructor called\n"; }

void    WrongAnimal::makeSound() const
{
    std::cout << this->type << " makes a indescribable sound\n";
}