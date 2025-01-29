//WildEncounterManager.hpp
#pragma once
#include <vector>
#include "../../include/Pokemon/Pokemon.hpp"
#include "../../include/Pokemon/grass.hpp"
using namespace N_Pokemon;

namespace N_Battle {
	class WildEncounterManager
	{
	public:
		WildEncounterManager();
		Pokemon getRandomPokemonFromGrass(const Grass& grass);
	};
}