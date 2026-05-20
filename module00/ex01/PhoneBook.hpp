#include "Contact.hpp"

class PhoneBook
{
private:
	Contact list[8];
public:
	void removeOldestUser();
	void addUser();
	void searchUser();
	void exitPhoneBook();
};