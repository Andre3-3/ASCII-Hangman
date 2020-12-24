#include "WordFinder.h"
#include <string>
#include <iostream>
#include <fstream>
#include <ctime>

int WordCounter(std::ifstream& file)
{
	int numLines = 0;
	std::string unused;
	while (std::getline(file, unused))
	{
		++numLines;
	}
		
	
	return(numLines);
}

std::string WordPicker(std::ifstream& file, int lines)
{
	std::string line;
	srand(std::time(0));
	int lineRand = std::rand() % lines + 1;
	for (int lineno = 1; std::getline(file, line) && lineno < lines; lineno++)
	{
		if (lineno == lineRand)
		{
		//	std::cout << line;
			return(line);
		}
	}
	std::cout << "An unexpected error has occured, Exiting!";
	exit(4);
}

std::string WordFinder(int difficulty, std::string locals)
{
	if (difficulty <= 1)
	{
		std::ifstream file(locals + "easywl.dat");
		std::cout << WordPicker(file, 10);
	}
	else if (difficulty == 2)
	{
		//fopen("wordlists/mediumwl.dat","r");
	}
	else
	{
		//fopen("wordlists/hardwl.dat","r");
	}
	return("test");
}

