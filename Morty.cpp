/* 
 __  __            _                                
|  \/  | ___  _ __| |_ _   _        ___ _ __  _ __  
| |\/| |/ _ \| '__| __| | | |      / __| '_ \| '_ \ 
| |  | | (_) | |  | |_| |_| |  _  | (__| |_) | |_) |
|_|  |_|\___/|_|   \__|\__, | (_)  \___| .__/| .__/ 
                       |___/           |_|   |_|  
*/

// Include the Morty header file
#include "Morty.hpp"
#include <iostream>
#include <string>

// =========================================================================== // 
//          Define functions enclosed in Namespace C137 here 
	void C137::morty(int a, int b)
	{
		C137::morty(a, b, 1);
	}

	void C137::morty(int a, int b, int c)
	{
		for (int i = a; i <= b; i += c) {
			if (i % 15 == 0)
				std::cout << i << ": Aww Geez Man" << std::endl;
			else if (i % 3 == 0)
				std::cout << i << ": Aww" << std::endl;
			else if (i % 5 == 0)
				std::cout << i << ": Geez" << std::endl;
			else
				std::cout << i << ": " << std::endl;
		}
	}
// =========================================================================== // 

// =========================================================================== // 
//          Define functions enclosed in Namespace Z286 here 


	void Z286::morty(int a, int b)
	{
		Z286::morty(a, b, 1);
	}

	void Z286::morty(int a, int b, int c)
	{
		for (int i = a; i <= b; i += c) {
			if (i % 15 == 0)
				std::cout << i << ": naM zeeG wwA" << std::endl;
			else if (i % 3 == 0)
				std::cout << i << ": wwA" << std::endl;
			else if (i % 5 == 0)
				std::cout << i << ": zeeG" << std::endl;
			else
				std::cout << i << ": " << std::endl;
		}
	}
	// =========================================================================== // 