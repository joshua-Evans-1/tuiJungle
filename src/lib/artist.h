// artist.h

#ifndef ARTIST_H
#define ARTIST_H

#include <string>
#include <vector>
#include "album.h"
#include "song.h"

class Artist {
	public:
		// default Constructor
		Artist();
		// paramaterized constructor
		Artist( const std::string& name, const std::vector<Album>& albums,
				const std::vector<Song>& songs );
		
		// setters
		void setName( const std::string& name );
		void setAlbums( const std::vector<Album>& albums );
		void setSongs( const std::vector<Song>& songs );
		
		// getters
		const std::string& getName();
		const std::vector<Album>& getAlbums();
		const std::vector<Song>& getSongs();

	private:
		// feilds
		std::string name;
		std::vector<Album> albums;
		std::vector<Song> songs;
};

#endif
