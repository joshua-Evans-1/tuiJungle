// song.cpp

#include "song.h"

// default constructor
Song::Song() : name( "" ), album( "" ), artists( { "" } ), trackNum( 0 ), 
			   length( 0.0 ), genres( { "" } ), releaseDate( "" ) {}

// constructor
Song::Song( const std::string& name, const std::string& album, 
			const std::vector<std::string>& artists, int trackNum, 
			double length, const std::vector<std::string>& genres, 
			const std::string& releaseDate )
	: name( name ), album( album ), artists( artists ), trackNum( trackNum ), 
	  length( length ), genres( genres ), releaseDate( releaseDate ) {}

// setters
void Song::setName( const std::string& name ){
	this->name = name;
}
void Song::setAlbum( const std::string& album ){
	this->album = album;
}
void Song::setArtists( const std::vector<std::string>& artists ){
	this->artists = artists;
}
void Song::setTrackNum( int trackNum ){
	this->trackNum = trackNum;
}
void Song::setLength( double length ){
	this->length = length;
}
void Song::setGenres( const std::vector<std::string>& genres ){
	this->genres = genres;
}
void Song::setReleaseDate( const std::string& releaseDate ){
	this->releaseDate = releaseDate;
}

// getters
const std::string& Song::getName( ){
	return name;
}
const std::string& Song::getAlbum( ){
	return album;
}
const std::vector<std::string>& Song::getArtists( ){
	return artists;
}
int Song::getTrackNum( ){
	return trackNum;
}
double Song::getLength( ){
	return length;
}
const std::vector<std::string>& Song::getGenres( ){
	return genres;
}
const std::string& Song::getReleaseDate( ){
	return releaseDate;
}

// operator overload
bool Song::operator==( const Song& compSong ) const {
	return name == compSong.name &&
		   album == compSong.album &&
		   artists == compSong.artists &&
		   trackNum == compSong.trackNum &&
		   length == compSong.length &&
		   genres == compSong.genres &&
		   releaseDate == releaseDate; 
}


