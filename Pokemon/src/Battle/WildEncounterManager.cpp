//WildEncounterManager.cpp

#include "../../include/Battle/WildEncounterManager.hpp"
#include "../../include/Pokemon/grass.hpp"
#include <cstdlib>
#include <ctime>
using namespace N_Pokemon;
using namespace N_Battle;

WildEncounterManager::WildEncounterManager() {
	srand(time(0));
}

Pokemon* WildEncounterManager::getRandomPokemonFromGrass(const Grass* grass)
{
	int rondomIndex = rand() % grass->wildPokemonList.size();
	return grass->wildPokemonList[rondomIndex];
}