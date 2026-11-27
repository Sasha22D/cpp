#ifndef INTERN_HPP
#define INTERN_HPP

#include <string>
#include <iostream>
#include <exception>

#include "AForm.hpp"

class Intern
{
public:
	class FormNotFoundException: public std::exception
	{
	public:
		const char* what() const throw();
	};
	Intern();
	~Intern();
	AForm* makeForm( const std::string& form, const std::string& target ) const;
};

#endif