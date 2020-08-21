#pragma once

#include <iostream>
#include <string>


struct client
{
	std::string name;
	std::string phone;
	std::string email;
};

int Menu(int&);
void Show(client*);
void ShowClient(client*, int);
int Find(client*);
void Add(client*);
void Erase(client*);
void Sort(client*);