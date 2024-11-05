#include "Pidgey.hpp"
#include "PokemonType.hpp"
#include<iostream>

//Pidgey::Pidgey()
//{
//	Pokemons("Pidgey", Pokemon_Types::Normal_Type, 100, 100, 35);
//}

void Pidgey::WingAttack(Pokemons* target_pokemon)
{
	cout << name << " uses Wingattack on " << target_pokemon->name << "!!!\n";
	target_pokemon->TakeDamage(20);
}

void Pidgey::Attack(Pokemons* target_pokemon)
{
	WingAttack(target_pokemon);
}