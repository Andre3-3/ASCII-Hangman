// Hangman.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include <string>
#include <fstream>
#include <ctime>

std::string banklocal = u8R"(C:\Users\ANDRE\source\repos\Hangman\x64\Release\wordlists\)";
std::string currentstring = "test";

struct Frames
{
    const char* frame = "";
};

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

void PopulateFrames()
{
	frame1.frame = R"(							
		
		
		
		
		
		
		
		
		
	####################							)";

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
	####################							)";
	frame3.frame = R"(							
		 []==========
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
		 []==========
		 []    /
		 []  /
		 []/ 
		 []
		 []
		 []
		 []
	     []	
	####################							)";
	frame5.frame = R"(							
		 []==========]
		 []    /     |
		 []  /       |
		 []/        
		 []
		 []
		 []
		 []
	     []	
	####################							)";
	frame6.frame = R"(							
		 []==========]
		 []    /     |
		 []  /       |
		 []/		(_)
		 []
		 []
		 []
		 []
	     []	
	####################							)";
	frame7.frame = R"(							
		 []==========]
		 []    /     |
		 []  /       |
		 []/		(_)
		 []          |
		 []		     | 
		 []          
		 []
	     []	
	####################							)";
	frame8.frame = R"(							
		 []==========]
		 []    /     |
		 []  /       |
		 []/		(_)
		 []         _|
		 []		   / | 
		 []         
		 []
	     []	
	####################							)";
	frame9.frame = R"(							
		 []==========]
		 []    /     |
		 []  /       |
		 []/		(_)
		 []         _|_
		 []		   / | \
		 []          
		 []
	     []	
	####################							)";
	frame10.frame = R"(							
		 []==========]
		 []    /     |
		 []  /       |
		 []/		(_)
		 []         _|_
		 []		   / | \
		 []         / 
		 []
	     []	
	####################							)";
	frame11.frame = R"(							
		 []==========]
		 []    /     |
		 []  /       |
		 []/		(_)
		 []         _|_
		 []		   / | \
		 []         / \
		 []
	     []	
	####################							)";
	return;
}

std::fstream& GotoLine(std::fstream& file, unsigned int num) {
	file.seekg(std::ios::beg);
	for (int i = 0; i < num - 1; ++i) {
		file.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	}
	return file;
}

std::string findWord(int level)
{
	int selectnum;
	std::string line;
	std::string word;
	int linenum = 0;
	if (level <= 1)
	{

		std::fstream file(banklocal + "easywl.dat");
		while (std::getline(file, line))
			linenum++;
		//fopen("wordlists/easywl.dat", "r");
		std::cout << linenum;
		selectnum = rand() % linenum + 1;
		std::cout << '\n' << selectnum;
		GotoLine(file, selectnum);
		file >> currentstring;
		std::cout << currentstring;
		//file.close();
	}
	else if (level == 2)
	{
		//fopen("wordlists/mediumwl.dat","r");
	}
	else
	{
		//fopen("wordlists/hardwl.dat","r");
	}
	return("test");
}

int main()
{
	srand(time(NULL));
    PopulateFrames();
    std::cout << frame1.frame;
	findWord(1);
}


