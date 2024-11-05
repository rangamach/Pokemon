#include <iostream>
#include<string>
#include "PokemonType.hpp"
#include "PokemonChoice.hpp"
#include "Utility.hpp"
#include "Player.hpp"
#include "Game.hpp"
#include "ProfessorOak.hpp"

using namespace std;

using namespace N_Utility;

int main()
{
    Game* loop = new Game();
    ProfessorOak* professor = new ProfessorOak("Professor Oak");
    Player* player = new Player();

    professor->GreetPlayer(*player);
    professor->PlayerIntro(*player);
    professor->FirstPokemon(*player);
    professor->ExplainMainQuest(*player);

    loop->GameLoop(*player);

    delete(professor);
    delete(player);
    delete(loop);
}