#pragma once

#include "Pokemons.hpp"
#include "PokemonMove.hpp"
#include "PokemonType.hpp"

class Caterpie :public Pokemons
{
	public:
		Caterpie() : Pokemons("Caterpie", Pokemon_Types::Bug_Type, 100, 100, {{"Sticky Web",10},{"Bug Bite",25}}) {};
	private:
		//void BugBite(Pokemons* target_pokemon);

		void Attack(PokemonMove selected_move, Pokemons* target_pokemon) override;
};