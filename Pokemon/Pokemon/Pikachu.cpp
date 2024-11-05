#include "Pikachu.hpp"
#include "PokemonType.hpp"
#include<iostream>

using namespace std;

Pikachu::Pikachu()
{
	Pokemons("Pikachu", Pokemon_Types::Electric_Type, 100, 100, 15);
}

void Pikachu::ThunderShock(Pokemons& target_pokemon)
{
	cout << name << " uses Thundershock on " << target_pokemon.name << "!!!\n";
	target_pokemon.TakeDamage(20);
}