#pragma once

#include "Pokemons.hpp"

class Pidgey :public Pokemons
{
	public:
		Pidgey();
	private:
		void WingAttack(Pokemons& target_pokemon);

		void Attack(Pokemons& target_pokemon) override;
};