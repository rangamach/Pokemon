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

void Pokemons::Attack()
{
    cout << name << " attacks with a powerful move!\n";
}

