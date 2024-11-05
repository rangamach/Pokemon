#include "BattleState.hpp"

class Player;
class Pokemons;

class BattleManager
{
	public:
		void StartBattle(Player& player, Pokemons *wild_pokemon);
	private:
		BattleState battle_state;
		void Battle(Pokemons &player_pokemon, Pokemons &wild_pokemon);
		void BattleOutcome();
		void UpdateBattleState();
};