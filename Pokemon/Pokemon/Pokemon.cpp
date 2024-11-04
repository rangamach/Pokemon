#include <iostream>
#include<string>
#include "PokemonType.hpp"
#include "PokemonChoice.hpp"
#include "Utility.hpp"
#include "Player.hpp"
#include "Game.hpp"

using namespace std;

using namespace N_Utility;


class ProfessorOak
{
    public:
        string name;
        void GreetPlayer(Player& player)
        {
            cout << name << ": Welcome to the world of Pokemon! I am Professor Oak.\n";
            Utility::WaitForEnter();
            cout << name << ": People call me the Pokemon Professor!\n";
            Utility::WaitForEnter();
            cout << name << ": But enough about me. Let's talk about you!\n";
            Utility::WaitForEnter();
        }

        ProfessorOak(string prof_name)
        {
            name = prof_name;
        }

        void PlayerIntro(Player& player)
        {
            cout << name << ": First, tell me what is your name?\n";
            getline(cin, player.name);
            cout << name << ": Ah, " << player.name << "! What a fantastic name!\n";
            Utility::WaitForEnter();
            cout << name << ": You must be eager to start your adventure. But first, you will need a Pokemon of your own!\n";
            Utility::WaitForEnter();
        }
        void FirstPokemon(Player& player)
        {
            int choice;
            cout << name << ": I have three Pokemon here with me. They are all quite feisty!\n";
            Utility::WaitForEnter();
            cout << name << ": Choose wisely...\n"; 
            cout << name << ": 1. Charmander - The fire type. A real hothead!\n";
            cout << name << ": 2. Bulbasaur - The grass type. Calm and collected!\n";
            cout << name << ": 3. Squirtle - The water type. Cool as a cucumber!\n";

            cout << name << ": So, which one will it be? Enter the number of your choice:";
            cin >> choice;
            player.ChosenPokemon(choice);

            cout << "Professor Oak: " << player.captured_pokemon.name << " and you, " << player.name << ", are going to be the best of friends!\n";
            Utility::WaitForEnter();
        }

        void ExplainMainQuest(Player player)
        {
            Utility::ClearConsole();
            cout << name << ": Ok, " << player.name << ", I am about to explain you about your upcoming grand adventure.\n";
            Utility::WaitForEnter();
            cout << name << ": You see, becoming a Pokemon Master is no easy feat, it takes courage, wisdom, and a bit of luck.\n";
            Utility::WaitForEnter();
            cout << name << ": Your mission, should you choose to accept it (and trust me, you really do not have a choice) is to collect all the Pokemon Badges and conquer the Pokemon League. \n";
            Utility::WaitForEnter();
            cout << player.name << ": Wait... that sounds a lot like every other Pokemon game out there.\n";
            Utility::WaitForEnter();
            cout << name << ": Shhh! Don't break the fourth wall " << player.name << "! This is serious business.\n";
            Utility::WaitForEnter();
            cout << name << ": To achieve this, you will need to battle wild Pokemon, challenge gym leaders, and of course, keep your Pokemon healthy at the PokeCenter.\n";
            Utility::WaitForEnter();
            cout << name << ": Along the way, you'll capture new Pokemon to strengthen your team. Just remember—there’s a limit to how many Pokémon you can carry, so choose wisely!\n";
            Utility::WaitForEnter();
            cout << player.name << ": Sounds like a walk in the park... right?\n";
            Utility::WaitForEnter();
            cout << name << ": Hah! Thats what they all say! But beware, young Trainer, the path to victory is fraught with challenges. And if you lose a battle... well, let’s just say you'll be starting from square one.\n";
            Utility::WaitForEnter();
            cout << name << ": So, what do you say? Are you ready to become the next Pokemon Champion?\n";
            Utility::WaitForEnter();
            cout << player.name << ": Ready as I will ever be, Professor!\n";
            Utility::WaitForEnter();
            cout << name << ":  That is the spirit! Now, your journey begins.\n";
            Utility::WaitForEnter();
            cout << name << ": But first... let's just pretend I didn't forget to set up the actual game loop... Ahem, onwards!\n";
            Utility::WaitForEnter();
        }
};

int main()
{
    Game loop;

    Pokemons charmander("Charmander", Pokemon_Types::Fire_Type, 100, 100, 15);

    ProfessorOak Oak("Professor Oak");
    Player player("Ash", charmander);

    Oak.GreetPlayer(player);
    Oak.PlayerIntro(player);
    Oak.FirstPokemon(player);

    Oak.ExplainMainQuest(player);

    loop.GameLoop(player);
}