#include "Charmander.hpp"
#include "PokemonType.hpp"
#include<iostream>

Charmander::Charmander()
{
	Pokemons("Charmander", Pokemon_Types::Fire_Type, 100, 100, 35);
}

void Charmander::FlameBurst(Pokemons& target_pokemon)
{
	cout << name << " uses Flameburst on " << target_pokemon.name << "!!!\n";
	target_pokemon.TakeDamage(35);
}