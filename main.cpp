// Eric Nortmanns C++ D&D


#include <iostream>
#include "Dice.h"
#include "Character.h"
#include "Prototype.h"

int main() {
	
	return 0;
	int advInput;
	advInput = displayMenu();
    if (advInput)
    {
        std::cout << "Starting a new adventure...\n";
        Player player = getPlayerInfo();
		startAdventure(player);
    }
    

}

int displayMenu()
{
	int advInput;
    std::cout << "\n\n";
    std::cout << "        Dungeons & Dragons Simulator\n";
    std::cout << "    ====================================\n\n";
    std::cout << "                 /\\ \n";
    std::cout << "                //\\\\\n";
    std::cout << "               //  \\\\\n";
    std::cout << "              |      |\n";
    std::cout << "              |      |\n";
    std::cout << "              |      |\n";
    std::cout << "              |      |\n";
    std::cout << "              |      |\n";
    std::cout << "              |      |\n";
    std::cout << "              |      |\n";
    std::cout << "              |      |\n";
    std::cout << "              |      |\n";
    std::cout << "             //______\\\\\n";
    std::cout << "            [===========]\n";
    std::cout << "                 | |\n";
    std::cout << "                 | |\n";
    std::cout << "                (   )\n";
    std::cout << "                 (_)\n\n";
    std::cout << "    ====================================\n";
    std::cout << "        [1] Start New Adventure\n";
    std::cout << "        [2] Exit\n\n";
    std::cout << "    Enter your choice: ";
	if(advInput == '1')
	{
		return 1;
	}
    else if (advInput == '2')
    {
        std::cout << "Exiting the game. Goodbye!\n";
		return 0;
    }
	else
	{
		std::cout << "Not a valid input, try again";
	}
}

Player getPlayerInfo()
{
    Player player;
    player.inputName();
    std::cout << "Welcome, " << player.getName() << "!\n";
	player.inputClass();
	std::cout << "You have chosen class " << player.getClass() << ". Let the adventure begin!\n";
	std::cout << "Your starting stats are:\n";
	std::cout << "Health: " << player.getHealth() << "\n";
	std::cout << "Attack: " << player.getAttack() << "\n";
	std::cout << "Defense: " << player.getDefense() << "\n";
	std::cout << "Agility: " << player.getAgility() << "\n";
	std::cout << "Level: " << player.getLevel() << "\n";
	std::cout << "Good luck on your adventure!\n";
    return player;
}

void startAdventure(Player& player)
{

}