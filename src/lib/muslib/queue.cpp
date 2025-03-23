// queue.cpp
#include "queue.h"

// default constructor
Queue::Queue() : songs( std::vector<Song>() ) {}

// parameterized constructor
Queue::Queue( const std::vector<Song>& songs ) : songs( songs ) {}

// setters
void Queue::setSongs( const std::vector<Song>& songs ) {
	this->songs = songs;
}

// getters
const std::vector<Song>& Queue::getSongs(  ) {
	return songs;
}

// member functions
void Queue::addSong( const Song& song ) {
	songs.push_back( song );
}
void Queue::addSongs( const std::vector<Song>& songs ) {
	for( unsigned i = 0; i < songs.size(); i++ ) {
		this->songs.push_back( songs[ i ] );
	}
}
void Queue::addSongBefore( const Song& song, const Song& before ) {
	for( unsigned i = 0; i < songs.size(); i++ ) {
		if( songs[i] == before ) {
			songs.insert( songs.begin() + i, song );
		}
	}
}
void Queue::addSongsBefore( const std::vector<Song>& songs, const Song& before ) {
	for( unsigned i = 0; i < this->songs.size(); i++ ) {
		if( this->songs[i] == before ) {
			for( unsigned j = 0; j < songs.size(); j++ ) {
				this->songs.insert( songs.begin() + i + j, songs[j] );
			}
		}
	}
}
void Queue::addSongAfter( const Song& song, const Song& after ) {
	for( unsigned i = 0; i < songs.size(); i++ ) {
		if( songs[i] == after ) {
			songs.insert( songs.begin() + i + 1, song );
		}
	}

}
void Queue::addSongsAfter( const std::vector<Song>& songs, const Song& after ) {
	for( unsigned i = 0; i < this->songs.size(); i++ ) {
		if( this->songs[i] == after ) {
			for( unsigned j = 0; j < songs.size(); j++ ) {
				this->songs.insert( songs.begin() + i + j + 1, songs[j] );
			}
		}
	}

}
void Queue::removeSong( const Song& song ) {
	for( unsigned i = 0; i < songs.size(); i++ ) {
		if( songs[i] == song ) {
			songs.erase( songs.begin() + i );
		}
	}
}
void Queue::clearQueue( ) {
	songs.clear();
}

























