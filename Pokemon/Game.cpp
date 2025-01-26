//Game.cpp
#include "Game.hpp"
#include "Player.hpp"
#include "PokemonType.hpp"
#include "WildEncounterManager.hpp"
#include "Utility.hpp" 
#include "grass.hpp"
#include <iostream>
using namespace std;


Game::Game()
{
     forestGrass = { "Forest",
        {Pokemon("Zubat", PokemonType::POISON, 30, 30, 12),
        Pokemon("Caterpie", PokemonType::BUG, 35, 35, 10),
        Pokemon("Pidgey", PokemonType::NORMAL, 40, 50, 15)},
        80
    };
}



void Game::gameLoop(Player &player)
{
    int choice;
    bool keepPlaying = true;

    while (keepPlaying)
    {
        //Clearing console before showing options
        Utility::clearConsole();


        //Display options to the player
        cout << "What would you like to do next - " << player.name << "?" << endl;

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
            Pokemon encounteredPokemon = encounterManager.getRandomPokemonFromGrass(forestGrass);
            cout << "A Wild " << encounteredPokemon.name << " appeared!" << endl;
            break;
        }
        case 2:
        {
            cout << "You head to the PokeCenter." << endl;
            player.chosenPokemon.heal();
            cout << player.chosenPokemon.name << "'s health is fully restored!" << endl;
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

    cout << "Goodbye, " << player.name << "! Thanks for playing!" << endl;
}
