# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.30

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /nix/store/6rw69664ky985vxckygaypgk6v7aav4l-cmake-3.30.5/bin/cmake

# The command to remove a file.
RM = /nix/store/6rw69664ky985vxckygaypgk6v7aav4l-cmake-3.30.5/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/vimjongun/projects/programming/tuiJungle

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/vimjongun/projects/programming/tuiJungle/src/build

# Include any dependencies generated for this target.
include CMakeFiles/muslib.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/muslib.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/muslib.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/muslib.dir/flags.make

CMakeFiles/muslib.dir/src/lib/muslib/song.cpp.o: CMakeFiles/muslib.dir/flags.make
CMakeFiles/muslib.dir/src/lib/muslib/song.cpp.o: /home/vimjongun/projects/programming/tuiJungle/src/lib/muslib/song.cpp
CMakeFiles/muslib.dir/src/lib/muslib/song.cpp.o: CMakeFiles/muslib.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/vimjongun/projects/programming/tuiJungle/src/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/muslib.dir/src/lib/muslib/song.cpp.o"
	/nix/store/888bkaqdpfpx72dd8bdc69qsqlgbhcvf-gcc-wrapper-13.3.0/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/muslib.dir/src/lib/muslib/song.cpp.o -MF CMakeFiles/muslib.dir/src/lib/muslib/song.cpp.o.d -o CMakeFiles/muslib.dir/src/lib/muslib/song.cpp.o -c /home/vimjongun/projects/programming/tuiJungle/src/lib/muslib/song.cpp

CMakeFiles/muslib.dir/src/lib/muslib/song.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/muslib.dir/src/lib/muslib/song.cpp.i"
	/nix/store/888bkaqdpfpx72dd8bdc69qsqlgbhcvf-gcc-wrapper-13.3.0/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/vimjongun/projects/programming/tuiJungle/src/lib/muslib/song.cpp > CMakeFiles/muslib.dir/src/lib/muslib/song.cpp.i

CMakeFiles/muslib.dir/src/lib/muslib/song.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/muslib.dir/src/lib/muslib/song.cpp.s"
	/nix/store/888bkaqdpfpx72dd8bdc69qsqlgbhcvf-gcc-wrapper-13.3.0/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/vimjongun/projects/programming/tuiJungle/src/lib/muslib/song.cpp -o CMakeFiles/muslib.dir/src/lib/muslib/song.cpp.s

CMakeFiles/muslib.dir/src/lib/muslib/album.cpp.o: CMakeFiles/muslib.dir/flags.make
CMakeFiles/muslib.dir/src/lib/muslib/album.cpp.o: /home/vimjongun/projects/programming/tuiJungle/src/lib/muslib/album.cpp
CMakeFiles/muslib.dir/src/lib/muslib/album.cpp.o: CMakeFiles/muslib.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/vimjongun/projects/programming/tuiJungle/src/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/muslib.dir/src/lib/muslib/album.cpp.o"
	/nix/store/888bkaqdpfpx72dd8bdc69qsqlgbhcvf-gcc-wrapper-13.3.0/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/muslib.dir/src/lib/muslib/album.cpp.o -MF CMakeFiles/muslib.dir/src/lib/muslib/album.cpp.o.d -o CMakeFiles/muslib.dir/src/lib/muslib/album.cpp.o -c /home/vimjongun/projects/programming/tuiJungle/src/lib/muslib/album.cpp

CMakeFiles/muslib.dir/src/lib/muslib/album.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/muslib.dir/src/lib/muslib/album.cpp.i"
	/nix/store/888bkaqdpfpx72dd8bdc69qsqlgbhcvf-gcc-wrapper-13.3.0/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/vimjongun/projects/programming/tuiJungle/src/lib/muslib/album.cpp > CMakeFiles/muslib.dir/src/lib/muslib/album.cpp.i

CMakeFiles/muslib.dir/src/lib/muslib/album.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/muslib.dir/src/lib/muslib/album.cpp.s"
	/nix/store/888bkaqdpfpx72dd8bdc69qsqlgbhcvf-gcc-wrapper-13.3.0/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/vimjongun/projects/programming/tuiJungle/src/lib/muslib/album.cpp -o CMakeFiles/muslib.dir/src/lib/muslib/album.cpp.s

CMakeFiles/muslib.dir/src/lib/muslib/artist.cpp.o: CMakeFiles/muslib.dir/flags.make
CMakeFiles/muslib.dir/src/lib/muslib/artist.cpp.o: /home/vimjongun/projects/programming/tuiJungle/src/lib/muslib/artist.cpp
CMakeFiles/muslib.dir/src/lib/muslib/artist.cpp.o: CMakeFiles/muslib.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/vimjongun/projects/programming/tuiJungle/src/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/muslib.dir/src/lib/muslib/artist.cpp.o"
	/nix/store/888bkaqdpfpx72dd8bdc69qsqlgbhcvf-gcc-wrapper-13.3.0/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/muslib.dir/src/lib/muslib/artist.cpp.o -MF CMakeFiles/muslib.dir/src/lib/muslib/artist.cpp.o.d -o CMakeFiles/muslib.dir/src/lib/muslib/artist.cpp.o -c /home/vimjongun/projects/programming/tuiJungle/src/lib/muslib/artist.cpp

