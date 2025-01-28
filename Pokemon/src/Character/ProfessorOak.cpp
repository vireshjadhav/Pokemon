#include "../../include/Character/ProfessorOak.hpp"
#include "../../include/Character/Player/Player.hpp"
#include "../../include/Pokemon/PokemonChoice.hpp"
#include "../../include/Utility/Utility.hpp"
#include <iostream>
using namespace std;

ProfessorOak::ProfessorOak(string p_name)
{
    name = p_name;
}

//Function to greeting the player
void ProfessorOak::greetPlayer(Player& player)
{
    cout << name << ": Hello there! Welcome to the world of Pokemon!" << endl;
    Utility::waitForEnter();
    cout << name << ": My name is Oak. People call me the Pokemon Professor!" << endl;
    Utility::waitForEnter();
    cout << name << ": But enough about me. Let's talk about you!" << endl;
    Utility::waitForEnter();
}


//Function to ask the player to choose a pokemon
void ProfessorOak::offerPokemonChoices(Player& player)
{
    //Taking player name as input
    cout << name << ": First, tell me, what's your name?" << endl;
    getline(cin, player.name);
    cout << name << ": Ah, " << player.name << "! What a fantastic name!" << endl;
    Utility::waitForEnter();
    cout << name << ": You must be eager to start your adventure. But first, you'll need a Pokemon of your own!" << endl;
    Utility::waitForEnter();

    //Presenting pokemon choices
    cout << name << ": I have three Pokemon here with me. They're all quite feisty!" << endl;
    Utility::waitForEnter();
    cout << name << ": Choose wisely..." << endl;
    cout << "1. Charmander - The fire type. A real hothead!" << endl;
    cout << "2. Bulbasaur - The grass type. Calm and collected!" << endl;
    cout << "3. Squirtle - The water type. Cool as a cucumber!" << endl;

    int choice;
    cout << name << ": So, which one will it be? Enter the number of your choice: ";
    cin >> choice;

    player.choosePokemon(choice);
    Utility::waitForEnter();
}

// New method for the main quest conversation
void ProfessorOak::explainMainQuest(Player& player)
{
    Utility::clearConsole();
    cout << name << ": Oak-ay " << player.name << "!, I am about to explain you about your upcoming grand adventure." << endl;
    Utility::waitForEnter();
    cout << name << ":  You see, becoming a Pokémon Master is no easy feat. It takes courage, wisdom, and a bit of luck!" << endl;
    Utility::waitForEnter();
    cout << name << ":  Your mission, should you choose to accept it—and trust me, you really don’t have a choice—is to collect all the Pokémon Badges and conquer the Pokémon League." << endl;
    Utility::waitForEnter();
    cout << player.name << ": Wait... that sounds a lot like every other Pokémon game out there..." << endl;
    Utility::waitForEnter();
    cout << name << ":  Shhh! Don't break the fourth wall, " << player.name << "! This is serious business!" << endl;
    Utility::waitForEnter();
    cout << "\n" << name << ":  To achieve this, you’ll need to battle wild Pokémon, challenge gym leaders, and of course, keep your Pokémon healthy at the PokeCenter." << endl;
    Utility::waitForEnter();
    cout << name << ":  Along the way, you'll capture new Pokémon to strengthen your team. Just remember—there’s a limit to how many Pokémon you can carry, so choose wisely!" << endl;
    Utility::waitForEnter();
    cout << player.name << ": Sounds like a walk in the park... right?" << endl;
    Utility::waitForEnter();
    cout << name << ":  Hah! That’s what they all say! But beware, young Trainer, the path to victory is fraught with challenges. And if you lose a battle... well, let’s just say you'll be starting from square one." << endl;
    Utility::waitForEnter();
    cout << "\n" << name << ":  So, what do you say? Are you ready to become the next Pokémon Champion?" << endl;
    Utility::waitForEnter();
    cout << "\n" << player.name << ": Ready as I’ll ever be, Professor!" << endl;
    Utility::waitForEnter();
    cout << "\n" << name << ":  That’s the spirit! Now, your journey begins..." << endl;
    Utility::waitForEnter();
    cout << name << ":  But first... let's just pretend I didn't forget to set up the actual game loop... Ahem, onwards!" << endl;
    Utility::waitForEnter();
}
