#include<iostream>
#include "Pokemons.hpp"
#include "PokemonType.hpp"
#include "PokemonMove.hpp"
#include "Utility.hpp"

using namespace std;

using namespace N_Utility;

Pokemons::Pokemons()
{
    Pokemons::name = "Unknown";
    Pokemons::type = Pokemon_Types::Normal_Type;
    Pokemons::health = 50;
    Pokemons::max_health = 100;
    Pokemons::attack_power = 10;
    Pokemons::pokemon_moves = {};
}

//Pokemons::Pokemons(string poke_name, Pokemon_Types poke_type, int poke_health, int poke_max_health, int poke_attack_power)
//{
//    Pokemons::name = poke_name;
//    Pokemons::type = poke_type;
//    Pokemons::health = poke_health;
//    Pokemons::max_health = poke_max_health;
//    Pokemons::attack_power = poke_attack_power;
//}

Pokemons::Pokemons(string poke_name, Pokemon_Types poke_type, int poke_health, int poke_max_health, vector<PokemonMove> pokemon_moves_list)
{
    Pokemons::name = poke_name;
    Pokemons::type = poke_type;
    Pokemons::health = poke_health;
    Pokemons::max_health = poke_max_health;
    Pokemons::pokemon_moves = pokemon_moves_list;
}

Pokemons::Pokemons(const Pokemons& other)
{
    Pokemons::name = other.name;
    Pokemons::type = other.type;
    Pokemons::health = other.health;
    Pokemons::max_health = other.max_health;
    //Pokemons::attack_power = other.attack_power;
    Pokemons::pokemon_moves = other.pokemon_moves;
}

Pokemons::~Pokemons()
{

}

void Pokemons::Attack(PokemonMove pokemon_move, Pokemons* target_pokemon)
{
    target_pokemon->TakeDamage(pokemon_move.move_power);
}

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

void Pokemons::PrintAllAvailableMoves()
{
    cout << "Availablle Moves:\n";
    for (size_t i = 0; i < pokemon_moves.size(); ++i)
        cout << i + 1 << ": " << pokemon_moves[i].move_name << " -> " << "Power: " << pokemon_moves[i].move_power << endl;
}

int Pokemons::SelectMove()
{
    int choice;
    cout << "Choose a move: ";
    cin >> choice;
    while (choice < 1 || choice > static_cast<int>(pokemon_moves.size()))
    {
        cout << "Invalid Choice. Try Again";
        cin >> choice;
    }
    return choice;
}

void Pokemons::ExecuteMove(PokemonMove selected_move, Pokemons* target_pokemon)
{
    cout << name << " used " << selected_move.move_name << "!!!\n";
    Attack(selected_move, target_pokemon);
    N_Utility::Utility::WaitForEnter();
    cout << ". . . \n";
    N_Utility::Utility::WaitForEnter();
    if (target_pokemon->IsFainted())
        cout << target_pokemon->name << " fainted!!!\n";
    else
        cout << target_pokemon->name << " has " << target_pokemon->health << "HP left.\n";
}

void Pokemons::SelectAndExecuteMove(Pokemons* target_pokemon)
{
    PrintAllAvailableMoves();
    int move = SelectMove();
    ExecuteMove(pokemon_moves[move-1], target_pokemon);
}

void Pokemons::ReduceAttackPower(int power)
{
    attack_power -= power;
}

