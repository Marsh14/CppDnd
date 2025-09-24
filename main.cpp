// Eric Nortmanns C++ D&D


#include <iostream>
#include "Dice.h"
#include "Character.h"
int main() {
	std::cout << "
	return 0;
}

void displayMenu()
{
	char advInput;
	std::cout << "Welcome to C++ D&D!";
	std::cout << "Start Adventure [S]";
	std::cin >> advInput;
	if(advInput == 'S' || advInput == 's')
	{
		std::cout << "Adventure Started!";
	}
	else
	{
		std::cout << "Not a valid input, try again";
	}
}