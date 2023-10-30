
#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	// std::cout << "Default constructor called" << std::endl;

}

PhoneBook::~PhoneBook()
{
	// std::cout << "Default destructor called" << std::endl;
}

void	PhoneBook::add_details(void)
{
	static int i;
	this->data[i % 8].add_contact();
	i++;
}

void	PhoneBook::show_contacts(void)
{
	int i = 0;
	std::string	name;
	std::string	last;
	std::string	nick;
	std::string	result;

	name = this->data[i].get_name();
	if (name.empty())
	{
		std::cout << std::endl;
		std::cout << "No contatcs added." << std::endl << std::endl;
	}
	if (!name.empty())
	{
		std::cout << std::endl;
		std::cout << "  |   NAME   | LASTNAME | NICKNAME |" << std::endl;
		std::cout << "  ----------------------------------" << std::endl;
	}
	while (!name.empty())
	{
		name = this->data[i].get_name();
		last = this->data[i].get_last();
		nick = this->data[i].get_nick();
		i++;
		if (name.empty())
			break ;
		std::cout << " " << i << "|" << std::flush;
		//NAME
		result = "";
		if (name.length() <= 9)
			result.append(10 - name.length(), ' ');
		result.append(name.substr(0, 9));
		if (name.length() > 9)
			result.append(".");
		std::cout << result << "|" << std::flush;
		//LAST
		result = "";
		if (last.length() <= 9)
			result.append(10 - last.length(), ' ');
		result.append(last.substr(0, 9));
		if (last.length() > 9)
			result.append(".");
		std::cout << result << "|" << std::flush;
		//NICK
		result = "";
		if (nick.length() <= 9)
			result.append(10 - nick.length(), ' ');
		result.append(nick.substr(0, 9));
		if (nick.length() > 9)
			result.append(".");
		std::cout << result << "|" << std::endl;
	}
}

void	PhoneBook::show_info()
{
	std::string command;
	std::string	name = this->data[0].get_name();
	std::string	last = this->data[0].get_last();
	std::string	nick = this->data[0].get_nick();
	std::string	phone = this->data[0].get_phone();
	std::string	secret = this->data[0].get_secret();

	if (!name.empty())
	{
		int index;
		std::cout << std::endl;
		std::cout << "Insert index to show details: ";
		std::getline(std::cin, command);
		index = std::atoi(command.c_str());
		if (index >= 1 && index <= 8)
		{
			std::cout << std::endl;
			if (this->data[index - 1].get_name().empty())
				std::cout << "There is no contact for this index." << std::endl << std::endl;
			if (!this->data[index - 1].get_name().empty())
			{
				name = this->data[std::atoi(command.c_str()) - 1].get_name();
				last = this->data[std::atoi(command.c_str()) - 1].get_last();
				nick = this->data[std::atoi(command.c_str()) - 1].get_nick();
				phone = this->data[std::atoi(command.c_str()) - 1].get_phone();
				secret = this->data[std::atoi(command.c_str()) - 1].get_secret();
				std::cout << "FIRST NAME:" << name << std::endl;
				std::cout << "LAST NAME:" << last << std::endl;
				std::cout << "NICKNAME:" << nick << std::endl;
				std::cout << "PHONE NUMBER:" << phone << std::endl;
				std::cout << "DARKEST SECRET:" << secret << std::endl << std::endl;
			}
		}
		else if (index <= 0 || index > 8)
		{
			std::cout << std::endl;
			std::cout << "Wrong index inserted!" << std::endl;
			std::cout << std::endl;
		}
	}
}

int main()
{
	PhoneBook agenda;
	std::string command;
	while (1)
	{
		std::cout << "Agenda. ADD, SEARCH o EXIT" << std::endl;
		std::getline(std::cin, command);
		if (std::cin.eof())
			exit(0);
		if (command == "ADD" || command == "add")
			agenda.add_details();
		if (command == "SEARCH" || command == "search")
		{
			agenda.show_contacts();
			agenda.show_info();
		}
		if (command == "EXIT" || command == "exit")
			exit(0);
	}
}