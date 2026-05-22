#include <iostream>
#include <string>
#include "PhoneBook.hpp"

int	main(int ac, char **av)
{
	std::string cmd;
	PhoneBook pb = PhoneBook();

	while (true)
	{
		pb.prompt_menu();
		getline(std::cin, cmd);
		if (cmd.compare("ADD") == 0) {
			pb.addUser();
		}
		else if (cmd.compare("SEARCH") == 0) {
			pb.prompt_table();
			getline(std::cin, cmd);
		}
	}
}