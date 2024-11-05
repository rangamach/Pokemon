#pragma once

#include "Pokemons.hpp"

class Pidgey :public Pokemons
{
	public:
		Pidgey() : Pokemons("Pidgey", Pokemon_Types::Normal_Type, 100, 100, 35) {};
	private:
		void WingAttack(Pokemons* target_pokemon);

		void Attack(Pokemons* target_pokemon) override;
};