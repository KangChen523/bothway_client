# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.0

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
CMAKE_SOURCE_DIR = /users/ems/bothway_client

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /users/ems/bothway_client/cmake-build-scada2

# Include any dependencies generated for this target.
include CMakeFiles/bothway_client.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/bothway_client.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/bothway_client.dir/flags.make

CMakeFiles/bothway_client.dir/bothway.cpp.o: CMakeFiles/bothway_client.dir/flags.make
CMakeFiles/bothway_client.dir/bothway.cpp.o: ../bothway.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /users/ems/bothway_client/cmake-build-scada2/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object CMakeFiles/bothway_client.dir/bothway.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/bothway_client.dir/bothway.cpp.o -c /users/ems/bothway_client/bothway.cpp

CMakeFiles/bothway_client.dir/bothway.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/bothway_client.dir/bothway.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /users/ems/bothway_client/bothway.cpp > CMakeFiles/bothway_client.dir/bothway.cpp.i

CMakeFiles/bothway_client.dir/bothway.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/bothway_client.dir/bothway.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /users/ems/bothway_client/bothway.cpp -o CMakeFiles/bothway_client.dir/bothway.cpp.s

CMakeFiles/bothway_client.dir/bothway.cpp.o.requires:
.PHONY : CMakeFiles/bothway_client.dir/bothway.cpp.o.requires

CMakeFiles/bothway_client.dir/bothway.cpp.o.provides: CMakeFiles/bothway_client.dir/bothway.cpp.o.requires
	$(MAKE) -f CMakeFiles/bothway_client.dir/build.make CMakeFiles/bothway_client.dir/bothway.cpp.o.provides.build
.PHONY : CMakeFiles/bothway_client.dir/bothway.cpp.o.provides

CMakeFiles/bothway_client.dir/bothway.cpp.o.provides.build: CMakeFiles/bothway_client.dir/bothway.cpp.o

CMakeFiles/bothway_client.dir/bothway_client.cpp.o: CMakeFiles/bothway_client.dir/flags.make
CMakeFiles/bothway_client.dir/bothway_client.cpp.o: ../bothway_client.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /users/ems/bothway_client/cmake-build-scada2/CMakeFiles $(CMAKE_PROGRESS_2)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object CMakeFiles/bothway_client.dir/bothway_client.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/bothway_client.dir/bothway_client.cpp.o -c /users/ems/bothway_client/bothway_client.cpp

CMakeFiles/bothway_client.dir/bothway_client.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/bothway_client.dir/bothway_client.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /users/ems/bothway_client/bothway_client.cpp > CMakeFiles/bothway_client.dir/bothway_client.cpp.i

CMakeFiles/bothway_client.dir/bothway_client.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/bothway_client.dir/bothway_client.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /users/ems/bothway_client/bothway_client.cpp -o CMakeFiles/bothway_client.dir/bothway_client.cpp.s

CMakeFiles/bothway_client.dir/bothway_client.cpp.o.requires:
.PHONY : CMakeFiles/bothway_client.dir/bothway_client.cpp.o.requires

CMakeFiles/bothway_client.dir/bothway_client.cpp.o.provides: CMakeFiles/bothway_client.dir/bothway_client.cpp.o.requires
	$(MAKE) -f CMakeFiles/bothway_client.dir/build.make CMakeFiles/bothway_client.dir/bothway_client.cpp.o.provides.build
.PHONY : CMakeFiles/bothway_client.dir/bothway_client.cpp.o.provides

CMakeFiles/bothway_client.dir/bothway_client.cpp.o.provides.build: CMakeFiles/bothway_client.dir/bothway_client.cpp.o

# Object files for target bothway_client
bothway_client_OBJECTS = \
"CMakeFiles/bothway_client.dir/bothway.cpp.o" \
"CMakeFiles/bothway_client.dir/bothway_client.cpp.o"

# External object files for target bothway_client
bothway_client_EXTERNAL_OBJECTS =

bothway_client: CMakeFiles/bothway_client.dir/bothway.cpp.o
bothway_client: CMakeFiles/bothway_client.dir/bothway_client.cpp.o
bothway_client: CMakeFiles/bothway_client.dir/build.make
bothway_client: CMakeFiles/bothway_client.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX executable bothway_client"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/bothway_client.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/bothway_client.dir/build: bothway_client
.PHONY : CMakeFiles/bothway_client.dir/build

CMakeFiles/bothway_client.dir/requires: CMakeFiles/bothway_client.dir/bothway.cpp.o.requires
CMakeFiles/bothway_client.dir/requires: CMakeFiles/bothway_client.dir/bothway_client.cpp.o.requires
.PHONY : CMakeFiles/bothway_client.dir/requires

CMakeFiles/bothway_client.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/bothway_client.dir/cmake_clean.cmake
.PHONY : CMakeFiles/bothway_client.dir/clean

CMakeFiles/bothway_client.dir/depend:
	cd /users/ems/bothway_client/cmake-build-scada2 && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /users/ems/bothway_client /users/ems/bothway_client /users/ems/bothway_client/cmake-build-scada2 /users/ems/bothway_client/cmake-build-scada2 /users/ems/bothway_client/cmake-build-scada2/CMakeFiles/bothway_client.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/bothway_client.dir/depend

