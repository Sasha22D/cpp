#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <exception>
#include <string>
#include <iostream>

#include "Form.hpp"
class Form;

class Bureaucrat
{
public:
	class GradeTooHighException: public std::exception {
	public:
		const char* what() const throw();
	};
	class GradeTooLowException: public std::exception {
	public:
		const char* what() const throw();
	};
	Bureaucrat( const std::string& name, int grade );
	Bureaucrat( const Bureaucrat& other );
	Bureaucrat& operator=( const Bureaucrat& other );
	~Bureaucrat();
	void signForm( Form& form );
	void incrementGrade();
	void decrementGrade();
	const std::string getName() const;
	int getGrade() const;
private:
	const std::string _name;
	int _grade;
};

std::ostream& operator<<( std::ostream& out, const Bureaucrat& bureaucrat );

#endif
