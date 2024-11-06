#include "Pikachu.hpp"
#include "PokemonType.hpp"
#include "Utility.hpp"
#include<iostream>

using namespace N_Utility;

using namespace std;

void Pikachu::ThunderShock(Pokemons* target_pokemon)
{
	cout << name << " uses Thundershock on " << target_pokemon->name << "!!!\n";
	target_pokemon->TakeDamage(attack_power);
	N_Utility::Utility::WaitForEnter();
	if (target_pokemon->IsFainted())
		cout << target_pokemon->name << " fainted!!!\n";
	else
		cout << target_pokemon->name << " has " << target_pokemon->health << "HP left.";
}

void Pikachu::Attack(Pokemons* target_pokemon)
{
	ThunderShock(target_pokemon);
}