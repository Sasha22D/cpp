#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"
#include <iostream>
#include <cstdlib>
#include <sstream>

class PhoneBook
{
private:
	Contact _contactList[8];
	int	_contactNumber;
	std::string _column_headers[4];
public:
	PhoneBook();
	int	getContactNumber(void) const;
	void promptMenu(void) const;
	void promptTable(void) const;
	Contact	getNewUser(void);
	void addUser(void);
	// void searchUser(void);
	// void exitPhoneBook(void);
};

#endif