#pragma once
#include <string>
#include <vector>
using namespace std;

namespace N_Pokemon{
    struct Move;
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
        vector <Move> moves;

        Pokemon(); //default constructor 
        Pokemon(string p_name, PokemonType P_type, int p_heath, int p_maxHealth, int p_attackPower, vector <Move> p_moves); //parameterized constructor
        Pokemon(const Pokemon* other); //copy constructor

        ~Pokemon(); // destructor

        virtual void attack(Move selectMove, Pokemon* target) = 0; //function to attack give damage to opponent

        void takeDamage(int damage);//function to deduct damagetaken from health points

        bool isFainted() const; //function to know whether pokemon is conscious or fainted

        void heal(); //function to restore health to maximum

        void selectAndUseMove(Pokemon* target);

        void reduceAttackPower(int reduced_Damage);

    protected:
        void printAvailableMoves();

        int selectMove();

        void useMove(Move selectedMove, Pokemon* target);
    };
}
