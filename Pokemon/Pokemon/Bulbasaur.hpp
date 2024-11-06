#pragma once

#include "Pokemons.hpp"

class Bulbasaur :public Pokemons
{
public:
	Bulbasaur() : Pokemons("Bulbasaur", Pokemon_Types::Grass_Type, 100, 100, 35) {} ;
private:
	void VineWhip(Pokemons* target_pokemon);

	void Attack(Pokemons* target_pokemon) override;
};