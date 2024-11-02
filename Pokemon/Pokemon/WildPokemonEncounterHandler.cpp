#include "WildPokemonEncounterHandler.hpp"
#include <cstdlib>
#include <ctime>

WildPokemonEncounterHandler::WildPokemonEncounterHandler()
{
	srand(time(0));
}

Pokemons WildPokemonEncounterHandler::GetRandomWildPokemonFromGrass(const Grass& grass)
{
	int random_index = rand() % grass.wild_pokemons_list.size();
	return grass.wild_pokemons_list[random_index];
}
