# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.28

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
CMAKE_COMMAND = /Users/niccolomagnolfi/Applications/CLion.app/Contents/bin/cmake/mac/aarch64/bin/cmake

# The command to remove a file.
RM = /Users/niccolomagnolfi/Applications/CLion.app/Contents/bin/cmake/mac/aarch64/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/niccolomagnolfi/Desktop/Progetto

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/niccolomagnolfi/Desktop/Progetto/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/core.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/core.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/core.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/core.dir/flags.make

CMakeFiles/core.dir/Collezione.cpp.o: CMakeFiles/core.dir/flags.make
CMakeFiles/core.dir/Collezione.cpp.o: /Users/niccolomagnolfi/Desktop/Progetto/Collezione.cpp
CMakeFiles/core.dir/Collezione.cpp.o: CMakeFiles/core.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/niccolomagnolfi/Desktop/Progetto/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/core.dir/Collezione.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/core.dir/Collezione.cpp.o -MF CMakeFiles/core.dir/Collezione.cpp.o.d -o CMakeFiles/core.dir/Collezione.cpp.o -c /Users/niccolomagnolfi/Desktop/Progetto/Collezione.cpp

CMakeFiles/core.dir/Collezione.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/core.dir/Collezione.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/niccolomagnolfi/Desktop/Progetto/Collezione.cpp > CMakeFiles/core.dir/Collezione.cpp.i

CMakeFiles/core.dir/Collezione.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/core.dir/Collezione.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/niccolomagnolfi/Desktop/Progetto/Collezione.cpp -o CMakeFiles/core.dir/Collezione.cpp.s

CMakeFiles/core.dir/Nota.cpp.o: CMakeFiles/core.dir/flags.make
CMakeFiles/core.dir/Nota.cpp.o: /Users/niccolomagnolfi/Desktop/Progetto/Nota.cpp
CMakeFiles/core.dir/Nota.cpp.o: CMakeFiles/core.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/niccolomagnolfi/Desktop/Progetto/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/core.dir/Nota.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/core.dir/Nota.cpp.o -MF CMakeFiles/core.dir/Nota.cpp.o.d -o CMakeFiles/core.dir/Nota.cpp.o -c /Users/niccolomagnolfi/Desktop/Progetto/Nota.cpp

CMakeFiles/core.dir/Nota.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/core.dir/Nota.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/niccolomagnolfi/Desktop/Progetto/Nota.cpp > CMakeFiles/core.dir/Nota.cpp.i

CMakeFiles/core.dir/Nota.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/core.dir/Nota.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/niccolomagnolfi/Desktop/Progetto/Nota.cpp -o CMakeFiles/core.dir/Nota.cpp.s

# Object files for target core
core_OBJECTS = \
"CMakeFiles/core.dir/Collezione.cpp.o" \
"CMakeFiles/core.dir/Nota.cpp.o"

# External object files for target core
core_EXTERNAL_OBJECTS =

libcore.a: CMakeFiles/core.dir/Collezione.cpp.o
libcore.a: CMakeFiles/core.dir/Nota.cpp.o
libcore.a: CMakeFiles/core.dir/build.make
libcore.a: CMakeFiles/core.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/Users/niccolomagnolfi/Desktop/Progetto/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX static library libcore.a"
	$(CMAKE_COMMAND) -P CMakeFiles/core.dir/cmake_clean_target.cmake
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/core.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/core.dir/build: libcore.a
.PHONY : CMakeFiles/core.dir/build

CMakeFiles/core.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/core.dir/cmake_clean.cmake
.PHONY : CMakeFiles/core.dir/clean

CMakeFiles/core.dir/depend:
	cd /Users/niccolomagnolfi/Desktop/Progetto/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/niccolomagnolfi/Desktop/Progetto /Users/niccolomagnolfi/Desktop/Progetto /Users/niccolomagnolfi/Desktop/Progetto/cmake-build-debug /Users/niccolomagnolfi/Desktop/Progetto/cmake-build-debug /Users/niccolomagnolfi/Desktop/Progetto/cmake-build-debug/CMakeFiles/core.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/core.dir/depend

