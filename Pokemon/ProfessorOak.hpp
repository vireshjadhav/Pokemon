#include <string>
#include "ProfessorOak.cpp"
using namespace std;

class ProfessorOak
{
public:
  string name;
ProfessorOak(string p_name);

void greetPlayer(Player& player);
void offerPokemonChoices(Player& player);
void explainMainQuest(Player& player);
};
