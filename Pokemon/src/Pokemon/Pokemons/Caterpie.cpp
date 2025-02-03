//Caterpie.cpp
#include <iostream>
#include "../../../include/Pokemon/Pokemon.hpp"
#include "../../../include/Pokemon/PokemonType.hpp"
#include "../../../include/Pokemon/Pokemons/Caterpie.hpp"
#include "../../../include/Utility/Utility.hpp"
using namespace N_Pokemon;
using namespace N_Utility;

namespace N_Pokemon {
	namespace N_Pokemons {
		using namespace std;

		Caterpie::Caterpie() :Pokemon("Caterpie", PokemonType::NORMAL, 100, 100, 10) {}

		Caterpie::~Caterpie() {}

		void Caterpie::attack(Pokemon* target)
		{
			std::cout << name << " used STRING SHOT to entangle the opponent!" << std::endl;
			N_Utility::Utility::waitForEnter();

			std::cout << "Sticky threads envelop the target, slowing it down..." << std::endl;
			N_Utility::Utility::waitForEnter();

			target->takeDamage(attackPower);

			std::cout << target->getName() << "'s speed sharply decreased!" << std::endl;
			N_Utility::Utility::waitForEnter();
		}
	}
}