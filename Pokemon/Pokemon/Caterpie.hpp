#pragma once

#include "Pokemons.hpp"

class Caterpie :public Pokemons
{
	public:
		Caterpie();
	private:
		void BugBite(Pokemons& target_pokemon);
};