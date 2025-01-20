//Player.hpp
#include <string>
using namespace std;

class Pokemon;

class Player
{
public:
	//Define variables 
	string name;
	Pokemon chosenPokemon;

	//Default constructor
	Player();
	Player(string p_name, Pokemon p_chosenPokemon); //Parameterized constructor

	void choosePokemon(int choice); //Function to choose Pokemon
};