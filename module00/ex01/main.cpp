#include <iostream>
#include <string>
#include "PhoneBook.hpp"

int	main(int ac, char **av)
{
	std::string cmd;
	PhoneBook pb = PhoneBook();

	std::cout << "\033[2J\033[H";
	while (true)
	{
		pb.promptMenu();
		getline(std::cin, cmd);
		if (cmd.compare("ADD") == 0) {
			std::cout << "\033[2J\033[H";
			pb.addUser();
		}
		else if (cmd.compare("SEARCH") == 0) {
			pb.promptTable();
			getline(std::cin, cmd);
		}
		else if (cmd.compare("EXIT") == 0)
			break;
		else
			std::cout << "\033[2J\033[H";
	}
}