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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/imcci01/Downloads/ike

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/imcci01/Downloads/ike

# Include any dependencies generated for this target.
include source/libidb/CMakeFiles/ss_idb.dir/depend.make

# Include the progress variables for this target.
include source/libidb/CMakeFiles/ss_idb.dir/progress.make

# Include the compile flags for this target's objects.
include source/libidb/CMakeFiles/ss_idb.dir/flags.make

source/libidb/CMakeFiles/ss_idb.dir/libidb.o: source/libidb/CMakeFiles/ss_idb.dir/flags.make
source/libidb/CMakeFiles/ss_idb.dir/libidb.o: source/libidb/libidb.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/imcci01/Downloads/ike/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object source/libidb/CMakeFiles/ss_idb.dir/libidb.o"
	cd /home/imcci01/Downloads/ike/source/libidb && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ss_idb.dir/libidb.o -c /home/imcci01/Downloads/ike/source/libidb/libidb.cpp

source/libidb/CMakeFiles/ss_idb.dir/libidb.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ss_idb.dir/libidb.i"
	cd /home/imcci01/Downloads/ike/source/libidb && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/imcci01/Downloads/ike/source/libidb/libidb.cpp > CMakeFiles/ss_idb.dir/libidb.i

source/libidb/CMakeFiles/ss_idb.dir/libidb.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ss_idb.dir/libidb.s"
	cd /home/imcci01/Downloads/ike/source/libidb && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/imcci01/Downloads/ike/source/libidb/libidb.cpp -o CMakeFiles/ss_idb.dir/libidb.s

source/libidb/CMakeFiles/ss_idb.dir/base64.o: source/libidb/CMakeFiles/ss_idb.dir/flags.make
source/libidb/CMakeFiles/ss_idb.dir/base64.o: source/libidb/base64.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/imcci01/Downloads/ike/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object source/libidb/CMakeFiles/ss_idb.dir/base64.o"
	cd /home/imcci01/Downloads/ike/source/libidb && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ss_idb.dir/base64.o -c /home/imcci01/Downloads/ike/source/libidb/base64.cpp

source/libidb/CMakeFiles/ss_idb.dir/base64.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ss_idb.dir/base64.i"
	cd /home/imcci01/Downloads/ike/source/libidb && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/imcci01/Downloads/ike/source/libidb/base64.cpp > CMakeFiles/ss_idb.dir/base64.i

source/libidb/CMakeFiles/ss_idb.dir/base64.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ss_idb.dir/base64.s"
	cd /home/imcci01/Downloads/ike/source/libidb && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/imcci01/Downloads/ike/source/libidb/base64.cpp -o CMakeFiles/ss_idb.dir/base64.s

# Object files for target ss_idb
ss_idb_OBJECTS = \
"CMakeFiles/ss_idb.dir/libidb.o" \
"CMakeFiles/ss_idb.dir/base64.o"

# External object files for target ss_idb
ss_idb_EXTERNAL_OBJECTS =

source/libidb/libss_idb.so.2.2.1: source/libidb/CMakeFiles/ss_idb.dir/libidb.o
source/libidb/libss_idb.so.2.2.1: source/libidb/CMakeFiles/ss_idb.dir/base64.o
source/libidb/libss_idb.so.2.2.1: source/libidb/CMakeFiles/ss_idb.dir/build.make
source/libidb/libss_idb.so.2.2.1: source/liblog/libss_log.so.2.2.1
source/libidb/libss_idb.so.2.2.1: source/libith/libss_ith.so.2.2.1
source/libidb/libss_idb.so.2.2.1: source/libidb/CMakeFiles/ss_idb.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/imcci01/Downloads/ike/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX shared library libss_idb.so"
	cd /home/imcci01/Downloads/ike/source/libidb && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/ss_idb.dir/link.txt --verbose=$(VERBOSE)
	cd /home/imcci01/Downloads/ike/source/libidb && $(CMAKE_COMMAND) -E cmake_symlink_library libss_idb.so.2.2.1 libss_idb.so.2.2.1 libss_idb.so

source/libidb/libss_idb.so: source/libidb/libss_idb.so.2.2.1
	@$(CMAKE_COMMAND) -E touch_nocreate source/libidb/libss_idb.so

# Rule to build all files generated by this target.
source/libidb/CMakeFiles/ss_idb.dir/build: source/libidb/libss_idb.so

.PHONY : source/libidb/CMakeFiles/ss_idb.dir/build

source/libidb/CMakeFiles/ss_idb.dir/clean:
	cd /home/imcci01/Downloads/ike/source/libidb && $(CMAKE_COMMAND) -P CMakeFiles/ss_idb.dir/cmake_clean.cmake
.PHONY : source/libidb/CMakeFiles/ss_idb.dir/clean

source/libidb/CMakeFiles/ss_idb.dir/depend:
	cd /home/imcci01/Downloads/ike && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/imcci01/Downloads/ike /home/imcci01/Downloads/ike/source/libidb /home/imcci01/Downloads/ike /home/imcci01/Downloads/ike/source/libidb /home/imcci01/Downloads/ike/source/libidb/CMakeFiles/ss_idb.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : source/libidb/CMakeFiles/ss_idb.dir/depend

