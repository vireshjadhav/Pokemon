//Pikachu.cpp
#include <iostream>
#include "../../../include/Pokemon/Pokemons/Pikachu.hpp"
#include "../../../include/Pokemon/Pokemon.hpp"
#include "../../../include/Pokemon/PokemonType.hpp"
#include "../../../include/Pokemon/Move.hpp"
#include "../../../include/Utility/Utility.hpp"
using namespace N_Pokemon;
using namespace N_Utility;

namespace N_Pokemon {
	namespace N_Pokemons {

		using namespace std;

		Pikachu::Pikachu() : Pokemon("Pikachu", PokemonType::ELECTRIC, 100, 100, 20, { Move("THUNDER BOLT", 80), Move("TACKLE", 10) }) {}
		
		Pikachu::~Pikachu() {}

        void Pikachu::attack(Move selectedMove, Pokemon* target) 
        {
            if (selectedMove.name == "THUNDER BOLT")
            {
                // 80% chance to hit
                if (rand() % 100 < 80)
                {
                    Pokemon::attack(selectedMove, target);
                    
                    std::cout << "... and it hit successfully!\n";
                }
                else
                    std::cout << "... but it missed!\n";
            }
            else
                Pokemon::attack(selectedMove, target);

            if (selectedMove.name == "THUNDER SHOCK")
            {
                if (target->canApplyEffect())
                    target->applyEffect(StatusEffectType::PARALYZED);
            }

        }
	}
}