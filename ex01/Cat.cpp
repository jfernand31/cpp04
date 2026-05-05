#include <iostream>
#include "Cat.hpp"

Cat::Cat() : Animal("Cat"), brain(new Brain())
{
    std::cout << "Cat default constructor called\n";
}

Cat::Cat(const Cat &other) : Animal(other.type)
{
    std::cout << "Cat copy constructor called\n";
    brain = new Brain(*other.brain);
}

Cat &Cat::operator=(const Cat &other)
{
    std::cout << "Cat assignment operator called\n";
    if (this != &other)
    {
        this->type = other.type;
        delete brain;
        brain = new Brain(*other.brain);
    }
    return (*this);
}

Cat::~Cat()
{
    delete brain;
    std::cout << "Cat destructor called\n";
}

void    Cat::makeSound() const
{
    std::cout << this->type << " meows\n";
}
