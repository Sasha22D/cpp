#include "Bureaucrat.hpp"
#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

int main() {
	Intern noob = Intern();
	AForm *shrub = noob.makeForm("shrubbery creation", "zozo");
	Bureaucrat pro = Bureaucrat("pro", 2);
	shrub->execute(pro);
	delete shrub;
}