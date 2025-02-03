//Pikachu.cpp
#include <iostream>
#include "../../../include/Pokemon/Pokemons/Pikachu.hpp"
#include "../../../include/Pokemon/Pokemon.hpp"
#include "../../../include/Pokemon/PokemonType.hpp"
#include "../../../include/Utility/Utility.hpp"
using namespace N_Pokemon;
using namespace N_Utility;

namespace N_Pokemon {
	namespace N_Pokemons {

		using namespace std;

		Pikachu::Pikachu() : Pokemon("Pikachu", PokemonType::ELECTRIC, 100, 100, 20) {}
		
		Pikachu::~Pikachu() {}

		void Pikachu::attack(Pokemon* target)
		{
			std::cout << name << " charged up and unleashed a THUNDERBOLT!" << std::endl;
			N_Utility::Utility::waitForEnter();

			std::cout << "Electricity crackles intensely as the bolt strikes..." << std::endl;
			N_Utility::Utility::waitForEnter();

			target->takeDamage(attackPower);

			if (target->isFainted())
				std::cout << target->getName() << " was electrocuted and fainted!" << std::endl;
			else
				std::cout << target->getName() << " is paralyzed, with " << target->getHealth() << " HP remaining." << std::endl;
			N_Utility::Utility::waitForEnter();
		}
	}
}