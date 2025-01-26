#include "Pokemon.hpp"
#include "PokemonType.hpp"
#include <iostream>
using namespace std;

//Default constructor
Pokemon::Pokemon()
{
  name = "Unknown";
  type = PokemonType::NORMAL;
  health = 50;
}

//Parameterized constructor
Pokemon::Pokemon(string p_name, PokemonType p_type, int p_health, int p_maxHealth, int p_attackPower)
{
	name = p_name;
	type = p_type;
	health = p_health;
	maxHealth = p_maxHealth;
	attackPower = p_attackPower;
}

//Copy constructor
Pokemon::Pokemon(const Pokemon &other)
{
  name = other.name;
  type = other.type;
  health = other.health;
  maxHealth = other.maxHealth;
  attackPower = other.attackPower;
}


//Destructor
Pokemon::~Pokemon()
{
}


// Function to demonstrate attack
void Pokemon::attack(Pokemon& target) 
{
	int damage = attackPower; //Use attack Power for damage calculation
	cout << name << " attacks " << target.name << " for " << damage << " damage!" << endl;
	target.takeDamage(attackPower);  
}

void Pokemon::takeDamage(int damage)
{
	health -= damage;//Reduce HP by the damage amount
	if (health < 0)
		health = 0; //Ensure HP doesn't go below 0
}

bool Pokemon::isFainted() const
{
	return health <= 0; // Retun true if HP is 0 or less
}

void Pokemon::heal()
{
	health = maxHealth; // Resetting health to maximum
}