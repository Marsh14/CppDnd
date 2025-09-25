// This file cntains the class definitions for the characters in the game
#include <string>
#include <iostream>
#include "Dice.h"

class Entity
{
protected:
	int health;
	int attack;
	int defense;
	int experience;
public:
	Entity(int h, int a, int d, int e) : health(h), attack(a), defense(d), experience(e){}
	int getHealth() const { return health; }
	int getAttack() const { return attack; }
	int getDefense() const { return defense; } 
	int getExperience() const { return experience; }
	// Getters for health, attack, and defense
	void setHealth(int h) { health = h; } // Setter for health
	void setAttack(int a) { attack = a; } // Setter for attack
	void setDefense(int d) { defense = d; } // Setter for defense
};
class Player : public Entity
{
	int level;
	std::string name;
	int playerClass; // 1 = Knight, 2 = Wizard, 3 = Rogue
	int agility; // Determines turn order in combat and chance to dodge attacks
public:
	Player() : Entity(100, 0, 0, 0), level(1), agility(0) {} // Example defaults
	void inputName()
	{
		std::cout << "Please enter player name: ";
		std::getline(std::cin, name);
	}
	std::string getName() const { return name; }
	void inputClass()
	{
		std::cout << "Please enter player class: ";
		std::cout << "[1] Knight - Good defense and attack, but low agility\n";
		std::cout << "[2] Wizard - Good attack and agility, but low defense\n";
		std::cout << "[3] Rogue - Good defense and agility, but low attack\n";
		std::cin >> playerClass;
		switch (playerClass)
		{
			case 1: // Knight
				attack += 15;
				defense += 10;
				agility += 2;
				break;
			case 2: // Wizard
				attack += 12;
				defense += 4;
				agility += 5;
				break;
			case 3: // Rogue
				attack += 5;
				defense += 10;
				agility += 8;
				break;
		}
	}
	int getClass() const { return playerClass; }
	int getAttack() const { return attack; } 
	int getDefense() const { return defense; } 
	int getHealth() const { return health; } 
	int getLevel() const { return level; }
	int getAgility() const { return agility; }
};
// Enemy types: Goblin, Orc, skeletons, dragons, rival knights
class Goblin : public Entity
{
public:
	Goblin() : Entity(30, 5, 2, 10) {}
};

class Orc : public Entity
{
public:
	Orc() : Entity(50, 10, 5, 20) {}
};

class Skeleton : public Entity
{
public:
	Skeleton() : Entity(40, 7, 3, 15) {}
};

class Dragon : public Entity
{
public:
	Dragon() : Entity(125, 20, 10, 50) {}
};

class RivalKnight : public Entity
{
public:
	RivalKnight() : Entity(75, 15, 7, 30) {}
};