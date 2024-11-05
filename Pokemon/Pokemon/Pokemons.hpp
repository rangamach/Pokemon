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
    Pokemons(string poke_name, Pokemon_Types poke_type, int poke_health, int poke_max_health, int poke_attack_power);
    Pokemons(const Pokemons& other);
    ~Pokemons();
    virtual void Attack(Pokemons* target_pokemon) = 0;
    void TakeDamage(int damage);
    bool IsFainted() const;
    void Heal();
    int GetHealth();
    void SetHealth(int updated_health);
};
