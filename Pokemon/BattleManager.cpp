#include <iostream>
#include "Pokemon.hpp"
#include "PokemonType.hpp"
#include "PokemonChoice.hpp"
using namespace std;



void battle(Pokemon& playerPokemon, Pokemon& wildPokemon)
{
	cout << "A wild " << wildPokemon.name << " appeared!" << endl;

	while(!playerPokemon.isFainted() && !wildPokemon.isFainted())
	{
		playerPokemon.attack(wildPokemon);

		if (!wildPokemon.isFainted())
		{
			wildPokemon.attack(playerPokemon);
		}

	}

	if (playerPokemon.isFainted())
	{
		cout << playerPokemon.name << " has fainted! You lose the battle." << endl;
	}
	else 
	{
		cout << "You defeated the wild " << wildPokemon.name << "!" << endl;
	}
}