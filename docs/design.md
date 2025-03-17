# Design 

## mission
 The main goal of this project is to create a music player application that allows users to 
 play, store, and manage digital audio files on their computer system. The application will 
 feature an terminal user interface, allowing users to easily access and manage their music 
 library. The Music Player will be able to play local, and users will be able to add, edit, 
 and delete songs, albums, and artists as well as edit their metadata.

## entities 
Song
    audio file with attributes
    - name
    - album
    - album cover
    - artist(s)
    - track
    - length
    - genre(s)
    - release date

Album
    a collection of song(s) that are released together as cohesive project with attributes
    - name 
    - artist(s)
    - genre(s)
    - length
    - track length
    - list of tracks
    - release date

Artist
    the creator of a album/song with attributes
    - name
    - album(s)
    - genre(s)

Queue
    a fifo collection of songs to be played with attributes
    - list of tracks

Playlist
    a cronilogical collection of song(s) with attributes
    - name
    - list of tracks

Library
    collection of Artists/albums/songs/playlists
    - Artist(s)
    - Album(s)
    - Genre(s)
    - Song(s)
    - playlist(s)
    - search 
    - sort

Player
    handles the audio files 
    - play
    - pause
    - stop


