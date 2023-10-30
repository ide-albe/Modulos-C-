#include "Harl.hpp"

Harl::Harl()
{
}

void Harl::complain(std::string level)
{
	std::string lvl[4] = {"debug", "info", "warning", "error"};
	void (Harl::*func_array[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	for (int i = 0; i < 4; i++)
	{
		if (lvl[i] == level)
			(this->*func_array[i])();
	}
}

void Harl::debug( void )
{
	std::cout << std::endl;
	std::cout << "---------------------------------DEBUG---------------------------------" << std::endl;
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-picklespecial" << std::endl;
	std::cout << "-ketchup burger. I really do!" << std::endl;
	std::cout << std::endl;
}

void Harl::info( void )
{
	std::cout << std::endl;
	std::cout << "----------------------------------INFO---------------------------------" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put" << std::endl;
	std::cout <<	"enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
	std::cout << std::endl;
}

void Harl::warning( void )
{
	std::cout << std::endl;
	std::cout << "---------------------------------WARNING-------------------------------" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming" << std::endl;
	std::cout << "for years whereas you started working here since last month." << std::endl;
	std::cout << std::endl;
}

void Harl::error( void )
{
	std::cout << std::endl;
	std::cout << "---------------------------------ERROR---------------------------------" << std::endl;
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
	std::cout << std::endl;
}

int main()
{
	Harl harl;

	harl.complain("debug");
	// harl.complain("info");
	// harl.complain("warning");
	// harl.complain("info");
	// harl.complain("no_lvl_test");
}