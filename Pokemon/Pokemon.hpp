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
    int maxHealth;

Pokemon(); //default constructor 
Pokemon(string p_name, PokemonType P_type, int p_heath); //parameterized constructor
Pokemon(const Pokemon &other); //copy constructor

~Pokemon(); // destructor

void attack(Pokemon &target); //function to attack give damage to opponent

void takeDamage(int damage);//function to deduct damagetaken from health points

bool isFainted() const; //function to know whether pokemon is conscious or fainted
};
