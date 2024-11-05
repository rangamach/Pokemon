#include "Pokemons.hpp"

class Zubat :public Pokemons
{
	public:
		Zubat() : Pokemons("Zubat", Pokemon_Types::Poison_Type, 100, 100, 20) {};
	private:
		void SuperSonic(Pokemons* target_pokemon);

		void Attack(Pokemons* target_pokemon) override;
};