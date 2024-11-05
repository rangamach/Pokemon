#pragma once

#include "Pokemons.hpp"

class Charmander :public Pokemons
{
public: 
	Charmander();
private:
	void FlameBurst(Pokemons& target_pokemon);
};