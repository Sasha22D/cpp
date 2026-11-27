#ifndef AFORM_HPP
#define AFORM_HPP

#include <string>
#include <iostream>
#include <exception>

#include "Bureaucrat.hpp"
class Bureaucrat;

class AForm
{
public:
	class GradeTooHighException: public std::exception {
		const char* what() const throw();
	};
	class GradeTooLowException: public std::exception {
		const char* what() const throw();
	};
	AForm( const std::string& name, int grade_to_sign, int grade_to_exec );
	AForm( const AForm& other );
	AForm& operator=( const AForm& other );
	virtual ~AForm();
	virtual void execute( const Bureaucrat& executor ) const =0;
	void beSigned( Bureaucrat& signer );
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

std::ostream& operator<<( std::ostream& out, const AForm& form );

#endif