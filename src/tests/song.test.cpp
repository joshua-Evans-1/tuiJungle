#include <iostream>
#include "../lib/song.h"

int main() {

	std::cout << "Running tests on song.cpp" << std::endl;
	
	std::cout << "song creation with empty constructor" << std::endl;
	Song();
	std::cout << "song creation with parameterized constructor" << std::endl;
	Song Kashmir( "Kashmir", "Physical Graffiti", {"Led Zeppelin"}, 6, 8.28, {"Rock", "Hard Rock", "Progressive Rock"}, "1975-02-24" );

	return 0;	
}


