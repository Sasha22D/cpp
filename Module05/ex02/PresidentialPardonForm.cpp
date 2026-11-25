#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(const std::string& target): AForm("PresidentialPardonForm", 25, 5), _target(target) {
	std::cout << "PresidentialPardonForm ctor called.\n";
}

PresidentialPardonForm::~PresidentialPardonForm() {
	std::cout << "PresidentialPardonForm dtor called.\n";
}

void PresidentialPardonForm::execute(const Bureaucrat& executor) const {
	if (executor.getGrade() <= getGradeToExec()) {
		std::cout << executor.getName() << " executed " << getName() << ".\n";

		std::cout << _target << " has been pardoned by Zaphod Beeblebrox.\n";
	} else {
		std::cout << executor.getName() << " couldn't execute " << getName() << ".\n";

		throw GradeTooLowException();
		return ;
	}
}