# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.5

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/karoline/Documents/studium/17_sose/algorithmen_und_datenstrukturen/algodat_5

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/karoline/Documents/studium/17_sose/algorithmen_und_datenstrukturen/algodat_5/build

# Include any dependencies generated for this target.
include source/CMakeFiles/algodat_5.dir/depend.make

# Include the progress variables for this target.
include source/CMakeFiles/algodat_5.dir/progress.make

# Include the compile flags for this target's objects.
include source/CMakeFiles/algodat_5.dir/flags.make

source/CMakeFiles/algodat_5.dir/algodat_5.cpp.o: source/CMakeFiles/algodat_5.dir/flags.make
source/CMakeFiles/algodat_5.dir/algodat_5.cpp.o: ../source/algodat_5.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/karoline/Documents/studium/17_sose/algorithmen_und_datenstrukturen/algodat_5/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object source/CMakeFiles/algodat_5.dir/algodat_5.cpp.o"
	cd /home/karoline/Documents/studium/17_sose/algorithmen_und_datenstrukturen/algodat_5/build/source && /usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/algodat_5.dir/algodat_5.cpp.o -c /home/karoline/Documents/studium/17_sose/algorithmen_und_datenstrukturen/algodat_5/source/algodat_5.cpp

source/CMakeFiles/algodat_5.dir/algodat_5.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/algodat_5.dir/algodat_5.cpp.i"
	cd /home/karoline/Documents/studium/17_sose/algorithmen_und_datenstrukturen/algodat_5/build/source && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/karoline/Documents/studium/17_sose/algorithmen_und_datenstrukturen/algodat_5/source/algodat_5.cpp > CMakeFiles/algodat_5.dir/algodat_5.cpp.i

source/CMakeFiles/algodat_5.dir/algodat_5.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/algodat_5.dir/algodat_5.cpp.s"
	cd /home/karoline/Documents/studium/17_sose/algorithmen_und_datenstrukturen/algodat_5/build/source && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/karoline/Documents/studium/17_sose/algorithmen_und_datenstrukturen/algodat_5/source/algodat_5.cpp -o CMakeFiles/algodat_5.dir/algodat_5.cpp.s

source/CMakeFiles/algodat_5.dir/algodat_5.cpp.o.requires:

.PHONY : source/CMakeFiles/algodat_5.dir/algodat_5.cpp.o.requires

source/CMakeFiles/algodat_5.dir/algodat_5.cpp.o.provides: source/CMakeFiles/algodat_5.dir/algodat_5.cpp.o.requires
	$(MAKE) -f source/CMakeFiles/algodat_5.dir/build.make source/CMakeFiles/algodat_5.dir/algodat_5.cpp.o.provides.build
.PHONY : source/CMakeFiles/algodat_5.dir/algodat_5.cpp.o.provides

source/CMakeFiles/algodat_5.dir/algodat_5.cpp.o.provides.build: source/CMakeFiles/algodat_5.dir/algodat_5.cpp.o


# Object files for target algodat_5
algodat_5_OBJECTS = \
"CMakeFiles/algodat_5.dir/algodat_5.cpp.o"

# External object files for target algodat_5
algodat_5_EXTERNAL_OBJECTS =

source/algodat_5: source/CMakeFiles/algodat_5.dir/algodat_5.cpp.o
source/algodat_5: source/CMakeFiles/algodat_5.dir/build.make
source/algodat_5: source/CMakeFiles/algodat_5.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/karoline/Documents/studium/17_sose/algorithmen_und_datenstrukturen/algodat_5/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable algodat_5"
	cd /home/karoline/Documents/studium/17_sose/algorithmen_und_datenstrukturen/algodat_5/build/source && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/algodat_5.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
source/CMakeFiles/algodat_5.dir/build: source/algodat_5

.PHONY : source/CMakeFiles/algodat_5.dir/build

source/CMakeFiles/algodat_5.dir/requires: source/CMakeFiles/algodat_5.dir/algodat_5.cpp.o.requires

.PHONY : source/CMakeFiles/algodat_5.dir/requires

source/CMakeFiles/algodat_5.dir/clean:
	cd /home/karoline/Documents/studium/17_sose/algorithmen_und_datenstrukturen/algodat_5/build/source && $(CMAKE_COMMAND) -P CMakeFiles/algodat_5.dir/cmake_clean.cmake
.PHONY : source/CMakeFiles/algodat_5.dir/clean

source/CMakeFiles/algodat_5.dir/depend:
	cd /home/karoline/Documents/studium/17_sose/algorithmen_und_datenstrukturen/algodat_5/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/karoline/Documents/studium/17_sose/algorithmen_und_datenstrukturen/algodat_5 /home/karoline/Documents/studium/17_sose/algorithmen_und_datenstrukturen/algodat_5/source /home/karoline/Documents/studium/17_sose/algorithmen_und_datenstrukturen/algodat_5/build /home/karoline/Documents/studium/17_sose/algorithmen_und_datenstrukturen/algodat_5/build/source /home/karoline/Documents/studium/17_sose/algorithmen_und_datenstrukturen/algodat_5/build/source/CMakeFiles/algodat_5.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : source/CMakeFiles/algodat_5.dir/depend

