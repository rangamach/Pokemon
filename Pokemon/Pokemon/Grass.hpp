#pragma once

#include<vector>
#include<string>
#include "Pokemons.hpp"

using namespace std;

struct Grass
{
	string environment;
	vector<Pokemons*> wild_pokemons_list;
	int pokemon_encounter_rate;
};