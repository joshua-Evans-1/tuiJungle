// song.test.cpp

#include <iostream>
#include "../lib/muslib/song.h"





void songTest() {

	std::cout << "------------------------------------------------------" << std::endl;
	std::cout << "Running tests on song.cpp" << std::endl;
	
	std::cout << "song creation with empty constructor" << std::endl;
	Song emptySong;
	
	std::cout << "song creation with parameterized constructor" << std::endl;
	Song Kashmir( "Kashmir", "Physical Graffiti", {"Led Zeppelin"}, 6, 8.28, {"Rock", "Hard Rock", "Progressive Rock"}, "1975-02-24" );

	std::cout << "song setter/getter tests" << std::endl;
	emptySong.setName("War Pigs");
	emptySong.setAlbum("Paranoid");
	emptySong.setArtists( { "Black Sabbath" } );
	emptySong.setTrackNum( 1 );
	emptySong.setLength( 7.57 );
	emptySong.setGenres( { "Heavy metal", "Stoner Rock" } );
	emptySong.setReleaseDate("1970-09-18");

	emptySong.getName();
	emptySong.getAlbum();
	emptySong.getArtists();
	emptySong.getTrackNum();
	emptySong.getLength();
	emptySong.getGenres();
	emptySong.getReleaseDate();

	std::cout << "------------------------------------------------------" << std::endl;
}


