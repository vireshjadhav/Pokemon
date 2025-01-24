#include <string>
#include "Pokemon.hpp"
using namespace std;

enum class PokemonType;

class Player 
{
public:
    string name;
    Pokemon chosenPokemon;

Player(); //default constructor
Player(string p_name, Pokemon p_chosenPokemon); //parameterized constructor

void choosePokemon(int choice); // method to choose pokemon
};
