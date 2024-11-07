#include "Caterpie.hpp"
#include "PokemonType.hpp"
#include "Utility.hpp"
#include "PokemonMove.hpp"
#include<iostream>

using namespace N_Utility;

//void Caterpie::BugBite(Pokemons* target_pokemon)
//{
//	cout << name << " uses Bugbite on " << target_pokemon->name << "!!!\n";
//	target_pokemon->TakeDamage(attack_power);
//	N_Utility::Utility::WaitForEnter();
//	if (target_pokemon->IsFainted())
//		cout << target_pokemon->name << " fainted!!!\n";
//	else
//		cout << target_pokemon->name << " has " << target_pokemon->health << "HP left.";
//}

void Caterpie::Attack(PokemonMove selected_move, Pokemons* target_pokemon)
{
	Pokemons::Attack(selected_move, target_pokemon);
	if (selected_move.move_name == "Sticky Web")
	{
		target_pokemon->ReduceAttackPower(5);
		cout << target_pokemon->name << "'s next attack will be reduced by 5 damage!\n";
		N_Utility::Utility::WaitForEnter();
	}
	//BugBite(target_pokemon);
}