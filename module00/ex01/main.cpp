#include <iostream>
#include <string>
#include "PhoneBook.hpp"

int	main(int ac, char **av)
{
	std::string cmd;
	PhoneBook pb = PhoneBook();

	while (true)
	{
		pb.promptMenu();
		getline(std::cin, cmd);
		if (cmd.compare("ADD") == 0) {
			pb.addUser();
		}
		else if (cmd.compare("SEARCH") == 0) {
			pb.promptTable();
			getline(std::cin, cmd);
		}
		else if (cmd.compare("EXIT") == 0)
			break;
	}
}