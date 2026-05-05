#include "AMateria.hpp"
#include <iostream>

AMateria::AMateria(std::string const &type) : type(type)
{
    std::cout << "AMateria constructor called\n";
}

AMateria::AMateria(const AMateria &other) : type(other.type)
{
    std::cout << "AMateria copy constructor called\n";
}

AMateria    &AMateria::operator=(const AMateria &other)
{
    std::cout << "AMateria assignment operator called\n";
    if (this != &other)
    {
        this->type = other.type;
    }
    return (*this);
}

AMateria::~AMateria()
{
    std::cout << "AMateria destructor called\n";
}

std::string const   &AMateria::getType() const
{
    return (this->type);
}

void AMateria::use(ICharacter& target)
{
    
}