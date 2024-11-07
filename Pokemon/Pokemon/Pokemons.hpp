#pragma once

#include<string>
#include<vector>

using namespace std;

enum class Pokemon_Types;
struct PokemonMove;

class Pokemons
{
public:
    string name;
    Pokemon_Types type;
    int health;
    int max_health;
    int attack_power;
    vector<PokemonMove> pokemon_moves;

    Pokemons();
    Pokemons(string poke_name, Pokemon_Types poke_type, int poke_health, int poke_max_health, vector<PokemonMove> poke_moves_list);
    Pokemons(const Pokemons& other);
    ~Pokemons();
    virtual void Attack(PokemonMove pokemon_move, Pokemons* target_pokemon) = 0;
    void TakeDamage(int damage);
    bool IsFainted() const;
    void Heal();
    int GetHealth();
    void SetHealth(int updated_health);
    void SelectAndExecuteMove(Pokemons* target_pokemon);
    void ReduceAttackPower(int power);
protected:
    int SelectMove();
    void PrintAllAvailableMoves();
    void ExecuteMove(PokemonMove selected_move, Pokemons* target_pokemon);
};
