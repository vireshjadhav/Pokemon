#include <iostream>
#include "BattleManager.hpp"
#include "Grass.hpp"
#include "Player.hpp"
#include "Utility.hpp"
#include "Pokemon.hpp"
#include "PokemonType.hpp"
#include "PokemonChoice.hpp"
#include "WildEncounterManager.hpp"
using namespace std;

void BattleManager::startBattle(Player &player, Pokemon &wildPokemon)
{
	cout << "A Wild " << wildPokemon.name << " appeared!" << endl;
	battle(player.chosenPokemon, wildPokemon, player);
}

void BattleManager::battle(Pokemon &playerPokemon, Pokemon &wildPokemon, Player &player)
{
	while(!playerPokemon.isFainted() && !wildPokemon.isFainted())
	{
		playerPokemon.attack(wildPokemon);

		if (!wildPokemon.isFainted())
		{
			wildPokemon.attack(playerPokemon);
		}

		Utility::waitForEnter();
	}

	handleBattleOutcome(player, playerPokemon.isFainted());
}

void BattleManager::handleBattleOutcome(Player &player, bool playerWon)
{
	if (playerWon)
	{
		cout << player.chosenPokemon.name << " is victorious! Keep an eye on your Pokemon's Health" << endl;
	}
	else
	{
		cout << "Oh no! " << player.chosenPokemon.name << " fainted! You need to visit the PokeCenter." << endl;
		Utility::waitForEnter();
		cout << "Game Over." << endl;

	}
}