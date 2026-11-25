#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(const std::string& target): AForm("ShrubberyCreationForm", 145, 137), _target(target) {
	std::cout << "ShrubberyCreationForm ctor called.\n";
}

ShrubberyCreationForm::~ShrubberyCreationForm() {
	std::cout << "ShrubberyCreationForm dtor called.\n";
}

void ShrubberyCreationForm::execute(const Bureaucrat& executor) const {
	if (executor.getGrade() <= getGradeToExec()) {
		std::cout << executor.getName() << " executed " << getName() << ".\n";

		std::ofstream outfile(_target+"_shrubbery");
		outfile << " srubbery\n                 srubbery\n          srubberysrubberysrubbery\n       srubberysrubberysrubberysrubbery\n    srubberysrubberysrubberysrubberysrubbery\n                 srubbery\n                 srubbery\n                 srubbery\n";
		outfile.close();
	} else {
		std::cout << executor.getName() << " couldn't execute " << getName() << ".\n";

		throw GradeTooLowException();
		return ;
	}
}