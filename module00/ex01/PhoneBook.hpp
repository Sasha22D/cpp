#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"
#include <iostream>

class PhoneBook
{
private:
	Contact _contactList[8];
	int	_contactNumber;
public:
	PhoneBook();
	std::string prompt_menu(void);
	Contact	PhoneBook::getNewUser(void);
	void addUser(void);
	// void searchUser(void);
	// void exitPhoneBook(void);
};

#endif