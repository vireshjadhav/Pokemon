#pragma once
#include "../../include/StatusEffects/IStatusEffect.hpp"
#include "../../include/Pokemon/Pokemon.hpp"
using namespace std;
using namespace N_StatusEffect;
using namespace N_Pokemon;

namespace N_Pokemon {
	namespace N_StatusEffect {
		class ParalyzedEffect :public IStatusEffect {
		private:
			int turnsLeft;

		public:
			void applyEffect(Pokemon* target) override;

			string getEffectName() override;

			bool turnEndEffect(Pokemon* target) override;

			void clearEffect(Pokemon* target) override;
		};
	}
}