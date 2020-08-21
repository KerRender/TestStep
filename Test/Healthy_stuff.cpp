#include "Healthy_stuff.h"

int Menu(int &c)
{
	std::cout << "1. Show the phonebook;\n";
	std::cout << "2. Find client;\n";
	std::cout << "3. Add client;\n";
	std::cout << "4. Erase client;\n";
	std::cout << "5. Sort the phonebook;\n";
	std::cout << "6. Quit.\n";
	std::cin >> c;
	std::cout << std::endl;
	return c;
}

void Show(client *c)
{
	if (sizeof(c) / sizeof(c[0]) == 0) {
		std::cout << "There is nothing here.. yet :)\n\n";
	}
	else {
		for (int i = 0; i < sizeof(c)/sizeof(c[0]); i++)
		{
			std::cout << c[i].name << "\t" << c[i].phone << "\t" << c[i].email << std::endl;
		}
	}
}

void ShowClient(client* c, int index)
{
	std::cout << c[index].name << '\t' << c[index].phone << '\t' << c[index].email << '\n';
}

int Find(client *c)
{
	std::cout << "1.Name;\n";
	std::cout << "2.Phone;\n";
	std::cout << "3.Email.\n";
	int by;
	std::cin >> by;
	std::cout << std::endl;

	std::string tmp_name;
	std::string tmp_phone;
	std::string tmp_email;
	int index;
	int count = 0;

	switch (by)
	{
	case 1: {
		std::cout << "Enter the name: ";
		std::cin >> tmp_name;
		
		for (int i = 0; i < sizeof(c) / sizeof(c[0]); i)
		{
			if (tmp_name == c[i].name) {
				index = i;
				count++;
			}
		}

		if (count == 0) {
			std::cout << "Element not found.\n";
			return NULL;
		}
		else {
			return index;
		}

		break;
	}
	case 2: {
		std::cout << "Enter the phone: ";
		std::cin >> tmp_phone;

		for (int i = 0; i < sizeof(c) / sizeof(c[0]); i)
		{
			if (tmp_phone == c[i].phone) {
				index = i;
				count++;
			}
		}

		if (count == 0) {
			std::cout << "Element not found.\n";
			return NULL;
		}
		else
			return index;
		break;
	}
	case 3: {
		std::cout << "Enter the email: ";
		std::cin >> tmp_email;

		for (int i = 0; i < sizeof(c) / sizeof(c[0]); i)
		{
			if (tmp_email == c[i].email) {
				index = i;
				count++;
			}
		}

		if (count == 0) {
			std::cout << "Element not found.\n";
			return NULL;
		}
		else
			return index;

		break;
	}
	default:
		break;
	}
}

void Add(client* c)
{
	if (sizeof(c) / sizeof(c[0]) == 0) {
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

void Erase(client *c)
{
	std::cout << "Erase by:\n";
	int index = Find(c);

	if (index != NULL) {
		for (int i = index; i < sizeof(c) / sizeof(c[0]); i++)
			c[i] = c[i + 1];
		std::cout << "Client deleted.";
	}
}

void Sort(client *c)
{
	std::cout << "Preference: \n";
	std::cout << "1.By name;\n";
	std::cout << "2.By phone;\n";
	std::cout << "3.By email.\n";

	int by;

	std::cin >> by;
	std::cout << std::endl;

	switch (by)
	{
	case 1: {
		std::cout << "1.From higher;\n";
		std::cout << "2.From lower.\n";
		std::cin >> by;
		std::cout << std::endl;

		switch (by)
		{
		case 1: {
			int count = 0;
			do
			{
				for (int i = 0; i < sizeof(c) / sizeof(c[0]); i++)
					if (c[i].name < c[i + 1].name) {
						client temp;
						temp = c[i];
						c[i] = c[i + 1];
						c[i + 1] = temp;
						count++;
						continue;
					}
			} while (count != 0);
			break;
		}
		case 2: {
			int count = 0;
			do
			{
				for (int i = 0; i < sizeof(c) / sizeof(c[0]); i++)
					if (c[i].name > c[i + 1].name) {
						client temp;
						temp = c[i];
						c[i] = c[i + 1];
						c[i + 1] = temp;
						count++;
						continue;
					}
			} while (count != 0);
			break;
		}
		default:
			break;
		}
	}
	case 2: {
		std::cout << "1.From higher;\n";
		std::cout << "2.From lower.\n";
		std::cin >> by;
		std::cout << std::endl;

		switch (by)
		{
		case 1: {
			int count = 0;
			do
			{
				for (int i = 0; i < sizeof(c) / sizeof(c[0]); i++)
					if (c[i].phone < c[i + 1].phone) {
						client temp;
						temp = c[i];
						c[i] = c[i + 1];
						c[i + 1] = temp;
						count++;
						continue;
					}
			} while (count != 0);
			break;
		}
		case 2: {
			int count = 0;
			do
			{
				for (int i = 0; i < sizeof(c) / sizeof(c[0]); i++)
					if (c[i].phone > c[i + 1].phone) {
						client temp;
						temp = c[i];
						c[i] = c[i + 1];
						c[i + 1] = temp;
						count++;
						continue;
					}
			} while (count != 0);
			break;
		}
		default:
			break;
		}
	}
	case 3: {
		std::cout << "1.From higher;\n";
		std::cout << "2.From lower.\n";
		std::cin >> by;
		std::cout << std::endl;

		switch (by)
		{
		case 1: {
			int count = 0;
			do
			{
				for (int i = 0; i < sizeof(c) / sizeof(c[0]); i++)
					if (c[i].email < c[i + 1].email) {
						client temp;
						temp = c[i];
						c[i] = c[i + 1];
						c[i + 1] = temp;
						count++;
						continue;
					}
			} while (count != 0);
			break;
		}
		case 2: {
			int count = 0;
			do
			{
				for (int i = 0; i < sizeof(c) / sizeof(c[0]); i++)
					if (c[i].email > c[i + 1].email) {
						client temp;
						temp = c[i];
						c[i] = c[i + 1];
						c[i + 1] = temp;
						count++;
						continue;
					}
			} while (count != 0);
			break;
		}
		default:
			break;
		}
	}
	default:
		break;
	}
}