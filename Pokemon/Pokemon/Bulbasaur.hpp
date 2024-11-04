#pragma once

#include "Pokemons.hpp"

class Bulbasaur :public Pokemons
{
public:
	Bulbasaur();
private:
	void VineWhip(Pokemons& target_pokemon);
};