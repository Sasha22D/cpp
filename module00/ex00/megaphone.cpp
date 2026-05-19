#include <iostream>

int	main(int ac, char **av)
{
	if (ac != 1)
	{
		char	**p = av + 1;
		while (*p)
		{
			char	*s = *p;
			while (*s)
			{
				std::cout << (char)toupper(*s);
				s++;
			}
			p++;
		}
		std::cout << std::endl;
	}
	else
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
		std::cout << std::endl;
	}
}