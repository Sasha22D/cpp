#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <string>

class Contact
{
private:
	std::string _firstName;
	std::string _lastName;
	std::string _nickname;
	std::string _phoneNumber;
	std::string _darkestSecret;
public:
	Contact();
	std::string GetFirstName() const;
	std::string GetLastName() const;
	std::string GetNickname() const;
	std::string GetPhoneNumber() const;
	std::string GetDarkestSecret() const;
	void SetFirstName(const std::string &arg);
	void SetLastName(const std::string &arg);
	void SetNickname(const std::string &arg);
	void SetPhoneNumber(const std::string &arg);
	void SetDarkestSecret(const std::string &arg);
};

#endif