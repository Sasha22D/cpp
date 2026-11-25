#include "AForm.hpp"

const char* AForm::GradeTooHighException::what() const throw() {
	return "Grade is too high.\n";
}

const char* AForm::GradeTooLowException::what() const throw() {
	return "Grade is too low.\n";
}

AForm::AForm(const std::string& name, int grade_to_sign, int grade_to_exec) : _name(name), _grade_to_sign(grade_to_sign), _grade_to_exec(grade_to_exec) {
	std::cout << "AForm " << _name << " ctor called.\n";
	if (_grade_to_sign > 150 || _grade_to_exec > 150) {
		throw GradeTooLowException();
		return ;
	} else if (_grade_to_sign < 1 || _grade_to_exec < 1) {
		throw GradeTooHighException();
		return ;
	}
}

AForm::AForm(const AForm& other): _name(other._name), _is_signed(other._is_signed), _grade_to_sign(other._grade_to_sign), _grade_to_exec(other._grade_to_exec) {
	std::cout << "AForm " << _name << " copy ctor called.\n";	
}

AForm& AForm::operator=(const AForm& other) {
	std::cout << "AForm copy assignment ctor called.\n";
	if (this != &other) {}
	return *this;
}

AForm::~AForm() {
	std::cout << "AForm " << _name << " dtor called.\n";
}

void AForm::beSigned(Bureaucrat& signer) {
	if (signer.getGrade() <= _grade_to_sign) {
		_is_signed = true;
		std::cout << signer.getName() << " signed " << _name << " form.\n";
	} else {
		std::cout << signer.getName() << " couldn't sign " << _name << " form.\n";
		throw GradeTooLowException();
		return ;
	}
}

const std::string& AForm::getName() const {
	return _name;
}

bool AForm::getSignedStatus() const {
	return _is_signed;
}

int AForm::getGradeToSign() const {
	return _grade_to_sign;
}

int AForm::getGradeToExec() const {
	return _grade_to_exec;
}