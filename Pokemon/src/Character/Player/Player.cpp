//Player.cpp
#include <iostream>
#include "../../../include/Character/Player/Player.hpp"
#include "../../../include/Pokemon/PokemonChoice.hpp"
#include "../../../include/Pokemon/PokemonType.hpp"
#include "../../../include/Utility/Utility.hpp"
using namespace std;
using namespace N_Utility;
using namespace N_Pokemon;
using namespace N_Player;

namespace N_Player {
    //Default constructor
    Player::Player()
    {
        name = "Trainer";
        chosenPokemon = Pokemon();//Using the default Pokemon constructor
    }

    //Parameterized constructor
    Player::Player(string p_name, Pokemon p_chosenPokemon)
    {
        name = p_name;
        chosenPokemon = p_chosenPokemon;
    }


    //Function to choose a pokemon
    void Player::choosePokemon(int choice)
    {
        //Store the choice integer to respective pokemon
        switch ((PokemonChoice)choice)
        {
        case PokemonChoice::CHARMANDER:
            chosenPokemon = Pokemon("Charmander", PokemonType::FIRE, 100, 100, 20);
            break;
        case PokemonChoice::BULBASAUR:
            chosenPokemon = Pokemon("Bulbasaur", PokemonType::GRASS, 100, 120, 16);
            break;
        case PokemonChoice::SQUIRTLE:
            chosenPokemon = Pokemon("Squirtle", PokemonType::WATER, 100, 80, 24);
            break;
        default:
            chosenPokemon = Pokemon("Pikachu", PokemonType::ELECTRIC, 100, 110, 22);
        }
        cout << "Player " << name << " chose " << chosenPokemon.getName() << "!" << endl;

        Utility::waitForEnter();
    }
}
