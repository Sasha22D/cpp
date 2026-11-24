#include "Bureaucrat.hpp"

const char* Bureaucrat::GradeTooHighException::what() const throw() {
	return "Grade is higher than maximum (1).\n";
}

const char* Bureaucrat::GradeTooLowException::what() const throw() {
	return "Grade is lower than minimum (150).\n";
}

Bureaucrat::Bureaucrat( const std::string& name, int grade ) : _name(name), _grade(grade) {
	std::cout << "Bureaucrat " << _name << " ctor called.\n";
	if (_grade < 1) {
		throw GradeTooHighException();
		return ;
	} else if (_grade > 150) {
		throw GradeTooLowException();
		return ;
	}
}

Bureaucrat::Bureaucrat( const Bureaucrat& other ) {
	std::cout << "Bureaucrat " << _name << " copy ctor called.\n";
	_grade = other._grade;
}

Bureaucrat& Bureaucrat::operator=( const Bureaucrat& other ) {
	std::cout << "Bureaucrat " << _name << " copy assignment ctor called.\n";
	if (this != &other) {
		_grade = other._grade;
	}
	return *this;
}

Bureaucrat::~Bureaucrat() {}

void Bureaucrat::incrementGrade() {
	if (_grade > 1) {
		_grade -= 1;
	} else {
		throw GradeTooHighException();
		return ;
	}
}

void Bureaucrat::decrementGrade() {
	if (_grade < 150) {
		_grade += 1;
	} else {
		throw GradeTooLowException();
		return ;
	}
}

const std::string Bureaucrat::getName() const {
	return _name;
}

int Bureaucrat::getGrade() const {
	return _grade;
}