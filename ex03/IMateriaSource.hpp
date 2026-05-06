#ifndef IMATERIASOURCE_HPP
#define IMATERIASOURCE_HPP
#include "AMateria.hpp"

class IMateriaSource
{
private:
    AMateria    materias[4];

public:
    virtual ~IMateriaSource();
    virtual void    learnMateria(AMateria*) = 0;
    virtual AMateria*   createMateria(std::string const &type) = 0;
};

#endif