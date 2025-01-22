//grass.hpp
#include <vector>
#include <string>
using namespace std;

struct Grass
{
	string environmentType;  //Example: "Forest", "Cave", "Riverbank"
	vector<Pokemon> wildPokemonList; //List of wild Pokemon that live in this grass
	int encounterRate; //Likehood of encountering a wild pokemon out of 100
};