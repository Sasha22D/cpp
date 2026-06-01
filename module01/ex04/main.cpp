#include <iostream>
#include <fstream>
#include <string>

std::string buildLine( std::string line, std::string s1, std::string s2 ) {
	int	index = 0;
	int	occ;
	std::string	new_line;
	if (line.find(s1) == std::string::npos)
		return line;
	while (index <= line.length()) {
		line = line.substr(occ + s1.length(), line.length() - occ + s1.length());
		occ = line.find(s1);
		if (occ == std::string::npos) {
			new_line += line;
			break ;
		}
		new_line += line.substr(0, line.length() - occ);
	}
	return new_line;
}

int	main( int ac, char **av ) {
	std::string filename = av[1];
	std::ifstream file(filename);
	std::string line;
	while (getline(file, line)) {
		std::string new_line = buildLine(line, " ", "z");
		std::cout << new_line << std::endl;
	}
}