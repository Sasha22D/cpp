#include "Form.hpp"
#include "GradeTooHighException.hpp"
#include "GradeTooLowException.hpp"

Form::Form( const std::string& name, int grade_to_sign, int grade_to_exec ) : _name(name) {
	std::cout << "Form ctor called.\n";
	if (grade_to_sign > 150 || grade_to_exec > 150) {
		throw GradeTooLowException();
	} else if ( grade_to_sign < 1 || grade_to_exec < 1) {
		throw GradeTooHighException();
	}
}

Form::~Form() {
	std::cout << "Form dtor called.\n";
}

void Form::beSigned(const Bureaucrat& signer) {
	if (signer.getGrade() >= _grade_to_sign) {
		_is_signed = true;
	}
	else {
		throw GradeTooLowException();
	}
}