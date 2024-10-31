#include <iostream>
#include<string>

using namespace std;

//Enum Classes
enum class Pokemon_Choice
{
    Charmander = 1,
    Bulbasaur,
    Squirtle,
    Pikachu
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

//Classes
class Pokemon
{
public:
    string name;
    Pokemon_Types type;
    int health;

    Pokemon()
    {
        name = "Unknown";
        type = Pokemon_Types::Normal_Type;
        health = 50;
        cout << "A new Pokemon has been created with the default constructor!\n";
    }

    Pokemon(string poke_name, Pokemon_Types poke_type, int poke_health)
    {
        name = poke_name;
        type = poke_type;
        health = poke_health;
    }

    Pokemon(const Pokemon &other)
    {
        name = other.name;
        type = other.type;
        health = other.health;
        cout << "A new Pokemon has been copied from " << other.name << "!\n";
    }
    
    ~Pokemon()
    {
        cout << name << " has been released.\n";
    }

    void Attack()
    {
        cout << name << " attacks with a powerful move!\n";
    }
};

class Player
{
    public:
        string name;
        Pokemon captured_pokemon;

        Player()
        {
            captured_pokemon = Pokemon();
        }

        Player(string playerName, Pokemon playerCapturedPokemon)
        {
            name = playerName;
            captured_pokemon = playerCapturedPokemon;
        }
        void ChosenPokemon(int choice)
        {
            switch ((Pokemon_Choice)choice)
            {
            case Pokemon_Choice::Charmander:
                captured_pokemon = Pokemon("Charmander", Pokemon_Types::Fire_Type, 100);
                break;
            case Pokemon_Choice::Bulbasaur:
                captured_pokemon = Pokemon("Bulbasaur", Pokemon_Types::Grass_Type, 100);
                break;
            case Pokemon_Choice::Squirtle:
                captured_pokemon = Pokemon("Squirtle", Pokemon_Types::Water_Type, 100);
                break;
            default:
                captured_pokemon = Pokemon("Pikachu", Pokemon_Types::Electric_Type, 100);
                break;
            }
            cout << name << " chose " << captured_pokemon.name << "\n";
        }
};

class ProfessorOak
{
    public:
        string name;
        void GreetPlayer(Player& player)
        {
            cout << name << ": Welcome to the world of Pokemon! I am Professor Oak.\n";
            cout << name << ": People call me the Pokemon Professor!\n";
            cout << name << ": But enough about me. Let's talk about you!\n";
        }

        ProfessorOak(string prof_name)
        {
            name = prof_name;
        }

        void PlayerIntro(Player& player)
        {
            cout << name << ": First, tell me what is your name?\n";
            getline(cin, player.name);
            cout << name << ": Ah, " << player.name << "! What a fantastic name!\n";
            cout << name << ": You must be eager to start your adventure. But first, you will need a Pokemon of your own!\n";
        }
        void FirstPokemon(Player& player)
        {
            int choice;
            cout << name << ": I have three Pokemon here with me. They are all quite feisty!\n";
            cout << name << ": Choose wisely...\n"; 
            cout << name << ": 1. Charmander - The fire type. A real hothead!\n";
            cout << name << ": 2. Bulbasaur - The grass type. Calm and collected!\n";
            cout << name << ": 3. Squirtle - The water type. Cool as a cucumber!\n";

            cout << name << ": So, which one will it be? Enter the number of your choice:";
            cin >> choice;
            player.ChosenPokemon(choice);
        }
};

int main()
{
    // Task 1: Test default and parameterized constructors
    Pokemon defaultPokemon; // Using default constructor
    Pokemon charmander("Charmander", Pokemon_Types::Fire_Type, 100); // Using parameterized constructor

    cout << "Pokemon Details:\n";
    cout << "Name: " << defaultPokemon.name << "\nType: " << (int)defaultPokemon.type << "\nHealth: " << defaultPokemon.health << "\n";
    cout << "Name: " << charmander.name << "\nType: " << (int)charmander.type << "\nHealth: " << charmander.health << "\n";

    // Task 2: Test the copy constructor
    Pokemon bulbasaur("Bulbasaur", Pokemon_Types::Grass_Type, 100); // Create a Pokemon
    Pokemon bulbasaurCopy = bulbasaur; // Copy the Pokemon
    cout << "Original Pokemon Health: " << bulbasaur.health << "\n";
    cout << "Copied Pokemon Health: " << bulbasaurCopy.health << "\n";

    // Modify the copy
    bulbasaurCopy.health = 80;
    cout << "After Modification:\n";
    cout << "Original Pokemon Health: " << bulbasaur.health << "\n";
    cout << "Copied Pokemon Health: " << bulbasaurCopy.health << "\n";

    // Task 3: Test the destructor
    {
        Pokemon squirtle("Squirtle", Pokemon_Types::Water_Type, 100); // Pokemon will be destroyed at the end of this scope
    } // Destructor will be called here
    ProfessorOak Oak("Professor Oak");
    Pokemon placeholderPokemon("Placeholder", Pokemon_Types::Fire_Type, 0);
    Player player("", placeholderPokemon);

    placeholderPokemon.name = "Pikachu";
    placeholderPokemon.type = Pokemon_Types::Electric_Type;
    placeholderPokemon.health = 40;

    player.name = "Trainer";
    Oak.name = "Professor Oak";

    Oak.GreetPlayer(player);
    Oak.PlayerIntro(player);
    Oak.FirstPokemon(player);

    cout << "Professor Oak: " << player.captured_pokemon.name << " and you, " << player.name << ", are going to be the best of friends!\n";
    cout << "Professor Oak: Your journey begins now! Get ready to explore the vast world of Pokemon!\n";
}