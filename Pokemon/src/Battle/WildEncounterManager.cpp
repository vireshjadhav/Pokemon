//WildEncounterManager.cpp
#include "../../include/Battle/WildEncounterManager.hpp"
#include "../../include/Pokemon/grass.hpp"
#include "../../include/Pokemon/Pokemon.hpp"
#include <cstdlib>
#include <ctime>


namespace N_Battle
{
	using namespace N_Pokemon;
	WildEncounterManager::WildEncounterManager() {
		srand(static_cast<unsigned int>(time(0)));
	}

	Pokemon* WildEncounterManager::getRandomPokemonFromGrass(const Grass &grass)
	{
		int rondomIndex = rand() % grass.wildPokemonList.size();
		return grass.wildPokemonList[rondomIndex];
	}
}