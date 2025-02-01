//grass.hpp
#pragma once

#include <vector>
#include <string>
#include "../../include/Pokemon/Pokemon.hpp"
using namespace std;
using namespace N_Pokemon;


namespace N_Pokemon {
	struct Grass
	{
		string environmentType;  //Example: "Forest", "Cave", "Riverbank"
		vector<Pokemon*> wildPokemonList; //List of wild Pokemon that live in this grass
		int encounterRate; //Likehood of encountering a wild pokemon out of 100
	};
}