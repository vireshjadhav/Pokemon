//Bulbasaur.hpp
#pragma once
#include "../Pokemon.hpp"

namespace N_Pokemon {
	namespace N_Pokemons {
		class Bulbasaur : public Pokemon {
		public:
			Bulbasaur();
			~Bulbasaur();
		private:
			void attack(Pokemon* target)override;
		};
	}
}