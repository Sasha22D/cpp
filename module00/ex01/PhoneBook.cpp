#include "PhoneBook.hpp"

typedef void (Contact::*contactMethod)(std::string);

std::string	PhoneBook::prompt_menu(void) {
	std::string cmd;

	std::cout << "╔══════════════════════╗\n";
	std::cout << "║ Welcome to PhoneBook ║\n";
	std::cout << "╠══════════════════════╣\n";
	std::cout << "║ Commands:            ║\n";
	std::cout << "║ *ADD*                ║\n";
	std::cout << "║ *SEARCH*             ║\n";
	std::cout << "║ *EXIT*               ║\n";
	std::cout << "╚══════════════════════╝\n";

	std::cout << "\nEnter command: ";
	getline(std::cin, cmd);
	return (cmd);
}

void PhoneBook::addUser(void) {
	std::string answer;
	std::string prompts[5] = {
		"Enter new contact's first name: ",
		"Enter new contact's last name: ",
		"Enter new contact's nickname: ",
		"Enter new contact's phone number: ",
		"Enter new contact's darkest secret: "
	};
	contactMethod methods[5] = {
		&Contact::SetFirstName,
		&Contact::SetLastName,
		&Contact::SetNickname,
		&Contact::SetPhoneNumber,
		&Contact::SetDarkestSecret
	};
	Contact newUser;

	for (int i = 0; i < 5; i++) {
		std::cout << prompts[i];
		getline(std::cin, answer);
		(newUser.*methods[i])(answer);
	}
}