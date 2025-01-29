#pragma once
#include <string>
using namespace std;

namespace N_Pokemon{
    enum class PokemonType;

    class Pokemon
    {
    public:
        //Atributes
        string name;
        PokemonType type;
        int health;
        int maxHealth;
        int attackPower;

        Pokemon(); //default constructor 
        Pokemon(string p_name, PokemonType P_type, int p_heath, int p_maxHealth, int p_attackPower); //parameterized constructor
        Pokemon(const Pokemon& other); //copy constructor

        ~Pokemon(); // destructor

        void attack(Pokemon& target); //function to attack give damage to opponent

        void takeDamage(int damage);//function to deduct damagetaken from health points

        bool isFainted() const; //function to know whether pokemon is conscious or fainted

        void heal(); //function to restore health to maximum
    };
}
