#pragma once
#include "../../include/Pokemon/Pokemon.hpp"
#include "../../include/Pokemon/PokemonType.hpp"
#include "../../include/Pokemon/Move.hpp"
#include "../../include/Utility/Utility.hpp"
#include <iostream>
using namespace std;
using namespace N_Pokemon;
using namespace N_Utility;


namespace N_Pokemon {
	//Default constructor
	Pokemon::Pokemon()
	{
		name = "Unknown";
		type = PokemonType::NORMAL;
		health = 50;
	}

	//Parameterized constructor
	Pokemon::Pokemon(string p_name, PokemonType p_type, int p_health, int p_maxHealth, int p_attackPower, vector <Move> p_moves)
	{
		name = p_name;
		type = p_type;
		health = p_health;
		maxHealth = p_maxHealth;
		attackPower = p_attackPower;
		moves = p_moves;
	}

	//Copy constructor
	Pokemon::Pokemon(const Pokemon* other)
	{
		name = other->name;
		type = other->type;
		health = other->health;
		maxHealth = other->maxHealth;
		attackPower = other->attackPower;
		moves = other->moves;
	}


	//Destructor
	Pokemon::~Pokemon()
	{
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

	void Pokemon::attack(Move selectedMove, Pokemon* target)
	{
		target->takeDamage(selectedMove.power);
	}

	void Pokemon::printAvailableMoves() 
	{
		cout << name << "'s available Moves:" << endl;

		for (size_t i = 0; i < moves.size(); ++i)
		{
			cout << i + 1 << ": " << moves[i].name << " (Power: " << moves[i].power << ")" << endl;
		}
	}

	void Pokemon::selectAndUseMove(Pokemon* target)
	{
		printAvailableMoves();

		int choice = selectMove();
		Move selectedMove = moves[choice - 1];

		useMove(selectedMove, target);
	}

	int Pokemon::selectMove()
	{
		int choice;
		cout << "Choose a move:";
		cin >> choice;

		while (choice < 1 || choice > static_cast<int>(moves.size()))
		{
			cout << "Invalid choice. Try again: ";
			cin >> choice;
		}

		return choice;
	}


	void Pokemon::useMove(Move selectedMove, Pokemon* target)
	{
		cout << name << " used " << selectedMove.name << "!" << endl;
		attack(selectedMove, target);

		N_Utility::Utility::waitForEnter();

		cout << "..." << endl;
		N_Utility::Utility::waitForEnter();

		if (target->isFainted())
			cout << target->name << " fainted!" << endl;
		else
			cout << target->name << " has " << target->health << " HP left." << endl;
	}
}