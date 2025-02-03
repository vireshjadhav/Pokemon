//Charmander.cpp

#include <iostream>
#include "../../../include/Pokemon/Pokemons/Charmander.hpp"
#include "../../../include/Pokemon/Pokemon.hpp"
#include "../../../include/Pokemon/PokemonType.hpp"
#include "../../../include/Pokemon/Move.hpp"
#include "../../../include/Utility/Utility.hpp"
using namespace N_Utility;
using namespace N_Pokemon;

namespace N_Pokemon {
	namespace N_Pokemons {
		using namespace std;

		Charmander::Charmander() : Pokemon("Charmander", PokemonType::FIRE, 100, 100, 35, { Move("BLAZING CHARGE", 70), Move("TACKLE", 10) }) {}

		Charmander::~Charmander() {}

        void Charmander::attack(Move selectedMove, Pokemon* target) 
{
            Pokemon::attack(selectedMove, target);

            if (selectedMove.name == "BLAZING CHARGE")
            {
                // Recoil effect: Charmander takes recoil damage
                this->takeDamage(10); // Fixed recoil damage
                
                std::cout << name << " takes 10 recoil damage from the Blazing Charge!\n";
                
                N_Utility::Utility::waitForEnter();
            }
        }
	}
}
