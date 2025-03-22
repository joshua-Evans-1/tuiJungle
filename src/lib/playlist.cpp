// playlist.cpp
#include "playlist.h"

// default constructor
Playlist() : name( "" ), songs( std::vector<Song>() ) ()

// parameterized constructor
playlist( const std::string& name, const std::vector<Song>& songs ) 
	: name( name ), songs( songs ) {}

// setters
void Playlist::setName( const std::string& name ) {
	this->name = name;
}
void Playlist::setSongs( const std::vector<Song>& song ) {
	this->songs = songs;
}

// getters
const std::string& Playlist::getName() {
	return name;
}
const std::vector<Song>& Playlist::getSongs() {
	return songs;
}

// methods
void Playlist::addSong( const Song& song ) {
	songs.push_back( song );
}
void Playlist::addSongs( const std::vector<Song>& songs ) {
	for( int i = 0; i < songs.size(); i++ ) {
		this->songs.push_back( songs[i] );
	}
}
void Playlist::removeSong( const Song& song ) {
	for( int i = 0; i < songs.size(); i++ ) {
		if( songs[i] == song ) {
			songs.erase( i );
		}
	}
}
void Playlist::removeSongs( const std::vector<Song>& songs ) {
	for( int i = 0; i < songs.size(); i++ ) {
		for( int j = 0; j < this->songs.size(); j++) {
			if( songs[i] == this->songs[j] ) {
				this->songs.erase( j );
			}
		}
	}
}
void Playlist::clearPlaylist( ) {
	songs.clear();
}






















