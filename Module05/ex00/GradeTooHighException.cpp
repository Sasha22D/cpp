#include "GradeTooHighException.hpp"

const char* GradeTooHighException::what() const throw() {
	return "Grade is higher than maximum (1)";
}