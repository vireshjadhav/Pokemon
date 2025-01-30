//Bulbasaur.cpp
#include <iostream>
#include "../../../include/Pokemon/Pokemons/Bulbasaur.hpp"
#include "../../../include/Pokemon/Pokemon.hpp"
#include "../../../include/Pokemon/PokemonType.hpp"
using namespace N_Pokemon;

namespace N_Pokemon {
	namespace N_Pokemons {
		using namespace std;

		Bulbasaur::Bulbasaur() : Pokemon("Bulbasaur", PokemonType::WATER, 100, 100, 35) {}

		void Bulbasaur::vineWipe(Pokemon& target) {
			cout << name << " uses vine whip on " << target.getName() << "!" << endl;
			target.takeDamage(20);
		}

	}
}