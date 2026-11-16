#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat( int grade ) {
	std::cout << "Bureaucrat ctor called.\n";
	if (grade > 150)
		throw GradeTooLowException;
	else if (grade < 1)
		throw GradeTooHighException;
	else
		_grade = grade;
}

Bureaucrat::~Bureaucrat() {
	std::cout << "Bureaucrat dtor called.\n";
}

void Bureaucrat::incrementGrade( void ) {
	if ((_grade - 1) >= 1) {
		_grade -= 1;
	} else {
		throw GradeTooHighException;
	}
}

void Bureaucrat::decrementGrade( void ) {
	if ((_grade + 1) <= 150) {
		_grade += 1;
	} else {
		throw GradeTooLowException;
	}
}

const std::string& Bureaucrat::getName() const {
	return _name;
}

const int Bureaucrat::getGrade() const {
	return _grade;
}