#include <string>
using namespace std;

enum class PokemonType;
class ProfessorOak
{
public:
  string name;
ProfessorOak(string p_name);

void greetPlayer(Player& player);
void offerPokemonChoices(Player& player);
void explainMainQuest(Player& player);
};
