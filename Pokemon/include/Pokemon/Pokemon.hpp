#pragma once
#include <string>
using namespace std;

namespace N_Pokemon{
    enum class PokemonType;

    class Pokemon
    {
    protected:
        //Atributes
        string name;
        PokemonType type;
        int health;
        int maxHealth;
        int attackPower;

    public:
        void setHealth(int h) { health = h; }
        int getHealth() { return health; }
        void setMaxHealth(int mH) { maxHealth = mH; }
        int getMaxHealth() { return maxHealth; }
        void setAttackPower(int aP) { attackPower = aP; }
        int getAttackPower() { return attackPower; }
        void setName(string nM) { name = nM; }
        string getName() { return name; }
        void settype(PokemonType tY) { type = tY; }
        PokemonType gettype() { return type; }

        Pokemon(); //default constructor 
        Pokemon(string p_name, PokemonType P_type, int p_heath, int p_maxHealth, int p_attackPower); //parameterized constructor
        Pokemon(const Pokemon* other); //copy constructor

        ~Pokemon(); // destructor

        virtual void attack(Pokemon* target) = 0; //function to attack give damage to opponent

        void takeDamage(int damage);//function to deduct damagetaken from health points

        bool isFainted() const; //function to know whether pokemon is conscious or fainted

        void heal(); //function to restore health to maximum
    };
}
