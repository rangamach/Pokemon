#include "ParalyzedEffect.hpp"
#include "IStatusEffect.hpp"
#include "Pokemons.hpp"
#include<iostream>

void ParalyzedEffect::ApplyEffect(Pokemons* target_pokemon)
{
	cout << target_pokemon->name << " is paralyzed!!!\n" << target_pokemon->name << " may not be able to move!!!\n";
	//effect lasts for 1 to 3 turns randomly.
	turns_left = rand() % 3 + 1;
}

string ParalyzedEffect::GetEffectName(Pokemons* target_pokemon)
{
	return "Paralyzed";
}

bool ParalyzedEffect::TurnEndEffect(Pokemons* target_pokemon)
{
	if (turns_left <= 0)
	{
		ClearEffect(target_pokemon);
		return true;
	}
	turns_left--;
	//randon number between 0 and 3.
	int paralysis_chance = rand() % 4;
	if (paralysis_chance == 0)
	{
		cout << target_pokemon->name << " is paralyzed!!!\n" << target_pokemon->name << " cannot move!!!\n";
		return false;
	}
	cout << target_pokemon->name << " shakes off the paralysis momentarily and can move!!!\n";
	return true;
}

void ParalyzedEffect::ClearEffect(Pokemons* target_pokemon)
{
	cout << target_pokemon->name << " is no longer paralyzed!!!\n";
	target_pokemon->ClearEffect();
}