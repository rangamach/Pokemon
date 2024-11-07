#include "WildPokemonEncounterHandler.hpp"
#include <cstdlib>
#include <ctime>

using namespace std;

WildPokemonEncounterHandler::WildPokemonEncounterHandler()
{
	srand(time(0));
}

Pokemons* WildPokemonEncounterHandler::GetRandomWildPokemonFromGrass(const Grass& grass)
{
	int random_index = rand() % grass.wild_pokemons_list.size();
	if (grass.wild_pokemons_list[random_index]->health == 0)
		grass.wild_pokemons_list[random_index]->Heal();
	return grass.wild_pokemons_list[random_index];
}
