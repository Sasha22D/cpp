#include <iostream>
#include <fstream>
#include <string>

std::string buildLine( std::string line, std::string s1, std::string s2 ) {
	std::string new_line;
	int occ;
	int index = 0;
	if (line.find(s1) == std::string::npos)
		return line;

	while (static_cast<size_t>(index) <= line.length()) {
		line = line.substr(index, line.length() - index);
		index = 0;
		occ = line.find(s1);
		if (static_cast<size_t>(occ) == std::string::npos) {
			new_line += line;
			return new_line;
		}
		new_line += line.substr(index, occ);
		new_line += s2;
		index += occ + s1.length();
	}
	return new_line;
}

int	main( int ac, char **av ) {
	std::string	filename;
	std::string	replace_file;
	std::ifstream file;
	std::fstream new_file;
	std::string line;
	if (ac == 4) {
		filename = av[1];
		replace_file = av[1];
		replace_file += ".replace";
		file.open(filename.c_str(), std::fstream::in);
		if (!file.is_open()) {
			std::cout << "Could not open file\n";
			return 1;
		}
		new_file.open(replace_file.c_str(), std::fstream::out);
		if (!new_file.is_open()) {
			file.close();
			std::cout << "Could not open file\n";
			return 1;
		}
		while (getline(file, line)) {
			std::string new_line = buildLine(line, av[2], av[3]);
			new_file << new_line << std::endl;
		}
		file.close();
		new_file.close();
		return 0;
	}
	return 1;
}