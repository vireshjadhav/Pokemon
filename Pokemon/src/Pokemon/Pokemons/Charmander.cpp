//Charmander.cpp

#include <iostream>
#include "../../../include/Pokemon/Pokemons/Charmander.hpp"
#include "../../../include/Pokemon/Pokemon.hpp"
#include "../../../include/Pokemon/PokemonType.hpp"
using namespace N_Pokemon;

namespace N_Pokemon {
	namespace N_Pokemons {
		using namespace std;

		Charmander::Charmander() : Pokemon("Charmander", PokemonType::FIRE, 100, 100, 35) {}

		Charmander::~Charmander() {}

		void Charmander::attack(Pokemon* target)
		{
			cout << name << " uses Flame Thrower on " << target->getName() << "!" << endl;
			target->takeDamage(20);
		}
	}
}
