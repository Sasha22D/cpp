#include "PhoneBook.hpp"

typedef void (Contact::*contactMethod)(std::string);

PhoneBook::PhoneBook() {
	_contactNumber = 0;
	_column_headers[0] = "Index";
	_column_headers[1] = "First Name";
	_column_headers[2] = "Last Name";
	_column_headers[3] = "Nickname";
}

std::string int_to_string(int nbr) {
	std::ostringstream oss;
	oss << nbr;
	return oss.str();
}

void	PhoneBook::prompt_menu(void) {
	std::system("clear");
	std::cout << "╔══════════════════════╗\n";
	std::cout << "║ Welcome to PhoneBook ║\n";
	std::cout << "╠══════════════════════╣\n";
	std::cout << "║ Commands:            ║\n";
	std::cout << "║ *ADD*                ║\n";
	std::cout << "║ *SEARCH*             ║\n";
	std::cout << "║ *EXIT*               ║\n";
	std::cout << "╚══════════════════════╝\n";

	std::cout << "\nEnter command: ";
}

void	print_first_table_line(std::string headers[4]) {
	std::string line;
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < headers[i].length() + 2; j++) {
			line += "═";
		}
		if (i != 3)
			line += "╦";
	}
	std::cout << "╔" << line << "╗\n";
}

std::string	format_value(std::string value, int size) {
	if (value.length() > size)
		return value.substr(0, size - 1) + ".";
	else if (value.length() < size)
		return std::string(size - value.length(), ' ') + value;
	return value;
}

void	print_row_separator(std::string headers[4]) {
	std::string line;
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < headers[i].length() + 2; j++) {
			line += "═";
		}
		if (i != 3)
			line += "╬";
	}
	std::cout << "╠" << line << "╣\n";
}

void	PhoneBook::print_table_row(int index) {
	Contact &user = _contactList[index];
	std::string formatted_values[4] = {
		format_value(int_to_string(index + 1), _column_headers[0].length()),
		format_value(user.GetFirstName(), _column_headers[1].length()),
		format_value(user.GetLastName(), _column_headers[2].length()),
		format_value(user.GetNickname(), _column_headers[3].length())
	};
	for (int i = 0; i < 4; i++) {
		std::cout << "║ " << formatted_values[i] << " ";
	}
	std::cout << "║\n";
}

void	print_last_table_line(std::string headers[4]) {
	std::string line;
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < headers[i].length() + 2; j++) {
			line += "═";
		}
		if (i != 3)
			line += "╩";
	}
	std::cout << "╚" << line << "╝\n";
}

void	PhoneBook::prompt_table(void) {
	std::system("clear");
	print_first_table_line(_column_headers);
	std::cout << "║ " << _column_headers[0] << " ║ " << _column_headers[1] << " ║ " << _column_headers[2] << " ║ " << _column_headers[3] << " ║\n";
	for (int i = 0; i < _contactNumber; i++) {
		print_row_separator(_column_headers);
		print_table_row(i);
	}
	print_last_table_line(_column_headers);
}

Contact	PhoneBook::getNewUser(void) {
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

	return newUser;
}

void PhoneBook::addUser(void) {
	Contact newUser = getNewUser();

	if (_contactNumber == 8) {
		Contact tmp;
		for (int i = 0; i < 7; i++)
		{
			tmp = _contactList[i];
			_contactList[i] = _contactList[i + 1];
			_contactList[i + 1] = tmp;
		}
		_contactList[7] = newUser;
	}
	else {
		_contactList[_contactNumber] = newUser;
		_contactNumber++;
	}
}