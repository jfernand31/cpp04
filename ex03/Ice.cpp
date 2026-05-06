#include "Ice.hpp"
#include <iostream>

Ice::Ice() : AMateria("ice") { std::cout << "Ice constructor called\n"; }

Ice::Ice(const Ice &other) : AMateria(other.type)
{
    std::cout << "Ice copy constructor called\n";
}

Ice &Ice::operator=(const Ice &other)
{

}