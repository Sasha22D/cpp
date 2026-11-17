#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <exception>
#include <string>
#include <iostream>

class Bureaucrat
{
	public:
		Bureaucrat( const std::string& name, int grade );
		Bureaucrat( const Bureaucrat& other );
		Bureaucrat& operator=( const Bureaucrat& other );
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
