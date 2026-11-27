#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

typedef AForm* (*funcptr)(const std::string&);

const char* Intern::FormNotFoundException::what() const throw() {
	return "Form was not found.";
}

Intern::Intern() {
	std::cout << "Intern ctor called.\n";
}

// Intern::Intern(const Intern& other) {}

// Intern& Intern::operator=(const Intern& other) {}

Intern::~Intern() {
	std::cout << "Intern dtor called.\n";
}

AForm* createShrubberyCreationForm(const std::string& target) {
	return new ShrubberyCreationForm(target);
}

AForm* createRobotomyRequestForm(const std::string& target) {
	return new RobotomyRequestForm(target);
}

AForm* createPresidentialPardonForm(const std::string& target) {
	return new PresidentialPardonForm(target);
}

AForm* Intern::makeForm(const std::string& form, const std::string& target) const {
	funcptr form_array[] = {&createShrubberyCreationForm, &createRobotomyRequestForm, &createPresidentialPardonForm};
	std::string form_name_array[] = {"shrubbery creation", "robotomy request", "presidential pardon"};
	int nb_form = sizeof(form_array)/sizeof(funcptr);
	for (int i = 0; i < nb_form; i++) {
		if (form == form_name_array[i]) {
			std::cout << "Intern creates " << form << std::endl;
			return form_array[i](target);
			
		}
	}
	throw FormNotFoundException();
}