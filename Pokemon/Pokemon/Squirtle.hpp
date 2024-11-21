#pragma once

#include "Pokemons.hpp"
#include "PokemonMove.hpp"
#include "PokemonType.hpp"

class Squirtle :public Pokemons
{
public:
	Squirtle() : Pokemons("Squirtle", Pokemon_Types::Water_Type, 100, 100, { {"Watersplash",35},{"Rapid Spin",5}}) {};
private:
	//void WaterSplash(Pokemons* target_pokemon);

	void Attack(PokemonMove selected_move, Pokemons* target_pokemon) override;
};