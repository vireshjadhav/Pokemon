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
using namespace N_Utility;
using namespace N_Pokemon;
using namespace N_Main;
using namespace N_Character;
using namespace N_Player;

int main() {
    //countinue with the main flow of the game
    ProfessorOak* professor = new ProfessorOak("Professor Oak");
    Player* player = new Player();

    //Greet the Player and offer Pokemon choices
    professor->greetPlayer(player);
    professor->offerPokemonChoices(player);

    //Explain the main quest
    professor->explainMainQuest(player);

    Game * game = new Game();

    //placeholder for where the game loop will start
    game->gameLoop(player);


    delete professor;
    delete player;
    delete game;

    return 0;
}
