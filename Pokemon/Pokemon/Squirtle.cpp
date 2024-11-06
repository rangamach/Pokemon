#include "Squirtle.hpp"
#include "PokemonType.hpp"
#include "Utility.hpp"
#include<iostream>

using namespace N_Utility;

void Squirtle::WaterSplash(Pokemons* target_pokemon)
{
	cout << name << " uses Watersplash on " << target_pokemon->name << "!!!\n";
	target_pokemon->TakeDamage(attack_power);
	N_Utility::Utility::WaitForEnter();
	if (target_pokemon->IsFainted())
		cout << target_pokemon->name << " fainted!!!\n";
	else
		cout << target_pokemon->name << " has " << target_pokemon->health << "HP left.";
}

void Squirtle::Attack(Pokemons* target_pokemon)
{
	WaterSplash(target_pokemon);
}