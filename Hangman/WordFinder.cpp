#include "WordFinder.h"
#include <string>
#include <iostream>
#include <fstream>

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

}

std::string WordFinder(int difficulty, std::string locals)
{
	if (difficulty <= 1)
	{
		std::ifstream file(locals + "easywl.dat");
		WordPicker(file, WordCounter(file));

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

