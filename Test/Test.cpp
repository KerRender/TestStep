#include <iostream>

#include "Healthy_stuff.h"


int main()
{
	client* phonebook = new client[100];
	int choice;
	do {
		Menu(choice);
		switch (choice)
		{
		case 1: {
			Show(phonebook);
			break;
		}
		case 2: {
			std::cout << "Find by:\n";
			ShowClient(phonebook, Find(phonebook));
			break;
		}
		case 3: {
			Add(phonebook);
			break;
		}
		case 4: {
			Erase(phonebook);
			break;
		}
		case 5: {
			Sort(phonebook);
		}
		default:
			break;
		}
	} while (choice != 6);

	delete [] phonebook;

	std::cout << "Farewell!";
	return 0;
}