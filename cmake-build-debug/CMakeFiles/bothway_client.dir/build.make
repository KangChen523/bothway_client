# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.20

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "D:\DevelopmentTool\JetBrains\CLion 2021.2.4\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "D:\DevelopmentTool\JetBrains\CLion 2021.2.4\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = E:\Sieyuan\Super6000_jk\theta_version\ems_application\pas_idl\bothway_client

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = E:\Sieyuan\Super6000_jk\theta_version\ems_application\pas_idl\bothway_client\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/bothway_client.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/bothway_client.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/bothway_client.dir/flags.make

CMakeFiles/bothway_client.dir/bothway.cpp.obj: CMakeFiles/bothway_client.dir/flags.make
CMakeFiles/bothway_client.dir/bothway.cpp.obj: CMakeFiles/bothway_client.dir/includes_CXX.rsp
CMakeFiles/bothway_client.dir/bothway.cpp.obj: ../bothway.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=E:\Sieyuan\Super6000_jk\theta_version\ems_application\pas_idl\bothway_client\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/bothway_client.dir/bothway.cpp.obj"
	D:\DevelopmentTool\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\bothway_client.dir\bothway.cpp.obj -c E:\Sieyuan\Super6000_jk\theta_version\ems_application\pas_idl\bothway_client\bothway.cpp

CMakeFiles/bothway_client.dir/bothway.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/bothway_client.dir/bothway.cpp.i"
	D:\DevelopmentTool\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E E:\Sieyuan\Super6000_jk\theta_version\ems_application\pas_idl\bothway_client\bothway.cpp > CMakeFiles\bothway_client.dir\bothway.cpp.i

CMakeFiles/bothway_client.dir/bothway.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/bothway_client.dir/bothway.cpp.s"
	D:\DevelopmentTool\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S E:\Sieyuan\Super6000_jk\theta_version\ems_application\pas_idl\bothway_client\bothway.cpp -o CMakeFiles\bothway_client.dir\bothway.cpp.s

CMakeFiles/bothway_client.dir/bothway_client.cpp.obj: CMakeFiles/bothway_client.dir/flags.make
CMakeFiles/bothway_client.dir/bothway_client.cpp.obj: CMakeFiles/bothway_client.dir/includes_CXX.rsp
CMakeFiles/bothway_client.dir/bothway_client.cpp.obj: ../bothway_client.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=E:\Sieyuan\Super6000_jk\theta_version\ems_application\pas_idl\bothway_client\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/bothway_client.dir/bothway_client.cpp.obj"
	D:\DevelopmentTool\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\bothway_client.dir\bothway_client.cpp.obj -c E:\Sieyuan\Super6000_jk\theta_version\ems_application\pas_idl\bothway_client\bothway_client.cpp

CMakeFiles/bothway_client.dir/bothway_client.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/bothway_client.dir/bothway_client.cpp.i"
	D:\DevelopmentTool\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E E:\Sieyuan\Super6000_jk\theta_version\ems_application\pas_idl\bothway_client\bothway_client.cpp > CMakeFiles\bothway_client.dir\bothway_client.cpp.i

CMakeFiles/bothway_client.dir/bothway_client.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/bothway_client.dir/bothway_client.cpp.s"
	D:\DevelopmentTool\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S E:\Sieyuan\Super6000_jk\theta_version\ems_application\pas_idl\bothway_client\bothway_client.cpp -o CMakeFiles\bothway_client.dir\bothway_client.cpp.s

# Object files for target bothway_client
bothway_client_OBJECTS = \
"CMakeFiles/bothway_client.dir/bothway.cpp.obj" \
"CMakeFiles/bothway_client.dir/bothway_client.cpp.obj"

# External object files for target bothway_client
bothway_client_EXTERNAL_OBJECTS =

bothway_client.exe: CMakeFiles/bothway_client.dir/bothway.cpp.obj
bothway_client.exe: CMakeFiles/bothway_client.dir/bothway_client.cpp.obj
bothway_client.exe: CMakeFiles/bothway_client.dir/build.make
bothway_client.exe: CMakeFiles/bothway_client.dir/linklibs.rsp
bothway_client.exe: CMakeFiles/bothway_client.dir/objects1.rsp
bothway_client.exe: CMakeFiles/bothway_client.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=E:\Sieyuan\Super6000_jk\theta_version\ems_application\pas_idl\bothway_client\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable bothway_client.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\bothway_client.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/bothway_client.dir/build: bothway_client.exe
.PHONY : CMakeFiles/bothway_client.dir/build

CMakeFiles/bothway_client.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\bothway_client.dir\cmake_clean.cmake
.PHONY : CMakeFiles/bothway_client.dir/clean

CMakeFiles/bothway_client.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" E:\Sieyuan\Super6000_jk\theta_version\ems_application\pas_idl\bothway_client E:\Sieyuan\Super6000_jk\theta_version\ems_application\pas_idl\bothway_client E:\Sieyuan\Super6000_jk\theta_version\ems_application\pas_idl\bothway_client\cmake-build-debug E:\Sieyuan\Super6000_jk\theta_version\ems_application\pas_idl\bothway_client\cmake-build-debug E:\Sieyuan\Super6000_jk\theta_version\ems_application\pas_idl\bothway_client\cmake-build-debug\CMakeFiles\bothway_client.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/bothway_client.dir/depend

