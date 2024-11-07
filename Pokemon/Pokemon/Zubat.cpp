#include "Zubat.hpp"
#include "Pokemons.hpp"
#include "PokemonMove.hpp"
#include "Utility.hpp"
#include<iostream>

using namespace N_Utility;

//void Zubat::SuperSonic(Pokemons* target_pokemon)
//{
//	cout << name << " uses Supersonic on " << target_pokemon->name << "!!!\n";
//	target_pokemon->TakeDamage(attack_power);
//	N_Utility::Utility::WaitForEnter();
//	if (target_pokemon->IsFainted())
//		cout << target_pokemon->name << " fainted!!!\n";
//	else
//		cout << target_pokemon->name << " has " << target_pokemon->health << "HP left.";
//}

void Zubat::Attack(PokemonMove selected_move, Pokemons* target_pokemon)
{
	Pokemons::Attack(selected_move, target_pokemon);
	if (selected_move.move_name == "Leech Life")
	{
		this->health += selected_move.move_power * 0.5;
	}
	if (this->health > this->max_health)
		this->health = this->max_health;
	//SuperSonic(target_pokemon);
}