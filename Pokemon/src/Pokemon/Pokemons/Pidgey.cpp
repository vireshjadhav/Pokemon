//Pidgey.cpp

#include <iostream>
#include "../../../include/Pokemon/Pokemon.hpp"
#include "../../../include/Pokemon/PokemonType.hpp"
#include "../../../include/Pokemon/Pokemons/Pidgey.hpp"
#include "../../../include/Utility/Utility.hpp"
using namespace N_Utility;
using namespace N_Pokemon;

namespace N_Pokemon {
	namespace N_Pokemons {

		using namespace std;

		Pidgey::Pidgey() : Pokemon("Pidgey", PokemonType::NORMAL, 100, 100, 35) {};

		Pidgey::~Pidgey() {}

		void Pidgey::attack(Pokemon* target)
		{
			std::cout << name << " soared into the sky and executed a GUST attack!" << std::endl;
			N_Utility::Utility::waitForEnter();

			std::cout << "A fierce windstorm engulfs the battlefield..." << std::endl;
			N_Utility::Utility::waitForEnter();

			target->takeDamage(attackPower);

			if (target->isFainted())
				std::cout << target->getName() << " was blown away and fainted!" << std::endl;
			else
				std::cout << target->getName() << " struggles against the wind, with " << target->getHealth() << " HP left." << std::endl;
			N_Utility::Utility::waitForEnter();
		}

	}
}