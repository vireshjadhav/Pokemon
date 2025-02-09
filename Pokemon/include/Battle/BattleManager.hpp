#pragma once
#include "../../include/Character/Player/Player.hpp"
#include "../../include/Battle/BattleState.hpp"
#include "../../include/Pokemon/Pokemon.hpp"

using namespace N_Battle;



namespace N_Battle
{
	using namespace N_Character::N_Player;
	using namespace N_Pokemon;

	class BattleManager
	{
	public:
		BattleManager();
		~BattleManager();

		void startBattle(Player* player, N_Pokemon::Pokemon* pokemon); //Function to start the battle
		static void stopBattle();

	private:
		static BattleState battleState;

		void battle();//Function to implement battle 
		void handleBattleOutcome(); //Functio to decide what to afte battle
		void updateBattleState();
	};

}
