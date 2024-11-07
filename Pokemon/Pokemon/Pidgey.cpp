#include "Pidgey.hpp"
#include "PokemonType.hpp"
#include "Utility.hpp"
#include "PokemonMove.hpp"
#include "BattleManager.hpp"
#include<iostream>

using namespace N_Utility;

//void Pidgey::WingAttack(Pokemons* target_pokemon)
//{
//	cout << name << " uses Wingattack on " << target_pokemon->name << "!!!\n";
//	target_pokemon->TakeDamage(attack_power);
//	N_Utility::Utility::WaitForEnter();
//	if (target_pokemon->IsFainted())
//		cout << target_pokemon->name << " fainted!!!\n";
//	else
//		cout << target_pokemon->name << " has " << target_pokemon->health << "HP left.";
//
//}

void Pidgey::Attack(PokemonMove seleccted_move, Pokemons* target_pokemon)
{
	Pokemons::Attack(seleccted_move, target_pokemon);
	if (seleccted_move.move_name == "Gust")
	{
		if (rand() % 100 < 20)
		{
			cout << this->name << " blew " << target_pokemon->name << " away!!!\n";
			target_pokemon->health = 0;
		}
	}
	//WingAttack(target_pokemon);
}