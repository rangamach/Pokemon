#include <iostream>
#include<vector>

using namespace std;

//Enum Classes
enum class Pokemon_Choice
{
    Charmander,
    Bulbasaur,
    Squirtle,
    Chosen_For_You
};

enum class Pokemon_Types
{
    Normal_Type,
    Fire_Type,
    Water_Type,
    Electric_Type,
    Grass_Type,
    Ice_Type,
    Fighting_Type,
    Poison_Type,
    Ground_Type,
    Flying_Type,
    Psychic_Type,
    Bug_Type,
    Rock_Type,
    Ghost_Type,
    Dragon_Type,
    Dark_Type,
    Steel_Type,
    Fairy_Type
};


//Variables
string player_name;
vector<Pokemon_Choice> captured_pokemon;

//Functions
static string EnterName()
{
    string name;
    cout << "Enter your Name: ";
    cin >> name;
    return name;
}

static void WelcomeMessage(string name)
{
    cout << "Welcome " + name + "!\n";
}

Pokemon_Choice ChooseFirstPokemon()
{
    Pokemon_Choice chosen_pokemon;
    cout << "Welcome to the world of Pokemon! I am Professor Oak.\n";
    cout << "You can choose one of the following Pokemon:\n";
    cout << "1. Bulbasaur\n2. Charmander\n3. Squirtle\n";
    cout << "Which Pokemon would you like to choose? Enter the number: ";

    int choice;
    cin >> choice;

    switch (choice)
    {
        case 1:
            chosen_pokemon = Pokemon_Choice::Charmander;
            break;
        case 2:
            chosen_pokemon = Pokemon_Choice::Bulbasaur;
            break;
        case 3:
            chosen_pokemon = Pokemon_Choice::Squirtle;
            break;
        default:
            chosen_pokemon = Pokemon_Choice::Chosen_For_You;
            break;
    }

    switch (chosen_pokemon)
    {
        case Pokemon_Choice::Charmander:
            cout << "You chose Charmander! A fiery choice.\n";
            break;
        case Pokemon_Choice::Bulbasaur:
            cout << "You chose Bulbasaur! A wise choice.\n";
            break;
        case Pokemon_Choice::Squirtle:
            cout << "You chose Squirtle! A cool choice.\n";
            break;
        default:
            cout << "Professor Oak: Hmm, that doesn't seem right. Let me choose for you...\n";
            chosen_pokemon = Pokemon_Choice::Charmander;
            cout << "Professor Oak: Just kidding! Let's go with Charmander, the surprise guest!\n";
            break;
    }

    cout << "Ah, an excellent choice!\n";
    cout << "Professor Oak: " << (chosen_pokemon == Pokemon_Choice::Charmander ? "Charmander" : chosen_pokemon == Pokemon_Choice::Bulbasaur ? "Bulbasaur" : "Squirtle") << " and you, " << player_name << ", are going to be the best of friends!\n";
    cout << "But beware, Trainer,\n";
    cout << "this is only the beginning.\n";
    cout << "Your journey is about to unfold.\n";
    cout << "Now let's see if you've got what it takes to keep going!\n";
    cout << "Professor Oak: Your journey begins now!";
    cout << "Get ready to explore the vast world of Pokemon!\n";
    cout << "Good luck, and remember. . . Choose Wisely!\n";

    return chosen_pokemon;
}

int main()
{
    player_name = EnterName();
    WelcomeMessage(player_name);
    captured_pokemon.push_back(ChooseFirstPokemon());
}