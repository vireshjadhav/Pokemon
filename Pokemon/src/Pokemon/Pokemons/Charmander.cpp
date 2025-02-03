//Charmander.cpp

#include <iostream>
#include "../../../include/Pokemon/Pokemons/Charmander.hpp"
#include "../../../include/Pokemon/Pokemon.hpp"
#include "../../../include/Pokemon/PokemonType.hpp"
#include "../../../include/Utility/Utility.hpp"
using namespace N_Utility;
using namespace N_Pokemon;

namespace N_Pokemon {
	namespace N_Pokemons {
		using namespace std;

		Charmander::Charmander() : Pokemon("Charmander", PokemonType::FIRE, 100, 100, 35) {}

		Charmander::~Charmander() {}

		void Charmander::attack(Pokemon* target)
		{
			cout << name << " used FLAME THROWER!" << endl;
			N_Utility::Utility::waitForEnter();

			cout << "..." << endl;
			N_Utility::Utility::waitForEnter();

			target->takeDamage(attackPower);

			if (target->isFainted())
				cout << target->getName() << " fainted!" << endl;
			else
				cout << target->getName() << " has " << target->getHealth() << " Hp left." << endl;
			N_Utility::Utility::waitForEnter();
		}
	}
}
