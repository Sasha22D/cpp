#include "Form.hpp"
#include "GradeTooHighException.hpp"
#include "GradeTooLowException.hpp"

Form::Form( const std::string& name, int grade_to_sign, int grade_to_exec ) : _name(name), _grade_to_sign(grade_to_sign), _grade_to_execute(grade_to_exec), _is_signed(false) {
	std::cout << "Form ctor called.\n";
	if (_grade_to_sign > 150 || _grade_to_execute > 150) {
		throw GradeTooLowException();
	} else if ( _grade_to_sign < 1 || _grade_to_execute < 1) {
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

const std::string& Form::getName() const {
	std::cout << _name << std::endl;
	return _name;
}

const bool Form::getSignedStatus() const {
	std::cout << _is_signed << std::endl;
	return _is_signed;
}

int Form::getGradeToSign() const {
	std::cout << _grade_to_sign << std::endl;
	return _grade_to_sign;
}

int Form::getGradeToExec() const {
	std::cout << _grade_to_execute << std::endl;
	return _grade_to_execute;
}