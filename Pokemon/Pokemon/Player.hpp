#pragma once

#include<string>

#include "PokemonType.hpp"
#include "PokemonChoice.hpp"
#include "Utility.hpp"
#include "Pokemons.hpp"

using namespace std;

class Player
{
	public:
		string name;
		Pokemons* captured_pokemon;

		Player();
		//Player(string playerName, Pokemons playerCapturedPokemon);
		Player(string playerName);
		void ChosenPokemon(int choice);
};