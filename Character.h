class Entity
{
	int health;
	int attack;
	int defense;
};
class Player : public Entity
{
	int level;
	int experience;
	string name;
	int playerClass; // 1 = Warrior, 2 = Wizard, 3 = Rogue
};
// Enemy types: Goblin, Orc, Troll, skeletons, dragons, rival knights
class Enemy : public Entity