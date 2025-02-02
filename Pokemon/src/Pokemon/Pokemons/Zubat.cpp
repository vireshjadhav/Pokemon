//Zubat.cpp
#include <iostream>
#include "../../../include/Pokemon/Pokemons/Zubat.hpp"
#include "../../../include/Pokemon/Pokemon.hpp"
#include "../../../Include/Pokemon/PokemonType.hpp"
using namespace N_Pokemon;

namespace N_Pokemon {
	namespace N_Pokemons {
		using namespace std;

		Zubat::Zubat() : Pokemon("Zubat", PokemonType::NORMAL, 100, 100, 20) {};

		Zubat::~Zubat() {}

		void Zubat::attack(Pokemon* target)
		{
			cout << name << "uses Wing Attack on" << target->getName() << "!" << endl;
			target->takeDamage(20);
		}

	}
}