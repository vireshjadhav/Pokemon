#incldue <string>
using namespace std;

class Pokemon
{
public:
    //Atributes
    string name;
    PokemonType type;
    int health;
Pokemon();
Pokemon(string p_name, Pokeon P_type, int p_heath);
Pokemon(const Pokemon& other);

~pokemon()

void attack();
};
