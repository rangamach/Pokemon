#include "Pikachu.hpp"
#include "PokemonType.hpp"
#include "Utility.hpp"
#include "PokemonMove.hpp"
#include<iostream>

using namespace N_Utility;

using namespace std;

//void Pikachu::ThunderShock(Pokemons* target_pokemon)
//{
//	cout << name << " uses Thundershock on " << target_pokemon->name << "!!!\n";
//	target_pokemon->TakeDamage(attack_power);
//	N_Utility::Utility::WaitForEnter();
//	if (target_pokemon->IsFainted())
//		cout << target_pokemon->name << " fainted!!!\n";
//	else
//		cout << target_pokemon->name << " has " << target_pokemon->health << "HP left.";
//}

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
	//ThunderShock(target_pokemon);
}