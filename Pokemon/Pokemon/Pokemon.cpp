#include <iostream>

using namespace std;

string player_name;

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

static void ChooseFirstPokemon()
{
    cout << "Welcome to the world of Pokemon! I am Professor Oak.\n";
    cout << "You can choose one of the following Pokemon:\n";
    cout << "1. Bulbasaur\n2. Charmander\n3. Squirtle\n";
    cout << "Which Pokemon would you like to choose? Enter the number: ";

    string chosen_pokemon;
    int choice;
    cin >> choice;

    switch (choice)
    {
        case 1:
            chosen_pokemon = "Bulbasaur";
            cout << "You chose Bulbasaur! A wise choice.\n";
            break;
        case 2:
            chosen_pokemon = "Charmander";
            cout << "You chose Charmander! A fiery choice.\n";
            break;
        case 3:
            chosen_pokemon = "Squirtle";
            cout << "You chose Squirtle! A cool choice.\n";
            break;
        default:
            cout << "Professor Oak: Hmm, that doesn't seem right. Let me choose for you...\n";
            chosen_pokemon = "Pikachu";
            cout << "Professor Oak: Just kidding! Let's go with Pikachu, the surprise guest!\n";
            break;
    }

    cout << "Ah, an excellent choice!\n";
    cout << "Professor Oak: " << chosen_pokemon << " and you, "
        << player_name << ", are going to be the best of friends!\n";
    cout << "But beware, Trainer,\n";
    cout << "this is only the beginning.\n";
    cout << "Your journey is about to unfold.\n";
    cout << "Now let's see if you've got what it takes to keep going!\n";
    cout << "Professor Oak: Your journey begins now!";
    cout << "Get ready to explore the vast world of Pokemon!\n";
    cout << "Good luck, and remember. . . Choose Wisely!\n";
}



int main()
{
    player_name = EnterName();
    WelcomeMessage(player_name);
    ChooseFirstPokemon();
}