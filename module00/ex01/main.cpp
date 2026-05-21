#include <iostream>
#include <string>
#include "PhoneBook.hpp"

int	main(int ac, char **av)
{
	std::string cmd;
	PhoneBook pb;

	while (true)
	{
		cmd = pb.prompt_menu();
		if (cmd.compare("ADD") == 0) {
			pb.addUser();
		}
	}
}