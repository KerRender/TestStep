#include <iostream>

#include "Healthy_stuff.h"


int main()
{
	client* phonebook = new client[100];
	do {
		Menu();
		switch (choice)
		{
		case 1: {
			Show(phonebook);
			break;
		}
		case 2: {
			Add(phonebook);
			break;
		}
		case 3: {

		}
		default:
			break;
		}
	} while (choice != );
}