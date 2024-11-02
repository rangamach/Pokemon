class Player;
class Pokemons;

class BattleManager
{
	public:
		void StartBattle(Player &player, Pokemons &wild_pokemon);
	private:
		void Battle(Pokemons &player_pokemon, Pokemons &wild_pokemon);
		void BattleOutcome(Pokemons &player_pokemon, bool playerWon);
};