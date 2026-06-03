#include "Harl.hpp"

Harl::Harl() {}

Harl::~Harl() {}

enum class LevelCode {
	debug,
	info,
	warning,
	error,
	unknown
};

static LevelCode	getLevelCode( std::string &str ) {
	if (str == "DEBUG") return LevelCode::debug;
	if (str == "INFO") return LevelCode::info;
	if (str == "WARNING") return LevelCode::warning;
	if (str == "ERROR") return LevelCode::warning;
	return LevelCode::unknown;
}

void	Harl::debug( void ) {
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!\n";
}

void	Harl::info( void ) {
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!\n";
}

void	Harl::warning( void ) {
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years, whereas you started working here just last month.\n";
}

void	Harl::error( void ) {
	std::cout << "This is unacceptable! I want to speak to the manager now.\n";
}

void	Harl::complain( std::string level ) {
	void (Harl::*f[4])( void ) = {
		&Harl::debug,
		&Harl::info,
		&Harl::warning,
		&Harl::error
	};
	LevelCode level_code = getLevelCode(level);
	switch (level_code)
	{
	case LevelCode::debug:
		f[0];
		break;
	case LevelCode::info:
		f[1];
		break;
	case LevelCode::warning:
		f[2];
		break;
	case LevelCode::error:
		f[3];
		break;
	default:
		std::cout << "Level not supported.\n";
		break;
	}
}