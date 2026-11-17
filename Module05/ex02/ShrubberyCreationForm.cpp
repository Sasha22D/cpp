#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm( const std::string& target ) : _target(target), AForm(145, 137) {
	std::cout << "ShrubberyCreationForm ctor called.\n";
}

ShrubberyCreationForm::~ShrubberyCreationForm() {
	std::cout << "ShrubberyCreationForm dtor called.\n";
}