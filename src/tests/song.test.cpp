// song.test.cpp

#include <iostream>
#include "../lib/song.h"

void songTest() {

	std::cout << "------------------------------------------------------" << std::endl;
	std::cout << "Running tests on song.cpp" << std::endl;
	
	std::cout << "song creation with empty constructor" << std::endl;
	Song emptySong;
	std::cout << "song creation with parameterized constructor" << std::endl;
	Song Kashmir( "Kashmir", "Physical Graffiti", {"Led Zeppelin"}, 6, 8.28, {"Rock", "Hard Rock", "Progressive Rock"}, "1975-02-24" );

	std::cout << "------------------------------------------------------" << std::endl;
}


