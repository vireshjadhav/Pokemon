#include "include/Character/Player/Player.hpp"
#include "include/Pokemon/PokemonChoice.hpp"
#include "include/Pokemon/PokemonType.hpp"
#include "include/Main/Game.hpp"
#include "include/Utility/Utility.hpp"
#include "include/Character/ProfessorOak.hpp"
#include <iostream>
#include <limits>
#include <string>
using namespace std;

//Creating a class (Pokemon)
// class Pokemon
// {
// public:
//     //Atributes
//     string name;
//     PokemonType type;
//     int health;

//     //Default constructor
//     Pokemon()
//     {
//         name = "Unknown";
//         type = PokemonType::NORMAL;
//         health = 50;
//     }

//     //Parameterized constructor
//     Pokemon(string p_name, PokemonType p_type, int p_health)
//     {
//         name = p_name;
//         type = p_type;
//         health = p_health;
//     }

//     //Copy constructor
//     Pokemon(const Pokemon& other)
//     {
//         name = other.name;
//         type = other.type;
//         health = other.health;
//     }


//     //Destructor
//     ~Pokemon()
//     {
//     }

//     // Function to demonstrate attack
//     void attack() {
//         cout << name << "attacks with a powerful move!" << endl;
//     }
// };

////Creating a class (player)
//class Player
//{
//    //Attributes
//public:
//    string name;
//    Pokemon chosenPokemon;
//
//    //Default constructor
//    Player() {
//        name = "Trainer";
//        chosenPokemon = Pokemon();//Using the default Pokemon constructor
//    }
//
//
//    //Parameterized constructor
//    Player(string p_name, Pokemon p_chosenPokemon) {
//        name = p_name;
//        chosenPokemon = p_chosenPokemon;
//    }
//
//    //Copy constructor
//    Player(const Player& other)
//    {
//        name = other.name;
//        chosenPokemon = other.chosenPokemon;
//    }
//
//    //Function to choose a pokemon
//    void choosePokemon(int choice)
//    {
//        //Store the choice integer to respective pokemon
//        switch ((PokemonChoice)choice)
//        {
//        case PokemonChoice::CHARMANDER:
//            chosenPokemon = Pokemon("Charmander", PokemonType::FIRE, 100);
//            break;
//        case PokemonChoice::BULBASAUR:
//            chosenPokemon = Pokemon("Bulbasaur", PokemonType::GRASS, 100);
//            break;
//        case PokemonChoice::SQUIRTLE:
//            chosenPokemon = Pokemon("Squirtle", PokemonType::WATER, 100);
//            break;
//        default:
//            chosenPokemon = Pokemon("Pikachu", PokemonType::ELECTRIC, 100);
//        }
//        cout << "Player " << name << " chose " << chosenPokemon.name << "!" << endl;
//
//        Utility::waitForEnter();
//    }
//};

// //Creating a class for Professor Oak
// class ProfessorOak
// {
// public:
//     //Atributes
//     string name;

//     //Parameterized constructor
//     ProfessorOak(string p_name)
//     {
//         name = p_name;
//     }

//     //Function to greeting the player
//     void greetPlayer(Player& player)
//     {
//         cout << name << ": Hello there! Welcome to the world of Pokemon!" << endl;
//         Utility::waitForEnter();
//         cout << name << ": My name is Oak. People call me the Pokemon Professor!" << endl;
//         Utility::waitForEnter();
//         cout << name << ": But enough about me. Let's talk about you!" << endl;
//         Utility::waitForEnter();
//     }


//     //Function to ask the player to choose a pokemon
//     void offerPokemonChoices(Player& player)
//     {
//         //Taking player name as input
//         cout << name << ": First, tell me, what's your name?" << endl;
//         getline(cin, player.name);
//         cout << name << ": Ah, " << player.name << "! What a fantastic name!" << endl;
//         Utility::waitForEnter();
//         cout << name << ": You must be eager to start your adventure. But first, you'll need a Pokemon of your own!" << endl;
//         Utility::waitForEnter();

//         //Presenting pokemon choices
//         cout << name << ": I have three Pokemon here with me. They're all quite feisty!" << endl;
//         Utility::waitForEnter();
//         cout << name << ": Choose wisely..." << endl;
//         cout << "1. Charmander - The fire type. A real hothead!" << endl;
//         cout << "2. Bulbasaur - The grass type. Calm and collected!" << endl;
//         cout << "3. Squirtle - The water type. Cool as a cucumber!" << endl;

//         int choice;
//         cout << name << ": So, which one will it be? Enter the number of your choice: ";
//         cin >> choice;

//         player.choosePokemon(choice);
//         Utility::waitForEnter();
//     }

