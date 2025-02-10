#include <iostream>
#include "../../include/Battle/BattleManager.hpp"

#include "../../include/Character/Player/Player.hpp"
#include "../../include/Utility/Utility.hpp"



namespace N_Battle 
{
	using namespace N_Pokemon;
	using namespace std;
	using namespace N_Utility;

	BattleState BattleManager::battleState;

	void BattleManager::startBattle(Player* player, N_Pokemon::Pokemon* wildPokemon)
	{
		battleState.playerPokemon = player->chosenPokemon;
		battleState.wildPokemon = wildPokemon;
		battleState.playerTurn = true;
		battleState.battleOngoing = true;

		cout << "A Wild " << wildPokemon->name << " appeared!" << endl;
		battle();
	}

	void BattleManager::stopBattle() 
	{ 
		battleState.battleOngoing = false;
	}

	void BattleManager::battle()
	{
		while (battleState.battleOngoing)
		{
			if (battleState.playerTurn)
			{
				battleState.playerPokemon->selectAndUseMove(battleState.wildPokemon);
			}
			else
			{
				battleState.wildPokemon->selectAndUseMove(battleState.playerPokemon);
			}

			updateBattleState();

			battleState.playerTurn = !battleState.playerTurn;

			Utility::waitForEnter();
		}

		handleBattleOutcome();
	}

	void BattleManager::updateBattleState()
	{
		if (battleState.playerPokemon->isFainted())
		{
			battleState.battleOngoing = false;
		}
		else if (battleState.wildPokemon->isFainted())
		{
			battleState.battleOngoing = false;
		}
	}

	void BattleManager::handleBattleOutcome()
	{
		if (battleState.playerPokemon->isFainted())
		{
			cout << battleState.playerPokemon->name << " has fainted! You lose the battle." << endl;
		}
		else
		{
			cout << "You defeated the wild " << battleState.wildPokemon->name << "!" << endl;
		}
	}
}