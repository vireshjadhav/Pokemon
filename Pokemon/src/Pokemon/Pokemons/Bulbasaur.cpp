//Bulbasaur.cpp
#include <iostream>
#include "../../../include/Pokemon/Pokemons/Bulbasaur.hpp"
#include "../../../include/Pokemon/Pokemon.hpp"
#include "../../../include/Pokemon/PokemonType.hpp"
#include "../../../include/Pokemon/Move.hpp"
#include "../../../include/Utility/Utility.hpp"
using namespace N_Pokemon;
using namespace N_Utility;

namespace N_Pokemon {
	namespace N_Pokemons {
		using namespace std;

		Bulbasaur::Bulbasaur() : Pokemon("Bulbasaur", PokemonType::WATER, 100, 100, 35, { Move("VINE WHIP", 25), Move("TACKLE", 10)} ) {}

		Bulbasaur::~Bulbasaur() {}

		void Bulbasaur::attack(Move selectedMove, Pokemon* target) 
		{
			Pokemon::attack(selectedMove, target);

			if (selectedMove.name == "VINE WHIP")
			{
				int secondHitChance = rand() % 2;
				
				if (secondHitChance == 1)
				{
					Pokemon::attack(selectedMove, target);
					cout << name << " hits again wiht a second " << selectedMove.name << "!" << endl;
				}
				else
					cout << target->name << " dedged the second his!" << endl;
			}
		}
	}
}