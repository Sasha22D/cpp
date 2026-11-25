#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(const std::string& target): AForm("RobotomyRequestForm", 72, 45), _target(target) {
	std::cout << "RobotomyRequestForm ctor called.\n";
}

RobotomyRequestForm::~RobotomyRequestForm() {
	std::cout << "RobotomyRequestForm dtor called.\n";
}

void RobotomyRequestForm::execute(const Bureaucrat& executor) const {
	if (executor.getGrade() <= getGradeToExec()) {
		std::cout << executor.getName() << " executed " << getName() << ".\n";

		int drill = rand() % 2;
		if (drill == 1) {
			std::cout << _target << " has been robotomized.\n";
		} else {
			std::cout << _target << " robotomy failed.\n";
		}
	} else {
		std::cout << executor.getName() << " couldn't execute " << getName() << ".\n";

		throw GradeTooLowException();
		return ;
	}
}