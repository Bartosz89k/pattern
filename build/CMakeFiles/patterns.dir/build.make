# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

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
CMAKE_COMMAND = /usr/local/bin/cmake

# The command to remove a file.
RM = /usr/local/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /media/bk/3f78fad0-f1f5-4783-94ab-8e6ff6e2c664/bk3/src/cpp/github/cmakeQuickStart

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /media/bk/3f78fad0-f1f5-4783-94ab-8e6ff6e2c664/bk3/src/cpp/github/cmakeQuickStart/build

# Include any dependencies generated for this target.
include CMakeFiles/patterns.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/patterns.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/patterns.dir/flags.make

CMakeFiles/patterns.dir/main.cpp.o: CMakeFiles/patterns.dir/flags.make
CMakeFiles/patterns.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/media/bk/3f78fad0-f1f5-4783-94ab-8e6ff6e2c664/bk3/src/cpp/github/cmakeQuickStart/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/patterns.dir/main.cpp.o"
	/usr/bin/g++-7  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/patterns.dir/main.cpp.o -c /media/bk/3f78fad0-f1f5-4783-94ab-8e6ff6e2c664/bk3/src/cpp/github/cmakeQuickStart/main.cpp

CMakeFiles/patterns.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/patterns.dir/main.cpp.i"
	/usr/bin/g++-7 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /media/bk/3f78fad0-f1f5-4783-94ab-8e6ff6e2c664/bk3/src/cpp/github/cmakeQuickStart/main.cpp > CMakeFiles/patterns.dir/main.cpp.i

CMakeFiles/patterns.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/patterns.dir/main.cpp.s"
	/usr/bin/g++-7 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /media/bk/3f78fad0-f1f5-4783-94ab-8e6ff6e2c664/bk3/src/cpp/github/cmakeQuickStart/main.cpp -o CMakeFiles/patterns.dir/main.cpp.s

# Object files for target patterns
patterns_OBJECTS = \
"CMakeFiles/patterns.dir/main.cpp.o"

# External object files for target patterns
patterns_EXTERNAL_OBJECTS =

patterns: CMakeFiles/patterns.dir/main.cpp.o
patterns: CMakeFiles/patterns.dir/build.make
patterns: CMakeFiles/patterns.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/media/bk/3f78fad0-f1f5-4783-94ab-8e6ff6e2c664/bk3/src/cpp/github/cmakeQuickStart/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable patterns"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/patterns.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/patterns.dir/build: patterns

.PHONY : CMakeFiles/patterns.dir/build

CMakeFiles/patterns.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/patterns.dir/cmake_clean.cmake
.PHONY : CMakeFiles/patterns.dir/clean

CMakeFiles/patterns.dir/depend:
	cd /media/bk/3f78fad0-f1f5-4783-94ab-8e6ff6e2c664/bk3/src/cpp/github/cmakeQuickStart/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /media/bk/3f78fad0-f1f5-4783-94ab-8e6ff6e2c664/bk3/src/cpp/github/cmakeQuickStart /media/bk/3f78fad0-f1f5-4783-94ab-8e6ff6e2c664/bk3/src/cpp/github/cmakeQuickStart /media/bk/3f78fad0-f1f5-4783-94ab-8e6ff6e2c664/bk3/src/cpp/github/cmakeQuickStart/build /media/bk/3f78fad0-f1f5-4783-94ab-8e6ff6e2c664/bk3/src/cpp/github/cmakeQuickStart/build /media/bk/3f78fad0-f1f5-4783-94ab-8e6ff6e2c664/bk3/src/cpp/github/cmakeQuickStart/build/CMakeFiles/patterns.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/patterns.dir/depend

