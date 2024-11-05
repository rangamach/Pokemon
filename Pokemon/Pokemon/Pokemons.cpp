#include<iostream>
#include "Pokemons.hpp"
#include "PokemonType.hpp"

using namespace std;

Pokemons::Pokemons()
{
    Pokemons::name = "Unknown";
    Pokemons::type = Pokemon_Types::Normal_Type;
    Pokemons::health = 50;
    Pokemons::max_health = 100;
    Pokemons::attack_power = 10;
}

Pokemons::Pokemons(string poke_name, Pokemon_Types poke_type, int poke_health, int poke_max_health, int poke_attack_power)
{
    Pokemons::name = poke_name;
    Pokemons::type = poke_type;
    Pokemons::health = poke_health;
    Pokemons::max_health = poke_max_health;
    Pokemons::attack_power = poke_attack_power;
}

Pokemons::Pokemons(const Pokemons& other)
{
    Pokemons::name = other.name;
    Pokemons::type = other.type;
    Pokemons::health = other.health;
    Pokemons::max_health = other.max_health;
    Pokemons::attack_power = other.attack_power;
}

Pokemons::~Pokemons()
{

}

//void Pokemons::Attack(Pokemons &target_pokemon)
//{
//    int damage = attack_power;
//    cout << name << " inflicts an attack to " << target_pokemon.name << " that does " << damage << " damage!\n";
//    target_pokemon.TakeDamage(damage);
//}

void Pokemons::TakeDamage(int damage)
{
    health -= damage;
    if (health < 0)
        health = 0;
}

bool Pokemons::IsFainted() const
{
    return health <= 0;
}

void Pokemons::Heal()
{
    health = max_health;
}

int Pokemons::GetHealth()
{
    return health;
}

void Pokemons::SetHealth(int updated_health)
{
    health = updated_health;
}

