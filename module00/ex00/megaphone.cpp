#include <iostream>
#include <ctype.h>
#include <string>

int	main(int ac, char **av)
{
	if (ac != 1)
	{
		std::string s = av[1];
		int j = 1;
		while (av[j]) {
			s = av[j];
			for (std::string::size_type i = 0; i < s.length(); i++) {
				s[i] = static_cast<char>(std::toupper(static_cast<unsigned char>(s[i])));
			}
			std::cout << s;
			j++;
		}
		std::cout << "\n";
	}
	else
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
	}
}