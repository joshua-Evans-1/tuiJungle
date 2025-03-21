// song.h
#ifndef SONG_H
#define SONG_H

#include <string>
#include <vector>

class Song {
		public:
			// default constructor
			Song();
			
			// constructor
			Song( const std::string& name, const std::string& album, 
				  const std::vector<std::string>& artists, int trackNum, 
				  double length, const std::vector<std::string>& genres, 
				  const std::string& releaseDate );
			
			// setters
			void setName( const std::string& name );
			void setAlbum( const std::string& album );
			void setArtists( const std::vector<std::string>& artists );
			void setTrackNum( int trackNum );
			void setLength( double length );
			void setGenres( const std::vector<std::string>& genres );
			void setReleaseDate( const std::string& releaseDate );
			
			// getters
			const std::string& getName( );
			const std::string& getAlbum( );
			const std::vector<std::string>& getArtists( );
			int getTrackNum( );
			double getLength( );
			const std::vector<std::string>& getGenres( );
			const std::string& getReleaseDate( );

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

