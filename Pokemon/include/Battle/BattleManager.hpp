#pragma once

#include "../../include/Battle/BattleState.hpp"
#include "../../include/Character/Player/Player.hpp"




namespace N_Battle
{
	using namespace N_Character::N_Player;
	class Pokemon;
	using namespace N_Pokemon;

	class BattleManager
	{
	public:

		void startBattle(Player* player, N_Pokemon::Pokemon* pokemon); //Function to start the battle
		static void stopBattle();

	private:
		static BattleState battleState;

		void battle();//Function to implement battle 
		void handleBattleOutcome(); //Functio to decide what to afte battle
		void updateBattleState();
	};

}
