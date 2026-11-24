#ifndef FORM_HPP
#define FORM_HPP

#include <string>
#include <iostream>
#include <exception>

#include "Bureaucrat.hpp"

class Form
{
public:
	class GradeTooHighException: public std::exception {
		const char* what() const throw();
	};
	class GradeTooLowException: public std::exception {
		const char* what() const throw();
	};
	Form( const std::string& name, int grade_to_sign, int grade_to_exec );
	Form( const Form& other );
	Form& operator=( const Form& other );
	~Form();
	void beSigned( const Bureaucrat& signer );
	const std::string& getName() const;
	bool getSignedStatus() const;
	int getGradeToSign() const;
	int getGradeToExec() const;
private:
	const std::string _name;
	bool _is_signed;
	const int _grade_to_sign;
	const int _grade_to_exec;
};

#endif