//WildEncounterManager.hpp
#pragma once
#include <vector>
#include "../../include/Pokemon/Pokemon.hpp"
#include "../../include/Pokemon/grass.hpp"


namespace N_Battle 
{
	using namespace N_Pokemon;
	class WildEncounterManager
	{
	public:
		WildEncounterManager();
		Pokemon* getRandomPokemonFromGrass(const Grass* grass);
	};
}