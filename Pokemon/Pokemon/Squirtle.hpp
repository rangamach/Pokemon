#pragma once

#include "Pokemons.hpp"

class Squirtle :public Pokemons
{
public:
	Squirtle();
private:
	void WaterSplash(Pokemons& target_pokemon);
};