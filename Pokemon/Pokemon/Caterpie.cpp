#include "Caterpie.hpp"
#include "PokemonType.hpp"
#include<iostream>

Caterpie::Caterpie()
{
	Pokemons("Caterpie", Pokemon_Types::Bug_Type, 100, 100, 10);
}

void Caterpie::BugBite(Pokemons& target_pokemon)
{
	cout << name << " uses Bugbite on " << target_pokemon.name << "!!!\n";
	target_pokemon.TakeDamage(20);
}