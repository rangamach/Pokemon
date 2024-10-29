#include <iostream>

using namespace std;

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

    int choice;
    cin >> choice;

    switch (choice)
    {
        case 1:
            cout << "You chose Bulbasaur! A wise choice.\n";
            break;
        case 2:
            cout << "You chose Charmander! A fiery choice.\n";
            break;
        case 3:
            cout << "You chose Squirtle! A cool choice.\n";
            break;
        default:
            cout << "Invalid choice. Please restart the game.\n";
            break;
    }

    cout << "Ah, an excellent choice!\n";
    cout << "But beware, Trainer,\n";
    cout << "this is only the beginning.\n";
    cout << "Your journey is about to unfold.\n";
    cout << "Now let's see if you've got what it takes to keep going!\n";
    cout << "Good luck, and remember. . . Choose Wisely!\n";
}



int main()
{
    WelcomeMessage(EnterName());
    ChooseFirstPokemon();
}