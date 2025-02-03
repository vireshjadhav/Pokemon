//Charmander.hpp
#pragma once
#include "../Pokemon.hpp"

namespace N_Pokemon {
	namespace N_Pokemons {

		class Charmander :public Pokemon {
		public:
			Charmander();
			~Charmander();

		private:
			void attack(Move selectedMove, Pokemon* target)override;
		};

	}
}