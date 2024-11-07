#pragma once

#include "Pokemons.hpp"
#include "PokemonMove.hpp"
#include "PokemonType.hpp"

class Pidgey :public Pokemons
{
	public:
		Pidgey() : Pokemons("Pidgey", Pokemon_Types::Normal_Type, 100, 100, {{"Wing Attack",35},{"Gust",15}}) {};
	private:
		//void WingAttack(Pokemons* target_pokemon);

		void Attack(PokemonMove selected_move, Pokemons* target_pokemon) override;
};