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
	int lineRand = std::rand() % lines + 0;
	for (int lineno = 0; std::getline(file, line) && lineno < lines; lineno++)
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
	std::string selectedwrd;
	if (difficulty <= 1)
	{
		std::ifstream file(locals + "easywl.dat");
		//std::cout << WordCounter(file);
		std::ifstream countfile(locals + "easywl.dat"); // dont know why I have to do this? I think the WordCounter function changes the file definition.
		selectedwrd = WordPicker(file, WordCounter(countfile));
	}
	else if (difficulty == 2)
	{
		std::ifstream file(locals + "mediumwl.dat");
		//std::cout << WordCounter(file);
		std::ifstream countfile(locals + "mediumwl.dat"); // dont know why I have to do this? I think the WordCounter function changes the file definition.
		selectedwrd = WordPicker(file, WordCounter(countfile));
	}
	else
	{
		std::ifstream file(locals + "hardwl.dat");
		//std::cout << WordCounter(file);
		std::ifstream countfile(locals + "hard.dat"); // dont know why I have to do this? I think the WordCounter function changes the file definition.
		selectedwrd = WordPicker(file, WordCounter(countfile));
	}
	return(selectedwrd);
}

