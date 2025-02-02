//Pidgey.cpp

#include <iostream>
#include "../../../include/Pokemon/Pokemon.hpp"
#include "../../../include/Pokemon/PokemonType.hpp"
#include "../../../include/Pokemon/Pokemons/Pidgey.hpp"

using namespace N_Pokemon;

namespace N_Pokemon {
	namespace N_Pokemons {

		using namespace std;

		Pidgey::Pidgey() : Pokemon("Pidgey", PokemonType::NORMAL, 100, 100, 35) {};

		Pidgey::~Pidgey() {}

		void Pidgey::attack(Pokemon* target)
		{
			cout << name << "uses wing  Attack on" << target->getName() << "!" << endl;
			target->takeDamage(35);
		}

	}
}