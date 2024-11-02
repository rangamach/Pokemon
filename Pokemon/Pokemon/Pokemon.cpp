#include <iostream>
#include<string>
#include "PokemonType.hpp"
#include "PokemonChoice.hpp"
#include "Utility.hpp"
#include "Player.hpp"
#include "Game.hpp"

using namespace std;

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

//void GameLoop(Player &player)
//{
//    int choice;
//    bool keepPlaying = true;
//    while (keepPlaying)
//    {
//        Utility::ClearConsole();
//        cout << "\nWhat would you like to do next, " << player.name << "?\n";
//        cout << "1. Battle Wild Pokemon\n";
//        cout << "2. Visit PokeCenter\n";
//        cout << "3. Challenge Gyms\n";
//        cout << "4. Enter Pokemon League\n";
//        cout << "5. Quit\n";
//        cout << "Enter your choice: ";
//        cin >> choice;
//        Utility::ClearInputBuffer();
//        switch (choice)
//        {
//        case 1:
//            cout << "You look around... but all the wild Pokemon are on vacation. Maybe try again later?\n";
//            break;
//        case 2:
//            cout << "You head to the PokeCenter, but Nurse Joy is out on a coffee break. Guess your Pokemon will have to tough it out for now!\n";
//            break;
//        case 3:
//            cout << "You march up to the Gym, but it's closed for renovations. Seems like even Gym Leaders need a break!\n";
//            break;
//        case 4:
//            cout << "You boldly step towards the Pokemon League... but the gatekeeper laughs and says, 'Maybe next time, champ!'\n";
//            break;
//        case 5:
//            cout << "You try to quit, but Professor Oak's voice echoes: 'There's no quitting in Pokemon training!'\n";
//            cout << "Are you sure you want to quit? (y/n): ";
//            char quitChoice;
//            cin >> quitChoice;
//            if (quitChoice == 'y' || quitChoice == 'Y')
//                keepPlaying = false;
//            break;
//        default:
//            cout << "That's not a valid choice. Try again!\n";
//            break;
//        };
//        Utility::WaitForEnter();
//    }
//    cout << "Goodbye, " << player.name << "! Thanks for playing!\n";
//}

int main()
{
    Game loop;

    Pokemons charmander("Charmander", Pokemon_Types::Fire_Type, 100);

    ProfessorOak Oak("Professor Oak");
    Player player("Ash", charmander);

    Oak.GreetPlayer(player);
    Oak.PlayerIntro(player);
    Oak.FirstPokemon(player);

    Oak.ExplainMainQuest(player);

    loop.GameLoop(player);
}