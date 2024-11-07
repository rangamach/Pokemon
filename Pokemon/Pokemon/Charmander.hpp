#pragma once

#include "Pokemons.hpp"
#include "PokemonMove.hpp"
#include "PokemonType.hpp"

class Charmander :public Pokemons
{
public: 
	Charmander() : Pokemons("Charmander", Pokemon_Types::Fire_Type, 100, 100, {{"Flameburst",35},{"Blazing Charge",70}}) {};
private:
	//void FlameBurst(Pokemons* target_pokemon);

	void Attack(PokemonMove selected_move, Pokemons* target_pokemon) override;
};