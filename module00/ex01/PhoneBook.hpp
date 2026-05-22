#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"
#include <iostream>
#include <cstdlib>

class PhoneBook
{
private:
	Contact _contactList[8];
	int	_contactNumber;
	std::string _column_headers[4];
public:
	PhoneBook();
	void prompt_menu(void);
	void prompt_table(void);
	Contact	getNewUser(void);
	void addUser(void);
	// void searchUser(void);
	// void exitPhoneBook(void);
};

#endif