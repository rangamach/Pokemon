#pragma once

#include<string>
#include "PokemonType.hpp"

using namespace std;

class Pokemons
{
public:
    string name;
    Pokemon_Types type;
    int health;

    Pokemons();
    Pokemons(string poke_name, Pokemon_Types poke_type, int poke_health);
    Pokemons(const Pokemons& other);
    ~Pokemons();
    void Attack();
};