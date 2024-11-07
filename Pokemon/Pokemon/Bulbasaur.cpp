#include "Bulbasaur.hpp"
#include "PokemonType.hpp"
#include "Utility.hpp"
#include<iostream>

using namespace N_Utility;

//void Bulbasaur::VineWhip(Pokemons* target_pokemon)
//{
//	cout << name << " uses Vinewhip on " << target_pokemon->name << "!!!\n";
//	target_pokemon->TakeDamage(attack_power);
//	N_Utility::Utility::WaitForEnter();
//	if (target_pokemon->IsFainted())
//		cout << target_pokemon->name << " fainted!!!\n";
//	else
//		cout << target_pokemon->name << " has " << target_pokemon->health << "HP left.";
//}

void Bulbasaur::Attack(PokemonMove selected_move, Pokemons* target_pokemon)
{
	Pokemons::Attack(selected_move, target_pokemon);
	if (selected_move.move_name == "Vine Whip")
	{
		int second_hit_chance = rand() % 2;
		if (second_hit_chance == 1)
		{
			Pokemons::Attack(selected_move, target_pokemon);
			cout << name << " hits again with a second " << selected_move.move_name << "!!!\n";
		}
		else
			cout << target_pokemon->name << " dodged the second hit!!!\n";
	}
	//VineWhip(target_pokemon);
}