#pragma once

#include "Pokemons.hpp"

class Pikachu : public Pokemons
{
	public:
		Pikachu();
	private:
		void ThunderShock(Pokemons& target_pokemon);
};
