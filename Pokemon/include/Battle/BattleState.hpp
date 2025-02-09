#pragma once
#include "../../include/Pokemon/Pokemon.hpp"

namespace N_Battle 
{
	class Pokemon;
	using namespace N_Character::N_Player;


	struct BattleState
	{
		Pokemon* playerPokemon;
		Pokemon* wildPokemon;
		bool playerTurn;
		bool battleOngoing;
	};
}
