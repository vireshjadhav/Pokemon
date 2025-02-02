//Player.cpp
#include <iostream>
#include "../../../include/Character/Player/Player.hpp"
#include "../../../include/Pokemon/PokemonChoice.hpp"
#include "../../../include/Pokemon/PokemonType.hpp"
#include "../../../include/Utility/Utility.hpp"
#include "../../../include/Pokemon/Pokemons/Bulbasaur.hpp"
#include "../../../include/Pokemon/Pokemons/Charmander.hpp"
#include "../../../include/Pokemon/Pokemons/Squirtle.hpp"
#include "../../../include/Pokemon/Pokemons/Pikachu.hpp"
using namespace std;
using namespace N_Utility;
using namespace N_Pokemon;
using namespace N_Pokemons;
using namespace N_Player;

namespace N_Player {
    //Default constructor
    Player::Player()
    {
        name = "Trainer";
    }

    //Parameterized constructor
    Player::Player(string p_name)
    {
        name = p_name;
    }


    //Function to choose a pokemon
    void Player::choosePokemon(int choice)
    {
        //Store the choice integer to respective pokemon
        switch ((PokemonChoice)choice)
        {
        case PokemonChoice::CHARMANDER:
            chosenPokemon = new Charmander();
            break;
        case PokemonChoice::BULBASAUR:
            chosenPokemon = new Bulbasaur();
            break;
        case PokemonChoice::SQUIRTLE:
            chosenPokemon = new Squirtle();
            break;
        default:
            chosenPokemon = new Pikachu();
        }
        cout << "Player " << name << " chose " << chosenPokemon->getName() << "!" << endl;

        Utility::waitForEnter();
    }

    Player::~Player() {
        delete chosenPokemon;
    }
}
