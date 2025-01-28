//WildEncounterManager.hpp
#include <vector>
#include "../../include/Pokemon/Pokemon.hpp"
#include "../../include/Pokemon/grass.hpp"


class WildEncounterManager
{
public:
	WildEncounterManager();
	Pokemon getRandomPokemonFromGrass(const Grass &grass);
};