#include "Bureaucrat.hpp"
#include "GradeTooHighException.hpp"
#include "GradeTooLowException.hpp"

void print_info(const Bureaucrat& guy) {
	std::cout << guy.getName() << ", bureaucrat grade " << guy.getGrade() << std::endl;
}

int main() {
	try {
		Bureaucrat sasha("Sasha", 150);
		print_info(sasha);
		Bureaucrat david(sasha);
		Bureaucrat wowo("wowo", 1);
		david = wowo;
	}
	catch(std::exception& e) {
		std::cout << GradeTooLowException().what();
	}
	// Bureaucrat("Franck", 155);
}