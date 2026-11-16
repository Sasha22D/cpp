#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include <string>

class Form
{
private:
	const std::string	_name;
	bool _signed;
	const int _grade_to_sign;
	const int _grade_to_execute;
public:
	Form( int grade ) {}
	~Form() {}
};

#endif