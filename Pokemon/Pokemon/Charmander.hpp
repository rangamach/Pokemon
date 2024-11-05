#pragma once

#include "Pokemons.hpp"

class Charmander :public Pokemons
{
public: 
	Charmander() : Pokemons("Charmander", Pokemon_Types::Fire_Type, 100, 100, 35) {};
private:
	void FlameBurst(Pokemons* target_pokemon);

	void Attack(Pokemons* target_pokemon) override;
};