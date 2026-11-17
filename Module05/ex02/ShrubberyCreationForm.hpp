#ifndef SHRUBERRYCREATIONFORM_HPP
#define SHRUBERRYCREATIONFORM_HPP

#include "AForm.hpp"

#include <string>

class ShrubberyCreationForm : AForm
{
private:
	std::string _target;
	int _grade_to_sign;
	int _grade_to_execute;
public:
	ShrubberyCreationForm( const std::string& target );
	~ShrubberyCreationForm();
};

#endif