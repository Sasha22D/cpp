#ifndef GRADETOOHIGHEXCEPTION_HPP
#define GRADETOOHIGHEXCEPTION_HPP

#include <exception>

class GradeTooHighException : public std::exception
{
	public:
		GradeTooHighException() throw();
		~GradeTooHighException() throw();
		const char* what() const throw();
};

#endif