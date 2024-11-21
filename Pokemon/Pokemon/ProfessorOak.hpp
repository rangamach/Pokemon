#include<iostream>

using namespace std;

class Player;

class ProfessorOak
{
public:
	string name;
	ProfessorOak(string prof_name);
	void GreetPlayer(Player& player);
	void PlayerIntro(Player& player);
	void FirstPokemon(Player& player);
	void ExplainMainQuest(Player player);
};