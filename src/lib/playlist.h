// playlist.h
#ifndef PLAYLIST_H
#define PLAYLIST_H

#include <string>
#include <vector>
#include "Song.h"

class Playlist {
	public:
		// default constructor
		Playlist();
		
		// parameterized constructor
		playlist( const std::string& name, const std::vector<Song>& songs );
		
		// setters
		void setName( const std::string& name );
		void setSongs( const std::vector<Song>& song );
		
		// getters
		const std::string& getName();
		const std::vector<Song>& getSongs();

		// methods
		void addSong( const Song& song );
		void addSongs( const std::vector<Song>& songs );
		void removeSong( const Song& song );
		void removeSongs( const std::vector<Song>& songs );
		void clearPlaylist( );
	
	private:
		// feilds
		std::string name;
		std::vector<Song> songs;
}
#endif
