//Zubat.cpp
#include <iostream>
#include "../../../include/Pokemon/Pokemons/Zubat.hpp"
#include "../../../include/Pokemon/Pokemon.hpp"
#include "../../../Include/Pokemon/PokemonType.hpp"
#include "../../../include/Utility/Utility.hpp"
using namespace N_Pokemon;
using namespace N_Utility;

namespace N_Pokemon {
	namespace N_Pokemons {
		using namespace std;

		Zubat::Zubat() : Pokemon("Zubat", PokemonType::NORMAL, 100, 100, 20) {};

		Zubat::~Zubat() {}

		void Zubat::attack(Pokemon* target)
		{
			std::cout << name << " swooped down and used BITE!" << std::endl;
			N_Utility::Utility::waitForEnter();

			std::cout << "Fangs sink deep into the target, delivering a vicious bite..." << std::endl;
			N_Utility::Utility::waitForEnter();

			target->takeDamage(attackPower);

			if (target->isFainted())
				std::cout << target->getName() << " succumbed to the bite and fainted!" << std::endl;
			else
				std::cout << target->getName() << " winces in pain, with " << target->getHealth() << " HP remaining." << std::endl;
			N_Utility::Utility::waitForEnter();
		}

	}
}