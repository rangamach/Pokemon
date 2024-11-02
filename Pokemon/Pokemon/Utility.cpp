#include "Utility.hpp"
#include <iostream>

using namespace std;

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