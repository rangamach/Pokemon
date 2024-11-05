#include "Squirtle.hpp"
#include "PokemonType.hpp"
#include<iostream>

Squirtle::Squirtle()
{
	Pokemons("Squirtle", Pokemon_Types::Water_Type, 100, 100, 35);
}

void Squirtle::WaterSplash(Pokemons& target_pokemon)
{
	cout << name << " uses Watersplash on " << target_pokemon.name << "!!!\n";
	target_pokemon.TakeDamage(35);
}