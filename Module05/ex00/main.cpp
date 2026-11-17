#include "Bureaucrat.hpp"
#include "GradeTooHighException.hpp"
#include "GradeTooLowException.hpp"

int main() {
	try {
		Bureaucrat sasha("Sasha", 150);
		Bureaucrat david(sasha);
		std::cout << david.getGrade() << std::endl;
		Bureaucrat wowo("wowo", 1);
		david = wowo;
		std::cout << david.getGrade() << std::endl;
	}
	catch(std::exception& e) {
		std::cout << GradeTooLowException().what();
	}
	// Bureaucrat("Franck", 155);
}