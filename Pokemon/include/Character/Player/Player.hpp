#pragma once
#include <string>
#include "../../Pokemon/Pokemon.hpp"
using namespace std;
using namespace N_Pokemon;

namespace N_Player {

    class Player
    {
    public:
        string name;
        Pokemon* chosenPokemon;

        Player(); //default constructor
        Player(string p_name, Pokemon* p_chosenPokemon); //parameterized constructor

        void choosePokemon(int choice); // method to choose pokemon

        ~Player();
    };
}
