#include "Contact.hpp"
#include "PhoneBook.hpp"

Contact::Contact()
{
	// std::cout << "Default constructor called" << std::endl;

}

Contact::~Contact()
{
	// std::cout << "Default destructor called" << std::endl;
}

void	Contact::add_contact(void)
{
	std::string command;

	if (std::cin.eof())
			exit(0);
	std::cout << std::endl;
	while (true)
	{
		command = "";
		std::cout << "Enter your name: ";
		std::getline(std::cin, command);
		if (std::cin.eof())
			exit(0);
		if (command.empty())
			std::cout << std::endl << "Can't be empty!" << std::endl << std::endl;
		else
		{
			this->first_name = command;
			break ;
		}
	}
	while (true)
	{
		command = "";
		std::cout << "Enter your surname: ";
		std::getline(std::cin, command);
		if (std::cin.eof())
			exit(0);
		if (command.empty())
			std::cout << std::endl << "Can't be empty!" << std::endl << std::endl;
		else
		{
			this->last_name = command;
			break ;
		}
	}
	while (true)
	{
		command = "";
		std::cout << "Enter your nickname: ";
		std::getline(std::cin, command);
		if (std::cin.eof())
			exit(0);
		if (command.empty())
			std::cout << std::endl << "Can't be empty!" << std::endl << std::endl;
		else
		{
			this->nickname = command;
			break ;
		}
	}
	while (true)
	{
		int		x = 0;
		command = "";
		std::cout << "Enter your phone number: ";
		std::getline(std::cin, command);
		if (std::cin.eof())
			exit(0);
		if (command.empty())
			std::cout << std::endl << "Can't be empty!" << std::endl << std::endl;
		for (size_t i = 0; i < command.length(); i++)
			if (!std::isdigit(command[i]))
				x = 1;
		if (x == 1)
			std::cout << "That's not a phone number!" << std::endl;
		else
		{
			x = 0;
			this->phone_number = command;
			break ;
		}
	}
	while (true)
	{
		command = "";
		std::cout << "Enter your darkest secret: ";
		std::getline(std::cin, command);
		if (std::cin.eof())
			exit(0);
		if (command.empty())
			std::cout << std::endl << "Can't be empty!" << std::endl << std::endl;
		else
		{
			this->darkest_secret = command;
			break ;
		}
	}
		std::cout << std::endl;
}

std::string Contact::get_name()
{
	return (this->first_name);
}

std::string Contact::get_last()
{
	return (this->last_name);
}

std::string Contact::get_nick()
{
	return (this->nickname);
}

std::string Contact::get_phone()
{
	return (this->phone_number);
}

std::string Contact::get_secret()
{
	return (this->darkest_secret);
}