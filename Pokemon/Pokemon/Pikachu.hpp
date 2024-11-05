#pragma once

#include "Pokemons.hpp"

class Pikachu : public Pokemons
{
	public:
		Pikachu() : Pokemons("Pikachu", Pokemon_Types::Electric_Type, 100, 100, 15) {};
	private:
		void ThunderShock(Pokemons* target_pokemon);

		void Attack(Pokemons* target_pokemon) override;
};
