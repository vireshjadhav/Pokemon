//Pikachu.cpp
#include <iostream>
#include "../../../include/Pokemon/Pokemons/Pikachu.hpp"
#include "../../../include/Pokemon/Pokemon.hpp"
#include "../../../include/Pokemon/PokemonType.hpp"
using namespace N_Pokemon;

namespace N_Pokemon {
	namespace N_Pokemons {

		using namespace std;

		Pikachu::Pikachu() : Pokemon("Pikachu", PokemonType::ELECTRIC, 100, 100, 20) {}
		

		void Pikachu::attack(Pokemon* target)
		{
			cout << name << " uses Thunder Shock on " << target->getName() << "!" << endl;
			target->takeDamage(20);
		}
	}
}