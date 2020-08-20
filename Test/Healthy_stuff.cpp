#include "Healthy_stuff.h"

void Menu()
{
	std::cout << "1. Show the phonebook.\n";
	std::cout << "2. Add client.\n";
	std::cout << "3. Erase client.\n";
	std::cout << "4. Find client.\n";
	std::cout << "5. Quit.\n";
	std::cin >> choice;
}

void Show(client *c)
{
	if (c == nullptr){
		std::cout << "There is nothing here.. yet :)";
	}
	else {
		for (int i = 0; i < sizeof(c)/sizeof(c[0]); i++)
		{
			std::cout << c[i].name << "\t" << c[i].phone << "\t" << c[i].email << std::endl;
		}
	}
}

void Add(client* c)
{
	if (c == nullptr) {
		std::string tmp_name;
		std::string tmp_phone;
		std::string tmp_email;
		
		std::cout << "Enter the name: ";
		std::cin >> tmp_name;
		c[0].name = tmp_name;
		std::cout << "Enter the phone: ";
		std::cin >> tmp_phone;
		c[0].phone = tmp_phone;
		std::cout << "Enter the email: ";
		std::cin >> tmp_email;
		c[0].email = tmp_email;
	}
	else {
		std::string tmp_name;
		std::string tmp_phone;
		std::string tmp_email;

		std::cout << "Enter the name: ";
		std::cin >> tmp_name;
		c[sizeof(c) / sizeof(c[0]) + 1].name = tmp_name;
		std::cout << "Enter the phone: ";
		std::cin >> tmp_phone;
		c[sizeof(c) / sizeof(c[0]) + 1].phone = tmp_phone;
		std::cout << "Enter the email: ";
		std::cin >> tmp_email;
		c[sizeof(c) / sizeof(c[0]) + 1].email = tmp_email;
	}
}

void Erase(client c)
{
	std::cout << ""
}