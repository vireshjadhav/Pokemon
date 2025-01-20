#include <string>
using namespace std;

enum class PokemonType;
class Pokemon
{
public:
    //Atributes
    string name;
    PokemonType type;
    int health;

Pokemon(); //default constructor 
Pokemon(string p_name, Pokemon P_type, int p_heath); //parameterized constructor
Pokemon(const Pokemon &other); //copy constructor

~Pokemon(); // destructor

void attack(); //function to attack
};
