#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <string>
#include <iostream>

class WrongAnimal
{
protected:
    std::string _type;
public:
    WrongAnimal();
    ~WrongAnimal();
    void makeSound( void );
    const std::string& getType( void ) const;
};

#endif