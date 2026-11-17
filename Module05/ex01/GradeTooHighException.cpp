#include "GradeTooHighException.hpp"

GradeTooHighException::GradeTooHighException() throw() {}

GradeTooHighException::~GradeTooHighException() throw() {}

const char* GradeTooHighException::what() const throw() {
	return "Grade is higher than maximum (1)";
}