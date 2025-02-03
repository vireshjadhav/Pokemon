//Caterpie.cpp
#include <iostream>
#include "../../../include/Pokemon/Pokemon.hpp"
#include "../../../include/Pokemon/PokemonType.hpp"
#include "../../../include/Pokemon/Pokemons/Caterpie.hpp"
#include "../../../include/Pokemon/Move.hpp"
#include "../../../include/Utility/Utility.hpp"
using namespace N_Pokemon;
using namespace N_Utility;

namespace N_Pokemon {
	namespace N_Pokemons {
		using namespace std;

		Caterpie::Caterpie() :Pokemon("Caterpie", PokemonType::NORMAL, 100, 100, 10, { Move("STICKY WEB", 10), Move("TACKLE", 10) }) {}

		Caterpie::~Caterpie() {}

        void Caterpie::attack(Move selectedMove, Pokemon* target) 
        {
            
            Pokemon::attack(selectedMove, target);

            if (selectedMove.name == "STICKY WEB")
            {
                // Reduce the target's next attack damage (for simplicity, reducing by a fixed value)
                int reducedDamage = 5;
                
                target->reduceAttackPower(reducedDamage);
                
                std::cout << target->getName() << "'s next attack will be reduced by " << reducedDamage << " damage!\n";
            }
        }
	}
}