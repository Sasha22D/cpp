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
	void removeOldestUser(void);
	void addUser(void);
	void searchUser(void);
	void exitPhoneBook(void);
};