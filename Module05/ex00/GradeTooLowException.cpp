#include "GradeTooLowException.hpp"

const char* GradeTooLowException::what() const throw() {
	return "Grade is Lower than maximum (1)";
}