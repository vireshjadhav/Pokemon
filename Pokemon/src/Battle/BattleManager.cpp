#include <iostream>
#include "../../include/Battle/BattleManager.hpp"
#include "../../include/Battle/BattleState.hpp"
#include "../../include/Pokemon/grass.hpp"
#include "../../include/Character/Player/Player.hpp"
#include "../../include/Utility/Utility.hpp"
#include "../../include/Pokemon/Pokemon.hpp"
#include "../../include/Pokemon/PokemonType.hpp"
#include "../../include/Pokemon/PokemonChoice.hpp"
#include "../../include/Battle/WildEncounterManager.hpp"
using namespace std;
using namespace N_Utility;
using namespace N_Pokemon;
using namespace N_Battle;
using namespace N_Player;

BattleManager::BattleManager() {
	battleState = new BattleState();
}

BattleManager::~BattleManager() {}

void BattleManager::startBattle(Player* player, Pokemon* wildPokemon)
{
	battleState->playerPokemon = player->chosenPokemon;
	battleState->wildPokemon = wildPokemon;
	battleState->playerTurn = true;
	battleState->battleOngoing = true;

	cout << "A Wild " << wildPokemon->getName() << " appeared!" << endl;
	battle(player->chosenPokemon, wildPokemon, player);
}

void BattleManager::battle(Pokemon* playerPokemon, Pokemon* wildPokemon, Player* player)
{
	while (battleState->battleOngoing)
	{
		if (battleState->playerTurn)
		{
			battleState->playerPokemon->attack(battleState->wildPokemon);
		}
		else
		{
			battleState->wildPokemon->attack(battleState->playerPokemon);
		}

		updateBattleState();

		battleState->playerTurn = !battleState->playerTurn;

		Utility::waitForEnter();
	}

	handleBattleOutcome(player, playerPokemon->isFainted());
}

void BattleManager::updateBattleState() 
{
	if (battleState->playerPokemon->isFainted())
	{
		battleState->battleOngoing = false;
	}
	else if (battleState->wildPokemon->isFainted())
	{
		battleState->battleOngoing = false;
	}
}

void BattleManager::handleBattleOutcome(Player* player, bool playerWon)
{
	if (battleState->playerPokemon->isFainted())
	{
		cout << battleState->playerPokemon->getName() << " has fainted! You lose the battle." << endl;
	}
	else
	{
		cout << "You defeated the wild " << battleState->wildPokemon->getName() << "!" << endl;
	}
}