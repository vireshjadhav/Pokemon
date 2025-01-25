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
Pokemon::Pokemon(string p_name, PokemonType p_type, int p_health)
{
  name = p_name;
  type = p_type;
  health = p_health;
}

//Copy constructor
Pokemon::Pokemon(const Pokemon &other)
{
  name = other.name;
  type = other.type;
  health = other.health;
}


//Destructor
Pokemon::~Pokemon()
{
}


// Function to demonstrate attack
void Pokemon::attack(Pokemon& target) 
{
	int damage = 10;
	cout << name << " attacks " << target.name << " for " << damage << " damage!" << endl;
	target.takeDamage(damage);  
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