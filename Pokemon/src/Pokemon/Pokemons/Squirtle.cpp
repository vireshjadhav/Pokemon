//Squirtle.cpp
#include <iostream>
#include "../../../include/Pokemon/Pokemons/Squirtle.hpp"
#include "../../../include/Pokemon/Pokemon.hpp"
#include "../../../include/Pokemon/PokemonType.hpp"
using namespace N_Pokemon;


namespace N_Pokemon {
	namespace N_Pokemons {
		using namespace std;

		Squirtle::Squirtle() : Pokemon("Squirtle", PokemonType::WATER, 100, 100, 35) {}

		void Squirtle::attack(Pokemon* target)
		{
			cout << name << " uses Water splash on " << target->getName() << "!" << endl;
			target->takeDamage(20);
		}

	}
}