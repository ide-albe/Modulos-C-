#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook
{
	private:
		Contact data[9];
	public:
		PhoneBook();
		~PhoneBook();
		void		add_details();
		void		show_contacts();
		void		show_info();
};

#endif