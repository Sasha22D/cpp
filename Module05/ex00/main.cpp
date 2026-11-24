#include "Bureaucrat.hpp"

void print_info(const Bureaucrat& guy) {
	std::cout << guy.getName() << ", bureaucrat grade " << guy.getGrade() << std::endl;
}

int main() {
	try {
		Bureaucrat sasha("Sasha", 160);
		print_info(sasha);
		Bureaucrat david(sasha);
		Bureaucrat wowo("wowo", 1);
		david = wowo;
	}
	catch(const Bureaucrat::GradeTooHighException& e) {
		std::cout << e.what();
	}
	catch(const Bureaucrat::GradeTooLowException& e) {
		std::cout << e.what();
	}
	// Bureaucrat("Franck", 155);
}