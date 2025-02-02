//Game.cpp
#include "../../include/Main/Game.hpp"
#include "../../include/Character/Player/Player.hpp"
#include "../../include/Pokemon/PokemonType.hpp"
#include "../../include/Battle/WildEncounterManager.hpp"
#include "../../include/Battle/BattleManager.hpp"
#include "../../include/Utility/Utility.hpp" 
#include "../../include/Pokemon/grass.hpp"
#include "../../include/Pokemon/Pokemons/Zubat.hpp"
#include "../../include/Pokemon/Pokemons/Caterpie.hpp"
#include "../../include/Pokemon/Pokemons/Pidgey.hpp"

#include <iostream>
using namespace std;
using namespace N_Utility;
using namespace N_Pokemon;
using namespace N_Pokemons;
using namespace N_Battle;
using namespace N_Player;



namespace N_Main {
    Game::Game()
    {
        forestGrass = new Grass{ "Forest" };
        
                forestGrass->wildPokemonList.push_back(new Zubat()),
                forestGrass->wildPokemonList.push_back(new Caterpie()),
                forestGrass->wildPokemonList.push_back(new Pidgey());

        
        80;
    }

    Game::~Game() 
    {
        delete wildPokemon;
    }

    void Game::gameLoop(Player* player)
    {
        BattleManager battleManager;
        int choice;
        bool keepPlaying = true;

        while (keepPlaying)
        {
            //Clearing console before showing options
            Utility::clearConsole();


            //Display options to the player
            cout << "What would you like to do next - " << player->name << "?" << endl;

            cout << "1. Battle Wild Pokémon" << endl;

            cout << "2. Visit PokeCenter" << endl;

            cout << "3. Challenge Gyms" << endl;

            cout << "4. Enter Pokémon League" << endl;

            cout << "5. Quit" << endl;

            cout << "Enter your choice: ";

            cin >> choice;

            //Clear the newline character left in the buffer after cin
            Utility::clearInputBuffer();

            switch (choice)
            {
            case 1:
            {
                WildEncounterManager encounterManager;
                Pokemon* encounteredPokemon = encounterManager.getRandomPokemonFromGrass(forestGrass);
                cout << "A Wild " << encounteredPokemon->getName() << " appeared!" << endl;
                break;
            }
            case 2:
            {
                cout << "You head to the PokeCenter." << endl;
                player->chosenPokemon->heal();
                cout << player->chosenPokemon->getName()<< "'s health is fully restored!" << endl;
                break;
            }
            case 3:
                cout << "You march up to the Gym, but it's closed for renovations. Seems like even Gym Leaders need a break!" << endl;
                break;
            case 4:
                cout << "You boldly step towards the Pokemon League... but the gatekeeper laughs and says, 'Maybe next time, champ!" << endl;
                break;
            case 5:
                cout << "You try to quit, but Professor Oak's voice echoes: 'There's no quitting in Pokemon training!" << endl;
                cout << "Are you sure you want to quit? (Y / n)";

                char quitChoice;
                cin >> quitChoice;
                if (quitChoice == 'y' || quitChoice == 'Y')
                {
                    keepPlaying = false;
                }
                break;
            default:
                cout << "That's not valid choice. Try again";
                break;
            }

            Utility::waitForEnter();

        }

        cout << "Goodbye, " << player->name << "! Thanks for playing!" << endl;
    }
}
