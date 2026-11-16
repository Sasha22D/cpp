#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <exception>
#include <string>
#include <iostream>

class Bureaucrat
{
	public:
		Bureaucrat( int grade );
		~Bureaucrat();
		void incrementGrade( void );
		void decrementGrade( void );
		const std::string& getName() const;
		int getGrade() const;

	private:
		const std::string	_name;
		int	_grade;
};

#endif
