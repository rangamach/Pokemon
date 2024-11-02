#include<iostream>
#include "Pokemons.hpp"
#include "PokemonType.hpp"

using namespace std;

Pokemons::Pokemons()
{
    Pokemons::name = "Unknown";
    Pokemons::type = Pokemon_Types::Normal_Type;
    Pokemons::health = 50;
}

Pokemons::Pokemons(string poke_name, Pokemon_Types poke_type, int poke_health)
{
    Pokemons::name = poke_name;
    Pokemons::type = poke_type;
    Pokemons::health = poke_health;
}

Pokemons::Pokemons(const Pokemons& other)
{
    Pokemons::name = other.name;
    Pokemons::type = other.type;
    Pokemons::health = other.health;
}

Pokemons::~Pokemons()
{

}

void Pokemons::Attack(Pokemons &target_pokemon)
{
    int damage = 10;
    cout << name << " inflicts an attack to " << target_pokemon.name << " that does " << damage << " damage!\n";
    target_pokemon.TakeDamage(damage);
}

void Pokemons::TakeDamage(int damage)
{
    health -= damage;
    if (health < 0)
        health = 0;
}

bool Pokemons::IsFainted() const
{
    return health <= 0;
}

void Pokemons::Battle(Pokemons& player_pokemon, Pokemons& wild_pokemon)
{
    cout << "A wild " << wild_pokemon.name << " appeared!\n";
    while (!player_pokemon.IsFainted() && !wild_pokemon.IsFainted())
    {
        player_pokemon.Attack(wild_pokemon);
        if (!wild_pokemon.IsFainted())
            wild_pokemon.Attack(player_pokemon);
        if (player_pokemon.IsFainted())
            cout << player_pokemon.name << " has fainted! You lose the battle.\n";
        else if(wild_pokemon.IsFainted())
            cout << wild_pokemon.name << " has fainted! You win the battle.\n";
    }
}

