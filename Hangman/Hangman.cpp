// Hangman.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include <string>
#include <fstream>
#include <ctime>
#include "WordFinder.h"
#include "DependencyCheck.h"
#include "GameFunctions.h"


std::string banklocal = u8R"(C:\Users\ANDRE\source\repos\Hangman\x64\Debug\wordlists\)";
std::string line;

struct Frames
{
    const char* frame = "";
};

//define frame objects to store ASCII data

Frames blank;
Frames frame1;
Frames frame2;
Frames frame3;
Frames frame4;
Frames frame5;
Frames frame6;
Frames frame7;
Frames frame8;
Frames frame9;
Frames frame10;
Frames frame11;
Frames titleText;

//creates function to populate the frames with data
void PopulateFrames()
{
    blank.frame = R"(
		
           
           
           
           
           
           
           
           
           
       								)";
	frame1.frame = R"(							
		
           
           
           
           
           
           
           
           
           
       ####################								)";

	frame2.frame = R"(							
           []
           []
           []
           []
           []
           []
           []
           []
           []
       ####################						)";
	frame3.frame = R"(							
           []========
           []
           []
           []
           []
           []
           []
           []
           []
       ####################							)";
	frame4.frame = R"(							
           []========]
           []    / 
           []  /   
           []/     
           []      
           []      
           []      
           []
           []
       ####################						)";
	frame5.frame = R"(							
           []========]
           []    /   |
           []  /     |
           []/     
           []      
           []      
           []      
           []
           []
       ####################						)";
	frame6.frame = R"(							
           []========]
           []    /   |
           []  /     |
           []/      (_)
           []       
           []      
           []       
           []
           []
       ####################							)";
	frame7.frame = R"(							
           []========]
           []    /   |
           []  /     |
           []/      (_)
           []        |
           []        | 
           []       
           []
           []
       ####################							)";
	frame8.frame = R"(							
           []========]
           []    /   |
           []  /     |
           []/      (_)
           []       _|
           []      / | 
           []     
           []
           []
       ####################							)";
	frame9.frame = R"(							
           []========]
           []    /   |
           []  /     |
           []/      (_)
           []       _|_
           []      / | \
           []       
           []
           []
       ####################							)";
	frame10.frame = R"(							
           []========]
           []    /   |
           []  /     |
           []/      (_)
           []       _|_
           []      / | \
           []       / 
           []
           []
       ####################							)";
	frame11.frame = R"(							
           []========]
           []    /   |
           []  /     |
           []/      (_)
           []       _|_
           []      / | \
           []       / \
           []
           []
       ####################)";
    titleText.frame = R"(
  _    _                     __  __             
 | |  | |                   |  \/  |            
 | |__| | __ _ _ __   __ _  | \  / | __ _ _ __  
 |  __  |/ _` | '_ \ / _` | | |\/| |/ _` | '_ \ 
 | |  | | (_| | | | | (_| | | |  | | (_| | | | |
 |_|  |_|\__,_|_| |_|\__, | |_|  |_|\__,_|_| |_|
                      __/ |                     
                     |___/                      )";
	return;
} 

//find word function can select a random word from one of 3 data bases.
std::string findWord(int level)
{

	return("test");
}

void inGame()
{
    std::cout << titleText.frame << '\n';
    std::cout << frame11.frame << '\n' << '\n';

    std::string word = WordFinder(DiffSelect(), banklocal);
    Clear();
    std::cout << blank.frame << '\n';

    

}

//entry point.
int main()
{
	if (!CheckWordLists(banklocal))
	{
		std::cout << "An unexpected exeption has occured, Exiting!";
		exit(3);
	}
	
    PopulateFrames();
    inGame();
//	std::cout << WordFinder(1, banklocal);
	//findWord(1);
}


