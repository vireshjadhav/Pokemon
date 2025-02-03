//Bulbasaur.cpp
#include <iostream>
#include "../../../include/Pokemon/Pokemons/Bulbasaur.hpp"
#include "../../../include/Pokemon/Pokemon.hpp"
#include "../../../include/Pokemon/PokemonType.hpp"
#include "../../../include/Utility/Utility.hpp"
using namespace N_Pokemon;
using namespace N_Utility;

namespace N_Pokemon {
	namespace N_Pokemons {
		using namespace std;

		Bulbasaur::Bulbasaur() : Pokemon("Bulbasaur", PokemonType::WATER, 100, 100, 35) {}

		Bulbasaur::~Bulbasaur() {}

		void Bulbasaur::attack(Pokemon* target) {
			std::cout << name << " unleashed a powerful VINE WHIP!" << std::endl;
			N_Utility::Utility::waitForEnter();

			std::cout << "The vines lash out with incredible speed..." << std::endl;
			N_Utility::Utility::waitForEnter();

			target->takeDamage(attackPower);

			if (target->isFainted())
				std::cout << target->getName() << " couldn't withstand the attack and fainted!" << std::endl;
			else
				std::cout << target->getName() << " is reeling, with " << target->getHealth() << " HP remaining." << std::endl;
			N_Utility::Utility::waitForEnter();
		}

	}
}