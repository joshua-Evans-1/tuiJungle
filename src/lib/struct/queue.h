// queue.h
#ifndef QUEUE_H
#define QUEUE_H

#include <vector>
#include "song.h"

class Queue {
	public:
		// default constructor
		Queue();
		
		// parameterized constructor
		Queue( const std::vector<Song>& songs );

		// setters
		void setSongs( const std::vector<Song>& songs );

		// getters
		const std::vector<Song>& getSongs(  );

		// member functions
		void addSong( const Song& song );
		void addSongs( const std::vector<Song>& songs );
		void addSongBefore( const Song& song, const Song& before );
		void addSongsBefore( const std::vector<Song>& songs, const Song& before );
		void addSongAfter( const Song& song, const Song& after );
		void addSongsAfter( const std::vector<Song>& songs, const Song& after );
		void removeSong( const Song& song );
		void clearQueue( );

	private:
		// feilds
		std::vector<Song> songs;
};

#endif
