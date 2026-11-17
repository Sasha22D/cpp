#include "Form.hpp"
#include "GradeTooLowException.hpp"

void Form::beSigned(const Bureaucrat& signer) {
	if (signer.getGrade() >= _grade_to_sign) {
		_is_signed = true;
		std::cout << signer.getName() << " signed " << _name << std::endl;
	}
	else {
		throw GradeTooLowException();
	}
}