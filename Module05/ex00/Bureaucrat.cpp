#include "GradeTooHighException.hpp"
#include "GradeTooLowException.hpp"
#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat( const std::string& name, int grade ) : _name(name) {
	std::cout << "Bureaucrat " << _name << " ctor called.\n";
	if (grade > 150)
		throw GradeTooLowException();
	else if (grade < 1)
		throw GradeTooHighException();
	else
		_grade = grade;
}

Bureaucrat::Bureaucrat( const Bureaucrat& other ) {
	std::cout << "Bureaucrat copy ctor called.\n";
	_grade = other._grade;
}

Bureaucrat& Bureaucrat::operator=( const Bureaucrat& other ) {
	std::cout << "Bureaucrat copy assignment ctor called.\n";
	if (this != &other) {
		_grade = other._grade;
	}
	return *this;
}

Bureaucrat::~Bureaucrat() {
	std::cout << "Bureaucrat dtor called.\n";
}

void Bureaucrat::incrementGrade( void ) {
	if ((_grade - 1) >= 1) {
		_grade -= 1;
	} else {
		throw GradeTooHighException();
	}
}

void Bureaucrat::decrementGrade( void ) {
	if ((_grade + 1) <= 150) {
		_grade += 1;
	} else {
		throw GradeTooLowException();
	}
}

const std::string& Bureaucrat::getName() const {
	return _name;
}

int Bureaucrat::getGrade() const {
	return _grade;
}