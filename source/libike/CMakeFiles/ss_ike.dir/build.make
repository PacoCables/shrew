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
include source/libike/CMakeFiles/ss_ike.dir/depend.make

# Include the progress variables for this target.
include source/libike/CMakeFiles/ss_ike.dir/progress.make

# Include the compile flags for this target's objects.
include source/libike/CMakeFiles/ss_ike.dir/flags.make

source/libike/CMakeFiles/ss_ike.dir/client.o: source/libike/CMakeFiles/ss_ike.dir/flags.make
source/libike/CMakeFiles/ss_ike.dir/client.o: source/libike/client.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/imcci01/Downloads/ike/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object source/libike/CMakeFiles/ss_ike.dir/client.o"
	cd /home/imcci01/Downloads/ike/source/libike && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ss_ike.dir/client.o -c /home/imcci01/Downloads/ike/source/libike/client.cpp

source/libike/CMakeFiles/ss_ike.dir/client.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ss_ike.dir/client.i"
	cd /home/imcci01/Downloads/ike/source/libike && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/imcci01/Downloads/ike/source/libike/client.cpp > CMakeFiles/ss_ike.dir/client.i

source/libike/CMakeFiles/ss_ike.dir/client.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ss_ike.dir/client.s"
	cd /home/imcci01/Downloads/ike/source/libike && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/imcci01/Downloads/ike/source/libike/client.cpp -o CMakeFiles/ss_ike.dir/client.s

source/libike/CMakeFiles/ss_ike.dir/config.o: source/libike/CMakeFiles/ss_ike.dir/flags.make
source/libike/CMakeFiles/ss_ike.dir/config.o: source/libike/config.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/imcci01/Downloads/ike/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object source/libike/CMakeFiles/ss_ike.dir/config.o"
	cd /home/imcci01/Downloads/ike/source/libike && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ss_ike.dir/config.o -c /home/imcci01/Downloads/ike/source/libike/config.cpp

source/libike/CMakeFiles/ss_ike.dir/config.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ss_ike.dir/config.i"
	cd /home/imcci01/Downloads/ike/source/libike && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/imcci01/Downloads/ike/source/libike/config.cpp > CMakeFiles/ss_ike.dir/config.i

source/libike/CMakeFiles/ss_ike.dir/config.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ss_ike.dir/config.s"
	cd /home/imcci01/Downloads/ike/source/libike && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/imcci01/Downloads/ike/source/libike/config.cpp -o CMakeFiles/ss_ike.dir/config.s

source/libike/CMakeFiles/ss_ike.dir/manager.o: source/libike/CMakeFiles/ss_ike.dir/flags.make
source/libike/CMakeFiles/ss_ike.dir/manager.o: source/libike/manager.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/imcci01/Downloads/ike/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object source/libike/CMakeFiles/ss_ike.dir/manager.o"
	cd /home/imcci01/Downloads/ike/source/libike && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ss_ike.dir/manager.o -c /home/imcci01/Downloads/ike/source/libike/manager.cpp

source/libike/CMakeFiles/ss_ike.dir/manager.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ss_ike.dir/manager.i"
	cd /home/imcci01/Downloads/ike/source/libike && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/imcci01/Downloads/ike/source/libike/manager.cpp > CMakeFiles/ss_ike.dir/manager.i

source/libike/CMakeFiles/ss_ike.dir/manager.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ss_ike.dir/manager.s"
	cd /home/imcci01/Downloads/ike/source/libike && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/imcci01/Downloads/ike/source/libike/manager.cpp -o CMakeFiles/ss_ike.dir/manager.s

source/libike/CMakeFiles/ss_ike.dir/manager.file.o: source/libike/CMakeFiles/ss_ike.dir/flags.make
source/libike/CMakeFiles/ss_ike.dir/manager.file.o: source/libike/manager.file.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/imcci01/Downloads/ike/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object source/libike/CMakeFiles/ss_ike.dir/manager.file.o"
	cd /home/imcci01/Downloads/ike/source/libike && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ss_ike.dir/manager.file.o -c /home/imcci01/Downloads/ike/source/libike/manager.file.cpp

source/libike/CMakeFiles/ss_ike.dir/manager.file.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ss_ike.dir/manager.file.i"
	cd /home/imcci01/Downloads/ike/source/libike && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/imcci01/Downloads/ike/source/libike/manager.file.cpp > CMakeFiles/ss_ike.dir/manager.file.i

