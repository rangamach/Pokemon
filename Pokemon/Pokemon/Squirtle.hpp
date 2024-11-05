#pragma once

#include "Pokemons.hpp"

class Squirtle :public Pokemons
{
public:
	Squirtle() : Pokemons("Squirtle", Pokemon_Types::Water_Type, 100, 100, 35) {};
private:
	void WaterSplash(Pokemons* target_pokemon);

	void Attack(Pokemons* target_pokemon) override;
};