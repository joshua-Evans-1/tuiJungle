// artist.cpp

#include "artist.h"

// default Constructor
Artist::Artist() : name( "" ), albums( std::vector<Album>() ), 
					songs( std::vector<Song>() ) {}

// paramaterized constructor
Artist::Artist( const std::string& name, const std::vector<Album>& albums,
				 const std::vector<Song>& songs )
	: name( name ), albums( albums ), songs( songs ) {}	

// setters
void Artist::setName( const std::string& name ) {
	this->name = name;
}
void Artist::setAlbums( const std::vector<Album>& albums ) {
	this->albums = albums;
}
void Artist::setSongs( const std::vector<Song>& songs ) {
	this->songs = songs;
}

// getters
const std::string& Artist::getName() {
	return name;
}
const std::vector<Album>& Artist::getAlbums() {
	return albums;
}
const std::vector<Song>& Artist::getSongs() {
	return songs;
}

































