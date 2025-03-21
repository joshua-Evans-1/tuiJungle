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
	for( int i = 0; i < songs.size(); i++ ) {
		this->songs.push_back( songs[ i ] );
	}
}
void Queue::addSongBefore( const Song& song, const Song& before ) {
	for( int i = 0; i < songs.size(); i++ ) {
		if( songs[i] == before ) {
			songs.insert( i, song );
		}
	}
}
void Queue::addSongsBefore( const std::vector<Song>& songs, const Song& before ) {
	for( int i = 0; i < this->songs.size(); i++ ) {
		if( this->songs[i] == before ) {
			for( int j = 0; j < songs.size(); j++ ) {
				this->songs.insert( i + j, songs[j] );
			}
		}
	}
}
void Queue::addSongAfter( const Song& song, const Song& after ) {
	for( int i = 0; i < songs.size(); i++ ) {
		if( songs[i] == after ) {
			songs.insert( i+1, song );
		}
	}

}
void Queue::addSongsAfter( const std::vector<Song>& songs, const Song& after ) {
	for( int i = 0; i < this->songs.size(); i++ ) {
		if( this->songs[i] == after ) {
			for( int j = 0; j < songs.size(); j++ ) {
				this->songs.insert( i + j + 1, songs[j] );
			}
		}
	}

}
void Queue::removeSong( const Song& song ) {
	for( int i = 0; i < songs.size(); i++ ) {
		if( songs[i] == song ) {
			songs.erase( i );
		}
	}
}
void Queue::clearQueue( ) {
	songs.clear();
}

























