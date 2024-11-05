#include "BattleManager.hpp"
#include "Pokemons.hpp"
#include "Player.hpp"
#include<iostream>

using namespace std;

using namespace N_Utility;

void BattleManager::StartBattle(Player& player, Pokemons& wild_pokemon)
{
    battle_state.player_pokemon = &player.captured_pokemon;
    battle_state.wild_pokemon = &wild_pokemon;
    battle_state.player_turn = true;
    battle_state.battle_unfinished = true;
	cout << "A wild " << wild_pokemon.name << " appeared!\n";
	Battle(player.captured_pokemon, wild_pokemon);
}

void BattleManager::Battle(Pokemons& player_pokemon, Pokemons& wild_pokemon)
{
    while (battle_state.battle_unfinished)
    {
        if (battle_state.player_turn)
            battle_state.player_pokemon->Attack(*battle_state.wild_pokemon);
        else
            battle_state.wild_pokemon->Attack(*battle_state.player_pokemon);
        UpdateBattleState();
        battle_state.player_turn = !battle_state.player_turn;
        Utility::WaitForEnter();
    }
    BattleOutcome();
}

void BattleManager::UpdateBattleState()
{
    if (battle_state.player_pokemon->IsFainted())
        battle_state.battle_unfinished = false;
    else if (battle_state.wild_pokemon->IsFainted())
        battle_state.battle_unfinished = false;
}

void BattleManager::BattleOutcome()
{
    if(battle_state.player_pokemon->IsFainted())
        cout << "Oh no! " << battle_state.player_pokemon->name << " fainted! You need to visit the PokeCenter.\n";
    else if(battle_state.wild_pokemon->IsFainted())
        cout << "Congratulations!!! " << battle_state.player_pokemon->name << " is victorious! Keep an eye on the health of your Pokemon.\n";
}