#include "Grass.hpp"

class Player;

class Game
{
	private:
		Grass forest_grass;
		Pokemons* wild_pokemon;
	public:
		Game();
		~Game();
		void GameLoop(Player &player);
};