//     // New method for the main quest conversation
//     void explainMainQuest(Player& player)
//     {
//         Utility::clearConsole();
//         cout << name << ": Oak-ay " << player.name << "!, I am about to explain you about your upcoming grand adventure." << endl;
//         Utility::waitForEnter();
//         cout << name << ":  You see, becoming a Pokémon Master is no easy feat. It takes courage, wisdom, and a bit of luck!" << endl;
//         Utility::waitForEnter();
//         cout << name << ":  Your mission, should you choose to accept it—and trust me, you really don’t have a choice—is to collect all the Pokémon Badges and conquer the Pokémon League." << endl;
//         Utility::waitForEnter();
//         cout << player.name << ": Wait... that sounds a lot like every other Pokémon game out there..." << endl;
//         Utility::waitForEnter();
//         cout << name << ":  Shhh! Don't break the fourth wall, " << player.name << "! This is serious business!" << endl;
//         Utility::waitForEnter();
//         cout << "\n" << name << ":  To achieve this, you’ll need to battle wild Pokémon, challenge gym leaders, and of course, keep your Pokémon healthy at the PokeCenter." << endl;
//         Utility::waitForEnter();
//         cout << name << ":  Along the way, you'll capture new Pokémon to strengthen your team. Just remember—there’s a limit to how many Pokémon you can carry, so choose wisely!" << endl;
//         Utility::waitForEnter();
//         cout << player.name << ": Sounds like a walk in the park... right?" << endl;
//         Utility::waitForEnter();
//         cout << name << ":  Hah! That’s what they all say! But beware, young Trainer, the path to victory is fraught with challenges. And if you lose a battle... well, let’s just say you'll be starting from square one." << endl;
//         Utility::waitForEnter();
//         cout << "\n" << name << ":  So, what do you say? Are you ready to become the next Pokémon Champion?" << endl;
//         Utility::waitForEnter();
//         cout << "\n" << player.name << ": Ready as I’ll ever be, Professor!" << endl;
//         Utility::waitForEnter();
//         cout << "\n" << name << ":  That’s the spirit! Now, your journey begins..." << endl;
//         Utility::waitForEnter();
//         cout << name << ":  But first... let's just pretend I didn't forget to set up the actual game loop... Ahem, onwards!" << endl;
//         Utility::waitForEnter();
//     }
// };


//Function to handle the main game loop
//void gameLoop(Player &player)
//{
//    int choice;
//    bool keepPlaying = true;
//
//    while (keepPlaying)
//    {
//        //Clearing console before showing options
//        Utility::clearConsole();
//
//
//        //Display options to the player
//        cout << "What would you like to do next - " << player.name << "?" << endl;
//
//        cout << "1. Battle Wild Pokémon" << endl;
//
//        cout << "2. Visit PokeCenter" << endl;
//
//        cout << "3. Challenge Gyms" << endl;
//
//        cout << "4. Enter Pokémon League" << endl;
//
//        cout << "5. Quit" << endl;
//
//        cout << "Enter your choice: ";
//
//        cin >> choice;
//
//        //Clear the newline character left in the buffer after cin
//        Utility::clearInputBuffer();
//
//        switch (choice)
//        {
//        case 1:
//            cout << "You look around... but all the wild Pokemon are on vacation. Maybe try again later?" << endl;
//            break;
//        case 2:
//            cout << "You head to the PokeCenter, but Nurse Joy is out on a coffee break. Guess your Pokemon will have to tough it out for now!" << endl;
//            break;
//        case 3:
//            cout << "You march up to the Gym, but it's closed for renovations. Seems like even Gym Leaders need a break!" << endl;
//            break;
//        case 4:
//            cout << "You boldly step towards the Pokemon League... but the gatekeeper laughs and says, 'Maybe next time, champ!" << endl;
//            break;
//        case 5:
//            cout << "You try to quit, but Professor Oak's voice echoes: 'There's no quitting in Pokemon training!" << endl;
//            cout << "Are you sure you want to quit? (Y / n)";
//
//            char quitChoice;
//            cin >> quitChoice;
//            if (quitChoice == 'y' || quitChoice == 'Y')
//            {
//                keepPlaying = false;
//            }
//            break;
//        default:
//            cout << "That's not valid choice. Try again";
//            break;
//        }
//
//        Utility::waitForEnter();
//
//    }
//
//    cout << "Goodbye, " << player.name << "! Thanks for playing!" << endl;
//}

int main() {
    //Create pokemon and player objects for the game
    Pokemon charmander("Charmander", PokemonType::FIRE, 100, 100, 20);

    //countinue with the main flow of the game
    ProfessorOak professor("Professor Oak");
    Player player("Ash", charmander);

    //Greet the Player and offer Pokemon choices
    professor.greetPlayer(player);
    professor.offerPokemonChoices(player);

    //Explain the main quest
    professor.explainMainQuest(player);

    Game game;

    //placeholder for where the game loop will start
    game.gameLoop(player);

    return 0;
}
