#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"

#include <iostream>
#include <string>

class Form
{
private:
	const std::string	_name;
	bool _is_signed;
	const int _grade_to_sign;
	const int _grade_to_execute;
public:
	Form( int grade );
	Form( const Form& other );
	Form& operator=( const Form& other );
	~Form();
	void beSigned( const Bureaucrat& signer );
	const std::string& getName() const;
	const bool getSignedStatus() const;
	int getGradeToSign() const;
	int getGradeToExec() const;
};

#endif