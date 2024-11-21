#pragma once

#include<iostream>
#include<string>

using namespace std;

class Pokemons;

class IStatusEffect
{
public:
	virtual void ApplyEffect(Pokemons* target_pokemin) = 0;

	virtual string GetEffectName(Pokemons* target_pokemon) = 0;

	virtual bool TurnEndEffect(Pokemons* target_pokemon) = 0;

	virtual void ClearEffect(Pokemons* target_pokemon) = 0;

	virtual ~IStatusEffect() = default;
};