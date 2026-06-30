#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <string>
#include <iostream>

class Animal
{
protected:
    std::string _type;
public:
    Animal();
    ~Animal();
    virtual void makeSound( void );
    const std::string& getType( void ) const;
};

#endif