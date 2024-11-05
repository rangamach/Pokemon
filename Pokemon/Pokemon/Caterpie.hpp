#pragma once

#include "Pokemons.hpp"

class Caterpie :public Pokemons
{
	public:
		Caterpie() : Pokemons("Caterpie", Pokemon_Types::Bug_Type, 100, 100, 10) {};
	private:
		void BugBite(Pokemons* target_pokemon);

		void Attack(Pokemons* target_pokemon) override;
};