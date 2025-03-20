// song.h
#ifndef SONG_H
#define SONG_H

#include <string>
#include <vector>

class Song {
		public:
			Song();
			// constructor
			Song( const std::string& name, const std::string& album, 
				  const std::vector<std::string>& artists, int trackNum, 
				  double length, const std::vector<std::string>& genres, 
				  const std::string& releaseDate );
			
			// setters
			void setName( std::string& name );
			void setAlbum( std::string& album );
			void setArtists( std::vector<std::string>& artists );
			void setTrackNum( int trackNum );
			void setLength( double length );
			void setGenres( std::vector<std::string>& genres );
			void setReleaseDate( std::string& releaseDate );
			
			// getters
			std::string getName( );
			std::string getAlbum( );
			std::vector<std::string> getArtists( );
			int getTrackNum( );
			double getLength( );
			std::vector<std::string> getGenres( );
			std::string getReleaseDate( );
		
		private:
			// feilds
			std::string name;
			std::string album;
			std::vector<std::string> artists;
			int trackNum;
			double length;
			std::vector<std::string> genres;
			std::string releaseDate;
};

#endif
