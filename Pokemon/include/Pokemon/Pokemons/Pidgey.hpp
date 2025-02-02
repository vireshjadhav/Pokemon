//Pidgey.hpp
#pragma once
#include "../Pokemon.hpp"

namespace N_Pokemon {
	namespace N_Pokemons {

		class Pidgey :public Pokemon
		{
		public:
			Pidgey();
			~Pidgey();

		private:
			void wingAttack(Pokemon* target);
		};

	}
}