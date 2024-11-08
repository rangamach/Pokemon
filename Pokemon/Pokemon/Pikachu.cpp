#include "Pikachu.hpp"
#include "PokemonType.hpp"
#include "Utility.hpp"
#include "PokemonMove.hpp"
#include<iostream>

using namespace N_Utility;

using namespace std;

void Pikachu::Attack(PokemonMove selected_move, Pokemons* target_pokemon)
{
	if (selected_move.move_name == "Thunderbolt")
	{
		if (rand() % 100 < 80)
		{
			Pokemons::Attack(selected_move, target_pokemon);
			cout << this->name << " hit " << target_pokemon->name << " successfully!!!\n";
		}
		else
		{
			cout << this->name << " missed " << target_pokemon->name << "!!!\n";
		}
	}
	else
		Pokemons::Attack(selected_move, target_pokemon);
	if (selected_move.move_name == "Thundershock")
	{
		if (target_pokemon->CanApplyEffect())
			target_pokemon->ApplyEffect(StatusEffectType::Paralyzed);
	}
}