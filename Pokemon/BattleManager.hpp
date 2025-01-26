#pragma once


#include "Pokemon.hpp"
#include "Player.hpp"

class BattleManager
{
public:
	void startBattle(Player &player, Pokemon &pokemon); //Function to start the battle

private:
	void battle(Pokemon &playerPokemon, Pokemon &wildPokemon, Player &player);//Function to implement battle 
	void handleBattleOutcome(Player &player, bool playerWon); //Functio to decide what to afte battle
};