source/libike/CMakeFiles/ss_ike.dir/manager.file.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ss_ike.dir/manager.file.s"
	cd /home/imcci01/Downloads/ike/source/libike && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/imcci01/Downloads/ike/source/libike/manager.file.cpp -o CMakeFiles/ss_ike.dir/manager.file.s

source/libike/CMakeFiles/ss_ike.dir/libike.o: source/libike/CMakeFiles/ss_ike.dir/flags.make
source/libike/CMakeFiles/ss_ike.dir/libike.o: source/libike/libike.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/imcci01/Downloads/ike/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object source/libike/CMakeFiles/ss_ike.dir/libike.o"
	cd /home/imcci01/Downloads/ike/source/libike && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ss_ike.dir/libike.o -c /home/imcci01/Downloads/ike/source/libike/libike.cpp

source/libike/CMakeFiles/ss_ike.dir/libike.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ss_ike.dir/libike.i"
	cd /home/imcci01/Downloads/ike/source/libike && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/imcci01/Downloads/ike/source/libike/libike.cpp > CMakeFiles/ss_ike.dir/libike.i

source/libike/CMakeFiles/ss_ike.dir/libike.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ss_ike.dir/libike.s"
	cd /home/imcci01/Downloads/ike/source/libike && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/imcci01/Downloads/ike/source/libike/libike.cpp -o CMakeFiles/ss_ike.dir/libike.s

# Object files for target ss_ike
ss_ike_OBJECTS = \
"CMakeFiles/ss_ike.dir/client.o" \
"CMakeFiles/ss_ike.dir/config.o" \
"CMakeFiles/ss_ike.dir/manager.o" \
"CMakeFiles/ss_ike.dir/manager.file.o" \
"CMakeFiles/ss_ike.dir/libike.o"

# External object files for target ss_ike
ss_ike_EXTERNAL_OBJECTS =

source/libike/libss_ike.so.2.2.1: source/libike/CMakeFiles/ss_ike.dir/client.o
source/libike/libss_ike.so.2.2.1: source/libike/CMakeFiles/ss_ike.dir/config.o
source/libike/libss_ike.so.2.2.1: source/libike/CMakeFiles/ss_ike.dir/manager.o
source/libike/libss_ike.so.2.2.1: source/libike/CMakeFiles/ss_ike.dir/manager.file.o
source/libike/libss_ike.so.2.2.1: source/libike/CMakeFiles/ss_ike.dir/libike.o
source/libike/libss_ike.so.2.2.1: source/libike/CMakeFiles/ss_ike.dir/build.make
source/libike/libss_ike.so.2.2.1: source/libidb/libss_idb.so.2.2.1
source/libike/libss_ike.so.2.2.1: source/liblog/libss_log.so.2.2.1
source/libike/libss_ike.so.2.2.1: source/libith/libss_ith.so.2.2.1
source/libike/libss_ike.so.2.2.1: source/libike/CMakeFiles/ss_ike.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/imcci01/Downloads/ike/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Linking CXX shared library libss_ike.so"
	cd /home/imcci01/Downloads/ike/source/libike && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/ss_ike.dir/link.txt --verbose=$(VERBOSE)
	cd /home/imcci01/Downloads/ike/source/libike && $(CMAKE_COMMAND) -E cmake_symlink_library libss_ike.so.2.2.1 libss_ike.so.2.2.1 libss_ike.so

source/libike/libss_ike.so: source/libike/libss_ike.so.2.2.1
	@$(CMAKE_COMMAND) -E touch_nocreate source/libike/libss_ike.so

# Rule to build all files generated by this target.
source/libike/CMakeFiles/ss_ike.dir/build: source/libike/libss_ike.so

.PHONY : source/libike/CMakeFiles/ss_ike.dir/build

source/libike/CMakeFiles/ss_ike.dir/clean:
	cd /home/imcci01/Downloads/ike/source/libike && $(CMAKE_COMMAND) -P CMakeFiles/ss_ike.dir/cmake_clean.cmake
.PHONY : source/libike/CMakeFiles/ss_ike.dir/clean

source/libike/CMakeFiles/ss_ike.dir/depend:
	cd /home/imcci01/Downloads/ike && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/imcci01/Downloads/ike /home/imcci01/Downloads/ike/source/libike /home/imcci01/Downloads/ike /home/imcci01/Downloads/ike/source/libike /home/imcci01/Downloads/ike/source/libike/CMakeFiles/ss_ike.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : source/libike/CMakeFiles/ss_ike.dir/depend
