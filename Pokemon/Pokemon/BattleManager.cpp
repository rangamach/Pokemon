#include "BattleManager.hpp"
#include "Pokemons.hpp"
#include "Player.hpp"
#include<iostream>

using namespace std;

void BattleManager::StartBattle(Player &player, Pokemons &wild_pokemon)
{
	cout << "A wild " << wild_pokemon.name << " appeared!\n";
	Battle(player.captured_pokemon, wild_pokemon);
}

void BattleManager::Battle(Pokemons& player_pokemon, Pokemons& wild_pokemon)
{
    while (!player_pokemon.IsFainted() && !wild_pokemon.IsFainted())
    {
        player_pokemon.Attack(wild_pokemon);
        if (!wild_pokemon.IsFainted())
            wild_pokemon.Attack(player_pokemon);
        Utility::WaitForEnter();
    }
    BattleOutcome(player_pokemon,player_pokemon.IsFainted());
}

void BattleManager::BattleOutcome(Pokemons &player_pokemon, bool playerWon)
{
    if(playerWon)
        cout << player_pokemon.name << " is victorious! Keep an eye on your Pokémon's health.\n";
    else
        cout << "Oh no! " << player_pokemon.name << " fainted! You need to visit the PokeCenter.\n";
}