CMakeFiles/muslib.dir/src/lib/muslib/artist.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/muslib.dir/src/lib/muslib/artist.cpp.i"
	/nix/store/888bkaqdpfpx72dd8bdc69qsqlgbhcvf-gcc-wrapper-13.3.0/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/vimjongun/projects/programming/tuiJungle/src/lib/muslib/artist.cpp > CMakeFiles/muslib.dir/src/lib/muslib/artist.cpp.i

CMakeFiles/muslib.dir/src/lib/muslib/artist.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/muslib.dir/src/lib/muslib/artist.cpp.s"
	/nix/store/888bkaqdpfpx72dd8bdc69qsqlgbhcvf-gcc-wrapper-13.3.0/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/vimjongun/projects/programming/tuiJungle/src/lib/muslib/artist.cpp -o CMakeFiles/muslib.dir/src/lib/muslib/artist.cpp.s

CMakeFiles/muslib.dir/src/lib/muslib/playlist.cpp.o: CMakeFiles/muslib.dir/flags.make
CMakeFiles/muslib.dir/src/lib/muslib/playlist.cpp.o: /home/vimjongun/projects/programming/tuiJungle/src/lib/muslib/playlist.cpp
CMakeFiles/muslib.dir/src/lib/muslib/playlist.cpp.o: CMakeFiles/muslib.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/vimjongun/projects/programming/tuiJungle/src/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/muslib.dir/src/lib/muslib/playlist.cpp.o"
	/nix/store/888bkaqdpfpx72dd8bdc69qsqlgbhcvf-gcc-wrapper-13.3.0/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/muslib.dir/src/lib/muslib/playlist.cpp.o -MF CMakeFiles/muslib.dir/src/lib/muslib/playlist.cpp.o.d -o CMakeFiles/muslib.dir/src/lib/muslib/playlist.cpp.o -c /home/vimjongun/projects/programming/tuiJungle/src/lib/muslib/playlist.cpp

CMakeFiles/muslib.dir/src/lib/muslib/playlist.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/muslib.dir/src/lib/muslib/playlist.cpp.i"
	/nix/store/888bkaqdpfpx72dd8bdc69qsqlgbhcvf-gcc-wrapper-13.3.0/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/vimjongun/projects/programming/tuiJungle/src/lib/muslib/playlist.cpp > CMakeFiles/muslib.dir/src/lib/muslib/playlist.cpp.i

CMakeFiles/muslib.dir/src/lib/muslib/playlist.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/muslib.dir/src/lib/muslib/playlist.cpp.s"
	/nix/store/888bkaqdpfpx72dd8bdc69qsqlgbhcvf-gcc-wrapper-13.3.0/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/vimjongun/projects/programming/tuiJungle/src/lib/muslib/playlist.cpp -o CMakeFiles/muslib.dir/src/lib/muslib/playlist.cpp.s

# Object files for target muslib
muslib_OBJECTS = \
"CMakeFiles/muslib.dir/src/lib/muslib/song.cpp.o" \
"CMakeFiles/muslib.dir/src/lib/muslib/album.cpp.o" \
"CMakeFiles/muslib.dir/src/lib/muslib/artist.cpp.o" \
"CMakeFiles/muslib.dir/src/lib/muslib/playlist.cpp.o"

# External object files for target muslib
muslib_EXTERNAL_OBJECTS =

libmuslib.so: CMakeFiles/muslib.dir/src/lib/muslib/song.cpp.o
libmuslib.so: CMakeFiles/muslib.dir/src/lib/muslib/album.cpp.o
libmuslib.so: CMakeFiles/muslib.dir/src/lib/muslib/artist.cpp.o
libmuslib.so: CMakeFiles/muslib.dir/src/lib/muslib/playlist.cpp.o
libmuslib.so: CMakeFiles/muslib.dir/build.make
libmuslib.so: CMakeFiles/muslib.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/home/vimjongun/projects/programming/tuiJungle/src/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Linking CXX shared library libmuslib.so"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/muslib.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/muslib.dir/build: libmuslib.so
.PHONY : CMakeFiles/muslib.dir/build

CMakeFiles/muslib.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/muslib.dir/cmake_clean.cmake
.PHONY : CMakeFiles/muslib.dir/clean

CMakeFiles/muslib.dir/depend:
	cd /home/vimjongun/projects/programming/tuiJungle/src/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/vimjongun/projects/programming/tuiJungle /home/vimjongun/projects/programming/tuiJungle /home/vimjongun/projects/programming/tuiJungle/src/build /home/vimjongun/projects/programming/tuiJungle/src/build /home/vimjongun/projects/programming/tuiJungle/src/build/CMakeFiles/muslib.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/muslib.dir/depend

