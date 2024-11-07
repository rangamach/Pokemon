#include "Pokemons.hpp"
#include "PokemonMove.hpp"
#include "PokemonType.hpp"

class Zubat :public Pokemons
{
	public:
		Zubat() : Pokemons("Zubat", Pokemon_Types::Poison_Type, 100, 100, { {"Supersonic",20},{"Leech Life",10}}) {};
	private:
		//void SuperSonic(Pokemons* target_pokemon);

		void Attack(PokemonMove selected_move, Pokemons* target_pokemon) override;
};