#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <cstdlib>
#include <iostream>

class Contact
{
	private:
		std::string first_name;
		std::string last_name;
		std::string nickname;
		std::string phone_number;
		std::string darkest_secret;
	public:
		Contact();
		~Contact();
		std::string get_name();
		std::string get_last();
		std::string get_nick();
		std::string get_phone();
		std::string get_secret();
		void 		add_contact();
		std::string	check_input();

};

#endif