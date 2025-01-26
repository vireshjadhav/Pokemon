//WildEncounterManager.hpp
#include "../../Include/WildEncounterManager;"
#include <vector>
#include "Pokemon.hpp"
#include "Grass.hpp"


class WildEncounterManager
{
public:
	WildEncounterManager();
	Pokemon getRandomPokemonFromGrass(const Grass &grass);
};