#include "Utility.hpp"
#include <iostream>

using namespace std;

using namespace N_Utility;

void Utility::WaitForEnter()
{
    cin.get();
}

void Utility::ClearConsole()
{
    system("cls");
}

void Utility::ClearInputBuffer()
{
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
}