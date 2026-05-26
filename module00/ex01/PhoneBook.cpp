#include "PhoneBook.hpp"

typedef void (Contact::*contactMethod)(std::string);

PhoneBook::PhoneBook() {
	_contactNumber = 0;
	_column_headers[0] = "Index";
	_column_headers[1] = "First Name";
	_column_headers[2] = "Last Name";
	_column_headers[3] = "Nickname";
}

void	PhoneBook::promptMenu(void) {
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

static std::string int_to_string(int nbr) {
	std::ostringstream oss;
	oss << nbr;
	return oss.str();
}

static std::string	format_value(std::string value, int size) {
	if (value.length() > size)
		return value.substr(0, size - 1) + ".";
	else if (value.length() < size)
		return std::string(size - value.length(), ' ') + value;
	return value;
}

static void	print_first_table_line(std::string headers[4]) {
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

static void	print_row_separator(std::string headers[4]) {
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

static void	print_table_row(int index, Contact contact_list[8], std::string headers[4]) {
	Contact &user = contact_list[index];
	std::string formatted_values[4] = {
		format_value(int_to_string(index + 1), headers[0].length()),
		format_value(user.GetFirstName(), headers[1].length()),
		format_value(user.GetLastName(), headers[2].length()),
		format_value(user.GetNickname(), headers[3].length())
	};
	for (int i = 0; i < 4; i++) {
		std::cout << "║ " << formatted_values[i] << " ";
	}
	std::cout << "║\n";
}

static void	print_last_table_line(std::string headers[4]) {
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

static bool	check_index(int index) {
	if (index >= 1 && index <= 8)
		return true;
	return false;
}

static void	prompt_single_user(Contact contact_list[8], std::string headers[4], int contact_number) {
	std::string user_index;
	int	index = 0;
	std::cout << "\nEnter index of contact you want to display: ";
	while (!check_index(index))
		std::cin >> index;
	std::cout << "\n";
	print_first_table_line(headers);
	std::cout << "║ " << headers[0] << " ║ " << headers[1] << " ║ " << headers[2] << " ║ " << headers[3] << " ║\n";
	print_row_separator(headers);
	print_table_row(index - 1, contact_list, headers);
	print_last_table_line(headers);
}

void	PhoneBook::promptTable(void) {
	std::cout << "\033[2J\033[H";
	print_first_table_line(_column_headers);
	std::cout << "║ " << _column_headers[0] << " ║ " << _column_headers[1] << " ║ " << _column_headers[2] << " ║ " << _column_headers[3] << " ║\n";
	for (int i = 0; i < _contactNumber; i++) {
		print_row_separator(_column_headers);
		print_table_row(i, _contactList, _column_headers);
	}
	print_last_table_line(_column_headers);
	prompt_single_user(_contactList, _column_headers, _contactNumber);
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
		if (answer.compare("") == 0)
			i -= 1;
	}
	return newUser;
}

void PhoneBook::addUser(void) {
	Contact newUser = getNewUser();

	if (_contactNumber == 8) {
		for (int i = 0; i < 7; i++)
			_contactList[i] = _contactList[i + 1];
		_contactList[7] = newUser;
	}
	else {
		_contactList[_contactNumber] = newUser;
		_contactNumber++;
	}
}