#include <iostream>
#include<string>

using namespace std;

void WaitForEnter()
{
    cin.get();
}

void ClearConsole()
{
    system("cls");
}

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
    }
    
    ~Pokemon()
    {
 
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
            WaitForEnter();
            cout << name << ": People call me the Pokemon Professor!\n";
            WaitForEnter();
            cout << name << ": But enough about me. Let's talk about you!\n";
            WaitForEnter();
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
            WaitForEnter();
            cout << name << ": You must be eager to start your adventure. But first, you will need a Pokemon of your own!\n";
            WaitForEnter();
        }
        void FirstPokemon(Player& player)
        {
            int choice;
            cout << name << ": I have three Pokemon here with me. They are all quite feisty!\n";
            WaitForEnter();
            cout << name << ": Choose wisely...\n"; 
            cout << name << ": 1. Charmander - The fire type. A real hothead!\n";
            cout << name << ": 2. Bulbasaur - The grass type. Calm and collected!\n";
            cout << name << ": 3. Squirtle - The water type. Cool as a cucumber!\n";

            cout << name << ": So, which one will it be? Enter the number of your choice:";
            cin >> choice;
            player.ChosenPokemon(choice);

            cout << "Professor Oak: " << player.captured_pokemon.name << " and you, " << player.name << ", are going to be the best of friends!\n";
            WaitForEnter();
            WaitForEnter();
        }

        void ExplainMainQuest(Player player)
        {
            ClearConsole();
            cout << name << ": Ok, " << player.name << ", I am about to explain you about your upcoming grand adventure.\n";
            WaitForEnter();
            cout << name << ": You see, becoming a Pokemon Master is no easy feat, it takes courage, wisdom, and a bit of luck.\n";
            WaitForEnter();
            cout << name << ": Your mission, should you choose to accept it (and trust me, you really don’t have a choice) is to collect all the Pokemon Badges and conquer the Pokemon League. \n";
            WaitForEnter();
            cout << player.name << ": Wait... that sounds a lot like every other Pokemon game out there.\n";
            WaitForEnter();
            cout << name << ": Shhh! Don't break the fourth wall " << player.name << "! This is serious business.\n";
            WaitForEnter();
            cout << name << ": To achieve this, you’ll need to battle wild Pokémon, challenge gym leaders, and of course, keep your Pokémon healthy at the PokeCenter.\n";
            WaitForEnter();
            cout << name << ": Along the way, you'll capture new Pokemon to strengthen your team. Just remember—there’s a limit to how many Pokémon you can carry, so choose wisely!\n";
            WaitForEnter();
            cout << player.name << ": Sounds like a walk in the park... right?\n";
            WaitForEnter();
            cout << name << ": Hah! That’s what they all say! But beware, young Trainer, the path to victory is fraught with challenges. And if you lose a battle... well, let’s just say you'll be starting from square one.\n";
            WaitForEnter();
            cout << name << ": So, what do you say? Are you ready to become the next Pokemon Champion?\n";
            WaitForEnter();
            cout << player.name << ": Ready as I will ever be, Professor!\n";
            WaitForEnter();
            cout << name << ":  That’s the spirit! Now, your journey begins.\n";
            WaitForEnter();
            cout << name << ": But first... let's just pretend I didn't forget to set up the actual game loop... Ahem, onwards!\n";
            WaitForEnter();
        }
};

void GameLoop(Player &player)
{
    int choice;
    bool keepPlaying = true;
    ClearConsole();
    cout << "\nWhat would you like to do next, " << player.name << "?\n";
    cout << "1. Battle Wild Pokemon\n";
    cout << "2. Visit PokeCenter\n";
    cout << "3. Challenge Gyms\n";
    cout << "4. Enter Pokemon League\n";
    cout << "5. Quit\n";
    cout << "Enter your choice: ";
    cin >> choice;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    switch (choice)
    {
    case 1:
        cout << "You look around... but all the wild Pokémon are on vacation. Maybe try again later?\n";
        break;
    case 2:
        cout << "You head to the PokeCenter, but Nurse Joy is out on a coffee break. Guess your Pokemon will have to tough it out for now!\n";
        break;
    case 3:
        cout << "You march up to the Gym, but it's closed for renovations. Seems like even Gym Leaders need a break!\n";
        break;
    case 4:
        cout << "You boldly step towards the Pokémon League... but the gatekeeper laughs and says, 'Maybe next time, champ!'\n";
        break;
    case 5:
        cout << "You try to quit, but Professor Oak's voice echoes: 'There's no quitting in Pokémon training!'\n";
        cout << "Are you sure you want to quit? (y/n): ";
        char quitChoice;
        cin >> quitChoice;
        if (quitChoice == 'y' || quitChoice == 'Y')
            keepPlaying = false;
        break;
    default:
        cout << "That's not a valid choice. Try again!\n";
        break;
    };
    WaitForEnter();
    cout << "Goodbye, " << player.name << "! Thanks for playing!\n";
}

int main()
{
    Pokemon charmander("Charmander", Pokemon_Types::Fire_Type, 100); // Using parameterized constructor


    ProfessorOak Oak("Professor Oak");
    Player player("Ash", charmander);

    Oak.GreetPlayer(player);
    Oak.PlayerIntro(player);
    Oak.FirstPokemon(player);

    Oak.ExplainMainQuest(player);

    GameLoop(player);
}