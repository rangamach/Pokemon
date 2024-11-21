#pragma once
#include<string>
#include "Pokemons.hpp"

using namespace std;

struct PokemonMove
{
	string move_name;
	int move_power;

	PokemonMove(const string& pokemon_move_name, int pokemon_move_power)
	{
		move_name = pokemon_move_name;
		move_power = pokemon_move_power;
	}
};