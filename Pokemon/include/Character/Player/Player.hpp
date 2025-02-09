#pragma once
#include <string>
#include "../../Pokemon/Pokemon.hpp"

namespace N_Character
{
    namespace N_Player 
    {
        using namespace std;
        using namespace N_Pokemon;

        class Player
        {
        public:
            string name;
            N_Pokemon::Pokemon* chosenPokemon;

            Player(); //default constructor
            Player(string p_name); //parameterized constructor

            void choosePokemon(int choice); // method to choose pokemon

            ~Player();
        };
    }
}