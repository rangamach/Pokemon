#include "Zubat.hpp"
#include "Pokemons.hpp"
#include<iostream>

//Zubat::Zubat()
//{
//	Pokemons("Zubat", Pokemon_Types::Poison_Type, 100, 100, 20);
//}

void Zubat::SuperSonic(Pokemons* target_pokemon)
{
	cout << name << " uses Supersonic on " << target_pokemon->name << "!!!\n";
	target_pokemon->TakeDamage(20);
}

void Zubat::Attack(Pokemons* target_pokemon)
{
	SuperSonic(target_pokemon);
}