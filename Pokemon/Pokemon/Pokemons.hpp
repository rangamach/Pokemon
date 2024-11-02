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
    int max_health;
    int attack_power;

    Pokemons();
    Pokemons(string poke_name, Pokemon_Types poke_type, int poke_health, int poke_attack_power);
    Pokemons(const Pokemons& other);
    ~Pokemons();
    void Attack(Pokemons &target_pokemon);
    void TakeDamage(int damage);
    bool IsFainted() const;
    void Battle(Pokemons &player_pokemon, Pokemons &wild_pokemon);
    void Heal();
};