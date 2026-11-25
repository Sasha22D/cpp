#include "Form.hpp"

const char* Form::GradeTooHighException::what() const throw() {
	return "Grade is too high.\n";
}

const char* Form::GradeTooLowException::what() const throw() {
	return "Grade is too low.\n";
}

Form::Form(const std::string& name, int grade_to_sign, int grade_to_exec) : _name(name), _grade_to_sign(grade_to_sign), _grade_to_exec(grade_to_exec) {
	std::cout << "Form " << _name << " ctor called.\n";
	if (_grade_to_sign > 150 || _grade_to_exec > 150) {
		throw GradeTooLowException();
		return ;
	} else if (_grade_to_sign < 1 || _grade_to_exec < 1) {
		throw GradeTooHighException();
		return ;
	}
}

Form::Form(const Form& other): _name(other._name), _is_signed(other._is_signed), _grade_to_sign(other._grade_to_sign), _grade_to_exec(other._grade_to_exec) {
	std::cout << "Form " << _name << " copy ctor called.\n";	
}

Form& Form::operator=(const Form& other) {
	std::cout << "Form copy assignment ctor called.\n";
	if (this != &other) {}
	return *this;
}

Form::~Form() {
	std::cout << "Form " << _name << " dtor called.\n";
}

void Form::beSigned(Bureaucrat& signer) {
	if (signer.getGrade() <= _grade_to_sign) {
		_is_signed = true;
		std::cout << signer.getName() << " signed " << _name << " form.\n";
	} else {
		std::cout << signer.getName() << " couldn't sign " << _name << " form.\n";
		throw GradeTooLowException();
		return ;
	}
}

const std::string& Form::getName() const {
	return _name;
}

bool Form::getSignedStatus() const {
	return _is_signed;
}

int Form::getGradeToSign() const {
	return _grade_to_sign;
}

int Form::getGradeToExec() const {
	return _grade_to_exec;
}

std::ostream& operator<<(std::ostream& out, const Form& form) {
	out << form.getName() << "form grades : grade to sign = " << form.getGradeToSign() << ", grade to exec = " << form.getGradeToExec() << ". Is signed: " << form.getSignedStatus() << '\n';
	return out;
}