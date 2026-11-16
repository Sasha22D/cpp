#include "Bureaucrat.hpp"

int main() {
	try {
		Bureaucrat(0);
	}
	catch(std::exception GradeTooHighException) {
		std::cout << "catched Too High\n";
	}
}