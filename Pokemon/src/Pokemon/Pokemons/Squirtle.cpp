//Squirtle.cpp
#include <iostream>
#include "../../../include/Pokemon/Pokemons/Squirtle.hpp"
#include "../../../include/Pokemon/Pokemon.hpp"
#include "../../../include/Pokemon/PokemonType.hpp"
#include "../../../include/Utility/Utility.hpp"
using namespace N_Pokemon;
using namespace N_Utility;

namespace N_Pokemon {
	namespace N_Pokemons {
		using namespace std;

		Squirtle::Squirtle() : Pokemon("Squirtle", PokemonType::WATER, 100, 100, 35) {}

		Squirtle::~Squirtle() {}

		void Squirtle::attack(Pokemon* target)
		{
			std::cout << name << " withdrew into its shell and launched a WATER GUN!" << std::endl;
			N_Utility::Utility::waitForEnter();

			std::cout << "A jet of water shoots out with tremendous force..." << std::endl;
			N_Utility::Utility::waitForEnter();

			target->takeDamage(attackPower);

			if (target->isFainted())
				std::cout << target->getName() << " was drenched and fainted!" << std::endl;
			else
				std::cout << target->getName() << " is soaked, with " << target->getHealth() << " HP left." << std::endl;
			N_Utility::Utility::waitForEnter();
		}

	}
}