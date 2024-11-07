#pragma once

#include "Pokemons.hpp"
#include "PokemonMove.hpp"
#include "PokemonType.hpp"

class Pikachu : public Pokemons
{
	public:
		Pikachu() : Pokemons("Pikachu", Pokemon_Types::Electric_Type, 100, 100, { {"Thundershock",15},{"Thunderbolt",80}}) {};
	private:
		//void ThunderShock(Pokemons* target_pokemon);

		void Attack(PokemonMove selected_move, Pokemons* target_pokemon) override;
};
