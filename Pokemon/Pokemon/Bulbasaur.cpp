#include "Bulbasaur.hpp"
#include "PokemonType.hpp"
#include<iostream>

Bulbasaur::Bulbasaur()
{
	Pokemons("Bulbasaur", Pokemon_Types::Grass_Type, 100, 100, 35);
}

void Bulbasaur::VineWhip(Pokemons& target_pokemon)
{
	cout << name << " uses Vinewhip on " << target_pokemon.name << "!!!\n";
	target_pokemon.TakeDamage(35);
}