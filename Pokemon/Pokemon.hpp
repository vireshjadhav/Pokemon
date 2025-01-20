//Pokemon.hpp
#include <string>
using namespace std;

enum class PokemonType;

class Pokemon
{
public:
	string name;
	PokemonType type;
	int health;

	//Default contructor
	Pokemon();

	//Parameterized constructor
	Pokemon(string p_name, PokemonType p_Type, int p_health);

	//Copy contructor
	Pokemon(const Pokemon &other);

	//Destroctor
	~Pokemon();

	//Function for attack
	void attack();
};