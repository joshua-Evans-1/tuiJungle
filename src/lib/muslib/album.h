// album.h
#ifndef ALBUM_H
#define ALBUM_H

#include <string>
#include <vector>
#include "song.h"

class Album {
	public:
		// default constructor
		Album();

		// constructor
		Album( const std::string& name, const std::vector<Song>& songs,
			   const std::vector<std::string>& artists, 
			   const std::vector<std::string>& genres,
			   double length, int tracklength, const std::string& releaseDate );
	
		// setters
		void setName( const std::string& name );
		void setSongs( const std::vector<Song>& songs );
		void setArtists( const std::vector<std::string>& artists );
		void setGenres( const std::vector<std::string>& genres );
		void setLength( double length );
		void setTrackLength( int trackLength );
		void setReleaseDate( const std::string releaseDate );

		// getters
		const std::string& getName();
		const std::vector<Song>& getSongs();
		const std::vector<std::string>& getArtists();
		const std::vector<std::string>& getGenres();
		double getLength();
		int getTrackLength();
		const std::string& getReleaseDate();

	private:
		std::string name;
		std::vector<Song> songs;
		std::vector<std::string> artists;
		std::vector<std::string> genres;
		double length;
		int trackLength;
		std::string releaseDate;
};

#endif

