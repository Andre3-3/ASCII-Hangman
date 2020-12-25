#include "GameFunctions.h"
#include <iostream>
#include <string>


std::string difficulty;
int strint;

int DiffSelect()
{
    std::cout << "Select your difficulty:\n";
    std::cout << "1.Easy\n";
    std::cout << "2.Medium\n";
    std::cout << "3.Hard\n";
    std::cout << "Please enter a number 1-3:";
    std::getline(std::cin, difficulty);

    if (difficulty == "1" || difficulty == "2" || difficulty == "3")
    {
        strint = std::stoi(difficulty, nullptr, 10);
        return strint;
    }
    else
    {
        std::cout << "That was not a number between 1-3\n";
        DiffSelect();
    }
}

void Clear()
{
#if defined _WIN32
    system("cls");
    //clrscr(); // including header file : conio.h
#elif defined (__LINUX__) || defined(__gnu_linux__) || defined(__linux__)
    system("clear");
    //std::cout<< u8"\033[2J\033[1;1H"; //Using ANSI Escape Sequences 
#elif defined (__APPLE__)
    system("clear");
#endif
}
