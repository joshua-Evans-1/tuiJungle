// album.cpp

#include "album.h"

// default constructor
Album::Album() : name( "" ), songs( std::vector<Song>() ), artists( { "" } ), 
				 genres( { "" } ), length( 0.0 ), trackLength( 0 ), releaseDate( "" ) {}

// constructor
Album::Album( const std::string& name, const std::vector<Song>& songs,
			  const std::vector<std::string>& artists, 
			  const std::vector<std::string>& genres,
			  double length, int tracklength, const std::string& releaseDate ) 
	: name( name ), songs( songs ), artists( artists ), genres( genres ), 
	  length( length ), trackLength( trackLength ), releaseDate( releaseDate ) {}

// setters
void Album::setName( const std::string& name ){
	this->name = name;
}
void Album::setSongs( const std::vector<Song>& songs ){
	this->songs = songs;
}
void Album::setArtists( const std::vector<std::string>& artists ){
	this->artists = artists;
}
void Album::setGenres( const std::vector<std::string>& genres ){
	this->genres = genres;
}
void Album::setLength( double length ){
	this->length = length;
}
void Album::setTrackLength( int trackLength ){
	this->trackLength = trackLength;
}
void Album::setReleaseDate( const std::string releaseDate ){
	this->releaseDate = releaseDate;
}

// getters
const std::string& Album::getName(){
	return name;
}
const std::vector<Song>& Album::getSongs(){
	return songs;
}
const std::vector<std::string>& Album::getArtists(){
	return artists;
}
const std::vector<std::string>& Album::getGenres(){
	return genres;
}
double Album::getLength(){
	return length;
}
int Album::getTrackLength(){
	return trackLength;
}
const std::string& Album::getReleaseDate(){
	return releaseDate;
}































