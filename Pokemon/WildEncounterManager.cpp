//WildEncounterManager.cpp

#include "WildEncounterManager.hpp"
#include "Grass.hpp"
#include <cstdlib>
#include <ctime>

WildEncounterManager::WildEncounterManager() {
	srand(time(0));
}

Pokemon WildEncounterManager::getRandomPokemonFromGrass(const Grass& grass)
{
	int rondomIndex = rand() % grass.wildPokemonList.size();
	return grass.wildPokemonList[rondomIndex];
}