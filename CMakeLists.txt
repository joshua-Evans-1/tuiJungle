# cmake version 
cmake_minimum_required( VERSION 3.10 )

# set c++ standard to 20
set( CMAKE_CXX_STANDARD 20 )
set( CMAKE_CXX_STANDARD_REQUIRED True )

# project name
project( TUIJungle VERSION 1.0 )

# sets flags 
set( CMAKE_CXX_FLAGS "-g -Wall" )

# set muslib source files
set( MUSLIB_SRC
    src/lib/muslib/song.cpp
    src/lib/muslib/album.cpp
    src/lib/muslib/artist.cpp
    src/lib/muslib/playlist.cpp
    src/lib/muslib/queue.cpp
)

# create muslib library
add_library( muslib SHARED ${MUSLIB_SRC} )

# main entrypoint 
add_executable( tuiJungle src/root/main.cpp )

# test entrypoint
add_executable( testJungle src/tests/test.cpp )

# link muslib library
target_link_libraries( testJungle muslib )

# link muslib library
target_link_libraries( tuiJungle muslib )

# Use FetchContent to download FTXUI
include(FetchContent)

FetchContent_Declare(
    ftxui
    GIT_REPOSITORY https://github.com/ArthurSonzogni/FTXUI.git
	GIT_TAG main
)

# Make FTXUI available as a CMake target
FetchContent_MakeAvailable( ftxui )

# Link FTXUI to your executables
target_link_libraries( tuiJungle muslib ftxui )
target_link_libraries( testJungle 
					   ftxui::screen
					   ftxui::dom 
					   ftxui::component )

