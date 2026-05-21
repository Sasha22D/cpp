#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"
#include <iostream>

#endif

class PhoneBook
{
private:
	Contact _contactList[8];
	int	_contactNumber;
public:
	PhoneBook() {
		_contactNumber = 0;
	};
	std::string prompt_menu(void);
	void addUser(void);
	// void removeOldestUser(void);
	// void searchUser(void);
	// void exitPhoneBook(void);
};