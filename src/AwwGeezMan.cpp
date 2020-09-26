/*
 _____ ____ _____   ____ _____ ____  
| ____/ ___| ____| |___ \___  | ___| 
|  _|| |   |  _|     __) | / /|___ \ 
| |__| |___| |___   / __/ / /  ___) |
|_____\____|_____| |_____/_/  |____/ 
                                     
 _   _                                         _      _ 
| | | | ___  _ __ ___   _____      _____  _ __| | __ / |
| |_| |/ _ \| '_ ` _ \ / _ \ \ /\ / / _ \| '__| |/ / | |
|  _  | (_) | | | | | |  __/\ V  V / (_) | |  |   <  | |
|_| |_|\___/|_| |_| |_|\___| \_/\_/ \___/|_|  |_|\_\ |_|
 
 
Aww Geez Man: Interdimensional Mortys.

One of Morty C137's favorite phrases is "Aww Geez Man". But, in dimension Z286, there
exists a Morty who says everything backwards.

*/

// Include the Morty header file
#include "Morty.hpp"
#include <iostream>
#include <string>


int main(int ac, char** av) {
	// Parse the command line arguments. The program is executed as
	// ./AwwGeezMan {start} {stop} {dimension}
	// or 
	// ./AwwGeezMan {start} {stop} {step} {dimension}
	int start, stop, step;
	std::string dimension;
	if (ac != 4 and ac != 5) {
		std::cout << "Error: Command line arguments are incorrect. Call program as (1) or (2)"
			<< std::endl;
		std::cout << "(1)\t./AwwGeezMan {start} {stop} {dimension}" << std::endl;
		std::cout << "(2)\t./AwwGeezMan {start} {stop} {step} {dimension}" << std::endl;

		return -1;
	}

	if (ac == 4) {
		start = std::stoi(av[1]);
		stop = std::stoi(av[2]);
		step = 1;
		dimension = av[3];
	}

	if (ac == 5) {
		start = std::stoi(av[1]);
		stop = std::stoi(av[2]);
		step = std::stoi(av[3]);
		dimension = av[4];
	}

	if (dimension != "C137" && dimension != "Z286") {
		std::cout << "ERROR: Unknown dimension!!" << std::endl;
		return -1;
	}

	// Parse the command line arguments
	// Depending on the dimension of the arguments, call the appropriate Morty
	// function
	if (dimension == "C137") {
		if (step != 1) {
			C137::morty(start, stop, step);
		}
		else
			C137::morty(start, stop);
	}
	if (dimension == "Z286") {
		if (step != 1) {
			Z286::morty(start, stop, step);
		}
		else
			Z286::morty(start, stop);
	}
	
	
	
	
	
	
	
	
	return 0;
}
