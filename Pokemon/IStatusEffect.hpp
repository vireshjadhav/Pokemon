#pragma once
#include <sting>
#include "../Pokemon/include/Pokemon/Pokemon.hpp"
using namespace std;
using namespace N_Pokemon;

class IStatusEffect 
{
public:
	virtual void applyEffect(Pokemon* target) = 0;//Apply the effects like poison, burn

	virtual string getEffectName() = 0;//Get the name of the effect

	virtual bool clearEffect(Pokemon* target) = 0;//Return tru if the pokemon can move else false
	
	virtual void clearEffect(Pokemon* target) = 0;//Remove effect

	virtual ~IStatusEffect() = default;
};
