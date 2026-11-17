#ifndef AFORM_HPP
#define AFORM_HPP

#include "Bureaucrat.hpp"

#include <iostream>
#include <string>

class AForm
{
private:
	const std::string	_name;
	bool _is_signed;
	const int _grade_to_sign;
	const int _grade_to_execute;
public:
	AForm( const std::string& name, int grade_to_sign, int grade_to_exec );
	AForm( int grade_to_sign, int grade_to_execute );
	AForm( const AForm& other );
	AForm& operator=( const AForm& other );
	~AForm();
	void beSigned( const Bureaucrat& signer );
	const std::string& getName() const;
	const bool getSignedStatus() const;
	int getGradeToSign() const;
	int getGradeToExec() const;
};

#endif