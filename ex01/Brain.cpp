#include "Brain.hpp"
#include <iostream>

Brain::Brain()
{
    for(int i = 0; i < 100; i++)
        this->ideas[i] = "emptiness";
    std::cout << "Brain default constructor called\n";
}

Brain::Brain(const Brain &other)
{
    *this = other;
    std::cout << "Brain copy constructor called\n";
}

Brain   &Brain::operator=(const Brain &other)
{
    if(this != &other)
    {
        for(int i = 0; i < 100; i++)
            this->ideas[i] = other.ideas[i];
    }
    std::cout << "Brain assignment operator called\n";
    return (*this);
}

Brain::~Brain() { std::cout << "Brain destructor called\n"; }

void    Brain::setIdea(int i, const std::string &idea)
{
    if (i >= 0 && i < 100)
        this->ideas[i] = idea;
}

std::string Brain::getIdea(int i) const
{
    if (i >= 0 && i < 100)
        return (this->ideas[i]);
    return ("");
}