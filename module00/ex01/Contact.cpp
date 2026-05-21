#include "Contact.hpp"

std::string Contact::GetFirstName() const{
	return _firstName;
}

std::string Contact::GetLastName() const{
	return _lastName;
}

std::string Contact::GetNickname() const{
	return _nickname;
}

std::string Contact::GetPhoneNumber() const{
	return _phoneNumber;
}

std::string Contact::GetDarkestSecret() const{
	return _darkestSecret;
}

void Contact::SetFirstName(std::string arg) {
	_firstName = arg;
}

void Contact::SetLastName(std::string arg) {
	_lastName = arg;
}

void Contact::SetNickname(std::string arg) {
	_nickname = arg;
}

void Contact::SetPhoneNumber(std::string arg) {
	_phoneNumber = arg;
}

void Contact::SetDarkestSecret(std::string arg) {
	_darkestSecret = arg;
}