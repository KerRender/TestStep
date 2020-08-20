#pragma once

#include <iostream>
#include <string>

static int choice;

struct client
{
	std::string name;
	std::string phone;
	std::string email;
};

void Menu();
void Show(client*);
void Add(client*);
void Erase(client*);

