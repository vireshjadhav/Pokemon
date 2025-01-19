include <string>
include "PokemonChoice.hpp"
include "PokemonTypes.hpp"
incldue "Utility.hpp"
using namespace std;

class Player 
{
public:
    string name;
    Pokemon chosenPokemon;

Player();
Player(string p_name, Pokemon p_chosenPokemon);
player(const player& other)

void choosePokemon(int choice);
};
