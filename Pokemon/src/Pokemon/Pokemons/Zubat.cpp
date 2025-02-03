//Zubat.cpp
#include <iostream>
#include "../../../include/Pokemon/Pokemons/Zubat.hpp"
#include "../../../include/Pokemon/Pokemon.hpp"
#include "../../../Include/Pokemon/PokemonType.hpp"
#include "../../../include/Utility/Utility.hpp"
#include "../../../include/Pokemon/Move.hpp"
using namespace N_Pokemon;
using namespace N_Utility;

namespace N_Pokemon {
	namespace N_Pokemons {
		using namespace std;

		Zubat::Zubat() : Pokemon("Zubat", PokemonType::NORMAL, 100, 100, 20, { Move("LEECH LIFE", 10), Move("TACKLE", 10) }) {};

		Zubat::~Zubat() {}

        void Zubat::attack(Move selectedMove, Pokemon* target) {
            // Call the base class method from child class.
            Pokemon::attack(selectedMove, target);

            if (selectedMove.name == "LEECH LIFE")
            {
                // Restore 50% of the damage dealt
                this->health += selectedMove.power * 0.5;

                // Ensure health does not exceed maxHealth
                if (this->health > this->maxHealth)
                    this->health = this->maxHealth;

                std::cout << "... and regained health!\n";
            }
        }

	}
}