#include "Squirtle.hpp"
#include "PokemonType.hpp"
#include "PokemonMove.hpp"
#include "Utility.hpp"
#include<iostream>

using namespace N_Utility;

//void Squirtle::WaterSplash(Pokemons* target_pokemon)
//{
//	cout << name << " uses Watersplash on " << target_pokemon->name << "!!!\n";
//	target_pokemon->TakeDamage(attack_power);
//	N_Utility::Utility::WaitForEnter();
//	if (target_pokemon->IsFainted())
//		cout << target_pokemon->name << " fainted!!!\n";
//	else
//		cout << target_pokemon->name << " has " << target_pokemon->health << "HP left.";
//}

void Squirtle::Attack(PokemonMove selected_move, Pokemons* target_pokemon)
{
	Pokemons::Attack(selected_move, target_pokemon);
	if (selected_move.move_name == "Rapid Spin")
	{
		int hits = (rand() % 4) + 2;
		for (int i = 0; i < hits; ++i)
			Pokemons::Attack(selected_move, target_pokemon);
		cout << this->name << " hit " << target_pokemon->name << " " << hits << " times!!!\n";
	}
	//WaterSplash(target_pokemon);
}