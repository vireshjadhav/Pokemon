#pragma once
#include "../../include/Character/Player/Player.hpp"
#include "../../include/Battle/BattleState.hpp"
using namespace N_Player;
using namespace N_Battle;



namespace N_Battle {

	class BattleManager
	{
	public:
		BattleManager();
		~BattleManager();

		void startBattle(Player* player, Pokemon* pokemon); //Function to start the battle

	private:
		BattleState* battleState;

		void battle(Pokemon* playerPokemon, Pokemon* wildPokemon, Player* player);//Function to implement battle 
		void handleBattleOutcome(Player* player, bool playerWon); //Functio to decide what to afte battle
		void updateBattleState();
	};

}
