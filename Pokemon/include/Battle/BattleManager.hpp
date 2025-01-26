#pragma once



#include "Player.hpp"
#include "BattleState.hpp"

class BattleManager
{
public:
	void startBattle(Player &player, Pokemon &pokemon); //Function to start the battle

private:
	BattleState battleState;


	void battle(Pokemon &playerPokemon, Pokemon &wildPokemon, Player &player);//Function to implement battle 
	void handleBattleOutcome(Player &player, bool playerWon); //Functio to decide what to afte battle
	void updateBattleState();
};

