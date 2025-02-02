//Caterpie.cpp
#include <iostream>
#include "../../../include/Pokemon/Pokemon.hpp"
#include "../../../include/Pokemon/PokemonType.hpp"
#include "../../../include/Pokemon/Pokemons/Caterpie.hpp"
using namespace N_Pokemon;

namespace N_Pokemon {
	namespace N_Pokemons {
		using namespace std;

		Caterpie::Caterpie() :Pokemon("Caterpie", PokemonType::NORMAL, 100, 100, 10) {}

		Caterpie::~Caterpie() {}

		void Caterpie::attack(Pokemon* target)
		{
			cout << name << "uses bug bite Attack on" << target->getName() << "!" << endl;
			target->takeDamage(10);
		}
	}
}