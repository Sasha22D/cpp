#include <iostream>
#include <string>
#include "PhoneBook.hpp"

int	main()
{
	std::string cmd;
	PhoneBook pb = PhoneBook();

	std::cout << "\033[2J\033[H";
	while (true)
	{
		pb.promptMenu();
		getline(std::cin, cmd);
		if (std::cin.eof())
			std::exit(0);
		if (cmd.compare("ADD") == 0) {
			std::cout << "\033[2J\033[H";
			pb.addUser();
		}
		else if (cmd.compare("SEARCH") == 0) {
			pb.promptTable();
		}
		else if (cmd.compare("EXIT") == 0)
			break;
		else
			std::cout << "\033[2J\033[H";
	}
}