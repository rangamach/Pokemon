#pragma once

#include<vector>
#include<string>
#include "Pokemons.hpp"

using namespace std;

struct Grass
{
	string environment;
	vector<Pokemons> wild_pokemons_list;
	int pokemon_encounter_rate;
};

Grass forestGrass = {
	"Cave",
	{{"Zubat",Pokemon_Types::Poison_Type,30},{"Geodude",Pokemon_Types::Rock_Type,50},{"Caterpie",Pokemon_Types::Bug_Type,10}},
	80
};