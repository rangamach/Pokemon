class Pokemons;

struct BattleState
{
	Pokemons *player_pokemon;
	Pokemons *wild_pokemon;
	bool player_turn;
	bool battle_unfinished;
};