#include "GradeTooLowException.hpp"

GradeTooLowException::GradeTooLowException() throw() {}

GradeTooLowException::~GradeTooLowException() throw() {}

const char* GradeTooLowException::what() const throw() {
	return "Grade is Lower than minimum (150)";
}