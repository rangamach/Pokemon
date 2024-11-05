#pragma once

#include "Pokemons.hpp"

class Bulbasaur :public Pokemons
{
public:
	Bulbasaur() : Pokemons("Bulbasaur", Pokemon_Types::Grass_Type, 100, 100, 35) {} ;
	//Bulbasaur(string poke_name, Pokemon_Types poke_type, int poke_health, int poke_max_health, int poke_attack_power);
private:
	void VineWhip(Pokemons* target_pokemon);

	void Attack(Pokemons* target_pokemon) override;
};