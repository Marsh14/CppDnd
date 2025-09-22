#include <iostream>
#include <random>

class Dice {
	public:
		Dice() : gen(rd()) {} // Initialize random number generator
		int roll(int sides) { // Roll a dice with 'sides' number of sides (Will be 20 since DnD uses a d20)
			std::uniform_int_distribution<> dis(1, sides); 
			return dis(gen);
		}
	private:
		std:: random_device rd;  // Obtain a random number from hardware
		std::mt19937 gen; // Seed the generator

};

// Dice dice;
// int result = dice.roll(20);