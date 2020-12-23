#include "DependencyCheck.h"
#include <fstream>
#include <iostream>

std::int8_t CheckWordLists(std::string location)
{
    std::fstream Easy;
    std::fstream Medium;
    std::fstream Hard;
      Easy.open(location + "easywl.dat");
      Medium.open(location + "mediumwl.dat");
      Hard.open(location + "hardwl.dat");
    if (!Easy && !Medium && !Hard) {
        std::cout << "Unable to open all data files check instalation, probably path issue.\n";
        std::cout << "Automaticly exiting.\n";
        exit(1); // terminate with error
    }
    else if (!Easy or !Medium or !Hard)
    {
        std::cout << "Unable to open some data files check instalation, possible missing data file.\n";
        std::cout << "Automaticly exiting.\n";
        exit(2); // terminate with error
    }
    else
    {
        return(true);
    }
}