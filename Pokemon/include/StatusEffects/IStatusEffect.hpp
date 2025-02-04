#pragma once
#include <string>

namespace N_Pokemon 
{
	class Pokemon;

	namespace N_StatusEffect 
	{

		class IStatusEffect
		{
		public:
			virtual void applyEffect(Pokemon* target) = 0;//Apply the effects like poison, burn

			virtual std::string getEffectName() = 0;//Get the name of the effect

			virtual void clearEffect(Pokemon* target) = 0;//Return tru if the pokemon can move else false

			virtual bool turnEndEffect(Pokemon* target) = 0;//Remove effect

			virtual ~IStatusEffect() = default;
		};
	}
}
