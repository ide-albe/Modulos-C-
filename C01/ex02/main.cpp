#include <iostream>
#include <string>

int main()
{
	std::cout << std::endl;
	std::string	mystring = "HI THIS IS BRAIN";
	std::string	*mystringPTR = &mystring;
	std::string &mystringREF = mystring;

	std::cout << "DIRECCIONES DE MEMORIA:" << std::endl;
	std::cout << "mystring: " << &mystring << std::endl;
	std::cout << "mystringPTR: " << mystringPTR << std::endl;
	std::cout << "mystringREF: " << &mystringREF << std::endl << std::endl;

	std::cout << "VALORES:" << std::endl;
	std::cout << "mystring: " << mystring << std::endl;
	std::cout << "mystringPTR: " << *mystringPTR << std::endl;
	std::cout << "mystringREF: " << mystringREF << std::endl << std::endl;
}