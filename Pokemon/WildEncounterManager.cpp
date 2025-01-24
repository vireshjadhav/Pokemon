//WildEncounterManager.cpp

#include "WildEncounterManager.hpp"
#include <cstdlib>
#include <ctime>

WildEncounterManager::WildEncounterManager() {
	srand(time(0));
}

WildPokemon WildEncounterManager::getRandomPokemonFromGrass(const Grass& grass)
{
	int rondomIndex = rand() % grass.wildPokemonList.size();
	return grass.wildPokemonList[rondomIndex];
}