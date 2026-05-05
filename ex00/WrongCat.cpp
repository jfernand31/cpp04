#include <iostream>
#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("Wrong Cat") { std::cout << "WrongCat default constructor called\n"; }

WrongCat::WrongCat(const WrongCat &other) : WrongAnimal(other.type)
{
    std::cout << "WrongCat copy constructor called\n";
}

WrongCat &WrongCat::operator=(const WrongCat &other)
{
    if (this != &other)
    {
        this->type = other.type;
    }
    std::cout << "WrongCat assignment operator called\n";
    return (*this);
}

WrongCat::~WrongCat() { std::cout << "WrongCat destructor called\n"; }

void    WrongCat::makeSound() const
{
    std::cout << this->type << " meows\n";
}
