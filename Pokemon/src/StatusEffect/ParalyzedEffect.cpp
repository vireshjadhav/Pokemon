#include <iostream>
#include "../../include/StatusEffects/ParalyzedEffect.hpp"
#include "../../include/Pokemon/Pokemon.hpp"
#include "../../include/StatusEffects/IStatusEffect.hpp"
using namespace N_Pokemon;
using namespace N_StatusEffect;


namespace N_Pokemon 
{
	namespace N_StatusEffect 
	{
		using namespace std;

		void ParalyzedEffect::applyEffect(Pokemon* target)
		{
			cout << target->getName() << " is Paralyzed! It may not be able to move!" << endl;

			turnsLeft = rand() % 3 + 1;
		}

		string ParalyzedEffect::getEffectName()
		{
			return "Paralyzed";
		}

		bool ParalyzedEffect::turnEndEffect(Pokemon* target)
		{
			if (turnsLeft <= 0)
			{
				clearEffect(target);
				return true;
			}
			turnsLeft--;
			int paralysis_chance = rand() % 4;

			if (paralysis_chance == 0)
			{
				cout << target->getName() << " is Paralyzed! It can't move!" << endl;
				return false;
			}

			cout << target->getName() << " shakes off the paralysis momentarily and can move!" << endl;
			return true;
		}

		void ParalyzedEffect::clearEffect(Pokemon* target)
		{
			cout << target->getName() << " is no longer paralyzed!" << endl;
			target->clearEffect();
		}
	}
}