#include "Game.hpp"
#include "Player.hpp"
#include "PokemonType.hpp"
#include "Utility.hpp"
#include "WildPokemonEncounterHandler.hpp"
#include "BattleManager.hpp"
#include<iostream>


using namespace std;

using namespace N_Utility;

Game::Game()
{
    forest_grass = {
        "Forest", 
        {{"Pidgey",Pokemon_Types::Normal_Type,40, 40, 2},
         {"Zubat",Pokemon_Types::Poison_Type,30, 30, 10},
         {"Caterpie",Pokemon_Types::Bug_Type,35, 35, 5}}, 
        70 };
}
void Game::GameLoop(Player &player)
{
    BattleManager* battle_manager = new BattleManager();
    int choice;
    bool keepPlaying = true;
    while (keepPlaying)
    {
        Utility::ClearConsole();
        cout << "\nWhat would you like to do next, " << player.name << "?\n";
        cout << "1. Battle Wild Pokemon\n";
        cout << "2. Visit PokeCenter\n";
        cout << "3. Challenge Gyms\n";
        cout << "4. Enter Pokemon League\n";
        cout << "5. Quit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        Utility::ClearInputBuffer();
        switch (choice)
        {
            case 1:
            {
                WildPokemonEncounterHandler encounters;
                Pokemons encountered_pokemon = encounters.GetRandomWildPokemonFromGrass(forest_grass);
                battle_manager->StartBattle(player,encountered_pokemon);
                player.captured_pokemon.ShowHealth(player.captured_pokemon);
                break;
            }
            case 2:
            {
                player.captured_pokemon.Heal();
                cout << player.captured_pokemon.name << "'s health is fully restored.\n";
                player.captured_pokemon.ShowHealth(player.captured_pokemon);
                break;
            }
            case 3:
                cout << "You march up to the Gym, but it's closed for renovations. Seems like even Gym Leaders need a break!\n";
                break;
            case 4:
                cout << "You boldly step towards the Pokemon League... but the gatekeeper laughs and says, 'Maybe next time, champ!'\n";
                break;
            case 5:
            {
                cout << "You try to quit, but Professor Oak's voice echoes: 'There's no quitting in Pokemon training!'\n";
                cout << "Are you sure you want to quit? (y/n): ";
                char quitChoice;
                cin >> quitChoice;
                if (quitChoice == 'y' || quitChoice == 'Y')
                    keepPlaying = false;
                break;
            }
            default:
                cout << "That's not a valid choice. Try again!\n";
                break;
        };
        Utility::WaitForEnter();
    }
    cout << "Goodbye, " << player.name << "! Thanks for playing!\n";
    delete(battle_manager);
}