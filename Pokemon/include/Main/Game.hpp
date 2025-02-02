//Game.hpp
#pragma once
#include "../../include/Pokemon/grass.hpp"
#include "../../include/Character/Player/Player.hpp"
using namespace N_Pokemon;
using namespace N_Player;


namespace N_Main {

	class Game
	{
	private:
		Grass* forestGrass;
		Pokemon* wildPokemon;
	public:
		Game();
		~Game();
		void gameLoop(Player* player);
	};
}