#pragma once

#include "Pokemons.hpp"
#include "PokemonMove.hpp"
#include "PokemonType.hpp"

class Bulbasaur :public Pokemons
{
public:
	Bulbasaur() : Pokemons("Bulbasaur", Pokemon_Types::Grass_Type, 100, 100, {{"Vine Whip", 25},{"Tackle", 10}}) {};
private:
	//void VineWhip(Pokemons* target_pokemon);

	void Attack(PokemonMove selected_move, Pokemons* target_pokemon) override;
};