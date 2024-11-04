#include "Player.hpp"
#include "Pokemons.hpp"
#include<iostream>

using namespace std;

using namespace N_Utility;

Player::Player()
{
    Player::captured_pokemon = Pokemons();
}

Player::Player(string playerName, Pokemons playerCapturedPokemon)
{
    Player::name = playerName;
    Player::captured_pokemon = playerCapturedPokemon;
}
void Player::ChosenPokemon(int choice)
{
    switch ((Pokemon_Choice)choice)
    {
        case Pokemon_Choice::Charmander:
            Player::captured_pokemon = Pokemons("Charmander", Pokemon_Types::Fire_Type, 100, 100, 20);
            break;
        case Pokemon_Choice::Bulbasaur:
            Player::captured_pokemon = Pokemons("Bulbasaur", Pokemon_Types::Grass_Type, 100, 100, 10);
            break;
        case Pokemon_Choice::Squirtle:
            Player::captured_pokemon = Pokemons("Squirtle", Pokemon_Types::Water_Type, 100, 100, 15);
            break;
        default:
            Player::captured_pokemon = Pokemons("Pikachu", Pokemon_Types::Electric_Type, 100, 100, 20);
            break;
    }
    cout << name << " chose " << captured_pokemon.name << "\n";
    Utility::WaitForEnter();
}