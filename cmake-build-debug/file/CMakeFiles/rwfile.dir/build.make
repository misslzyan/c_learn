# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.13

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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/duanweidong/Documents/wkcpp/proto

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/duanweidong/Documents/wkcpp/proto/cmake-build-debug

# Include any dependencies generated for this target.
include file/CMakeFiles/rwfile.dir/depend.make

# Include the progress variables for this target.
include file/CMakeFiles/rwfile.dir/progress.make

# Include the compile flags for this target's objects.
include file/CMakeFiles/rwfile.dir/flags.make

file/CMakeFiles/rwfile.dir/rwfile.cpp.o: file/CMakeFiles/rwfile.dir/flags.make
file/CMakeFiles/rwfile.dir/rwfile.cpp.o: ../file/rwfile.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/duanweidong/Documents/wkcpp/proto/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object file/CMakeFiles/rwfile.dir/rwfile.cpp.o"
	cd /Users/duanweidong/Documents/wkcpp/proto/cmake-build-debug/file && /Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/rwfile.dir/rwfile.cpp.o -c /Users/duanweidong/Documents/wkcpp/proto/file/rwfile.cpp

file/CMakeFiles/rwfile.dir/rwfile.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/rwfile.dir/rwfile.cpp.i"
	cd /Users/duanweidong/Documents/wkcpp/proto/cmake-build-debug/file && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/duanweidong/Documents/wkcpp/proto/file/rwfile.cpp > CMakeFiles/rwfile.dir/rwfile.cpp.i

file/CMakeFiles/rwfile.dir/rwfile.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/rwfile.dir/rwfile.cpp.s"
	cd /Users/duanweidong/Documents/wkcpp/proto/cmake-build-debug/file && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/duanweidong/Documents/wkcpp/proto/file/rwfile.cpp -o CMakeFiles/rwfile.dir/rwfile.cpp.s

# Object files for target rwfile
rwfile_OBJECTS = \
"CMakeFiles/rwfile.dir/rwfile.cpp.o"

# External object files for target rwfile
rwfile_EXTERNAL_OBJECTS =

file/rwfile: file/CMakeFiles/rwfile.dir/rwfile.cpp.o
file/rwfile: file/CMakeFiles/rwfile.dir/build.make
file/rwfile: file/CMakeFiles/rwfile.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/duanweidong/Documents/wkcpp/proto/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable rwfile"
	cd /Users/duanweidong/Documents/wkcpp/proto/cmake-build-debug/file && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/rwfile.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
file/CMakeFiles/rwfile.dir/build: file/rwfile

.PHONY : file/CMakeFiles/rwfile.dir/build

file/CMakeFiles/rwfile.dir/clean:
	cd /Users/duanweidong/Documents/wkcpp/proto/cmake-build-debug/file && $(CMAKE_COMMAND) -P CMakeFiles/rwfile.dir/cmake_clean.cmake
.PHONY : file/CMakeFiles/rwfile.dir/clean

file/CMakeFiles/rwfile.dir/depend:
	cd /Users/duanweidong/Documents/wkcpp/proto/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/duanweidong/Documents/wkcpp/proto /Users/duanweidong/Documents/wkcpp/proto/file /Users/duanweidong/Documents/wkcpp/proto/cmake-build-debug /Users/duanweidong/Documents/wkcpp/proto/cmake-build-debug/file /Users/duanweidong/Documents/wkcpp/proto/cmake-build-debug/file/CMakeFiles/rwfile.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : file/CMakeFiles/rwfile.dir/depend

