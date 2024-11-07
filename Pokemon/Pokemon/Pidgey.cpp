#include "Pidgey.hpp"
#include "PokemonType.hpp"
#include "Utility.hpp"
#include "PokemonMove.hpp"
#include "BattleManager.hpp"
#include<iostream>

using namespace N_Utility;

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
}