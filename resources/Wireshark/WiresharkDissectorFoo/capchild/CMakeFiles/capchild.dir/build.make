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
CMAKE_SOURCE_DIR = /home/sjoshi/Downloads/wireshark-3.0.1

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/sjoshi/Downloads/wireshark-3.0.1

# Include any dependencies generated for this target.
include capchild/CMakeFiles/capchild.dir/depend.make

# Include the progress variables for this target.
include capchild/CMakeFiles/capchild.dir/progress.make

# Include the compile flags for this target's objects.
include capchild/CMakeFiles/capchild.dir/flags.make

capchild/CMakeFiles/capchild.dir/capture_ifinfo.c.o: capchild/CMakeFiles/capchild.dir/flags.make
capchild/CMakeFiles/capchild.dir/capture_ifinfo.c.o: capchild/capture_ifinfo.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/sjoshi/Downloads/wireshark-3.0.1/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object capchild/CMakeFiles/capchild.dir/capture_ifinfo.c.o"
	cd /home/sjoshi/Downloads/wireshark-3.0.1/capchild && /usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/capchild.dir/capture_ifinfo.c.o   -c /home/sjoshi/Downloads/wireshark-3.0.1/capchild/capture_ifinfo.c

capchild/CMakeFiles/capchild.dir/capture_ifinfo.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/capchild.dir/capture_ifinfo.c.i"
	cd /home/sjoshi/Downloads/wireshark-3.0.1/capchild && /usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/sjoshi/Downloads/wireshark-3.0.1/capchild/capture_ifinfo.c > CMakeFiles/capchild.dir/capture_ifinfo.c.i

capchild/CMakeFiles/capchild.dir/capture_ifinfo.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/capchild.dir/capture_ifinfo.c.s"
	cd /home/sjoshi/Downloads/wireshark-3.0.1/capchild && /usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/sjoshi/Downloads/wireshark-3.0.1/capchild/capture_ifinfo.c -o CMakeFiles/capchild.dir/capture_ifinfo.c.s

capchild/CMakeFiles/capchild.dir/capture_ifinfo.c.o.requires:

.PHONY : capchild/CMakeFiles/capchild.dir/capture_ifinfo.c.o.requires

capchild/CMakeFiles/capchild.dir/capture_ifinfo.c.o.provides: capchild/CMakeFiles/capchild.dir/capture_ifinfo.c.o.requires
	$(MAKE) -f capchild/CMakeFiles/capchild.dir/build.make capchild/CMakeFiles/capchild.dir/capture_ifinfo.c.o.provides.build
.PHONY : capchild/CMakeFiles/capchild.dir/capture_ifinfo.c.o.provides

capchild/CMakeFiles/capchild.dir/capture_ifinfo.c.o.provides.build: capchild/CMakeFiles/capchild.dir/capture_ifinfo.c.o


capchild/CMakeFiles/capchild.dir/capture_sync.c.o: capchild/CMakeFiles/capchild.dir/flags.make
capchild/CMakeFiles/capchild.dir/capture_sync.c.o: capchild/capture_sync.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/sjoshi/Downloads/wireshark-3.0.1/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object capchild/CMakeFiles/capchild.dir/capture_sync.c.o"
	cd /home/sjoshi/Downloads/wireshark-3.0.1/capchild && /usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/capchild.dir/capture_sync.c.o   -c /home/sjoshi/Downloads/wireshark-3.0.1/capchild/capture_sync.c

capchild/CMakeFiles/capchild.dir/capture_sync.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/capchild.dir/capture_sync.c.i"
	cd /home/sjoshi/Downloads/wireshark-3.0.1/capchild && /usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/sjoshi/Downloads/wireshark-3.0.1/capchild/capture_sync.c > CMakeFiles/capchild.dir/capture_sync.c.i

capchild/CMakeFiles/capchild.dir/capture_sync.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/capchild.dir/capture_sync.c.s"
	cd /home/sjoshi/Downloads/wireshark-3.0.1/capchild && /usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/sjoshi/Downloads/wireshark-3.0.1/capchild/capture_sync.c -o CMakeFiles/capchild.dir/capture_sync.c.s

capchild/CMakeFiles/capchild.dir/capture_sync.c.o.requires:

.PHONY : capchild/CMakeFiles/capchild.dir/capture_sync.c.o.requires

capchild/CMakeFiles/capchild.dir/capture_sync.c.o.provides: capchild/CMakeFiles/capchild.dir/capture_sync.c.o.requires
	$(MAKE) -f capchild/CMakeFiles/capchild.dir/build.make capchild/CMakeFiles/capchild.dir/capture_sync.c.o.provides.build
.PHONY : capchild/CMakeFiles/capchild.dir/capture_sync.c.o.provides

capchild/CMakeFiles/capchild.dir/capture_sync.c.o.provides.build: capchild/CMakeFiles/capchild.dir/capture_sync.c.o


# Object files for target capchild
capchild_OBJECTS = \
"CMakeFiles/capchild.dir/capture_ifinfo.c.o" \
"CMakeFiles/capchild.dir/capture_sync.c.o"

# External object files for target capchild
capchild_EXTERNAL_OBJECTS =

run/libcapchild.a: capchild/CMakeFiles/capchild.dir/capture_ifinfo.c.o
run/libcapchild.a: capchild/CMakeFiles/capchild.dir/capture_sync.c.o
run/libcapchild.a: capchild/CMakeFiles/capchild.dir/build.make
run/libcapchild.a: capchild/CMakeFiles/capchild.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/sjoshi/Downloads/wireshark-3.0.1/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking C static library ../run/libcapchild.a"
	cd /home/sjoshi/Downloads/wireshark-3.0.1/capchild && $(CMAKE_COMMAND) -P CMakeFiles/capchild.dir/cmake_clean_target.cmake
	cd /home/sjoshi/Downloads/wireshark-3.0.1/capchild && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/capchild.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
capchild/CMakeFiles/capchild.dir/build: run/libcapchild.a

.PHONY : capchild/CMakeFiles/capchild.dir/build

capchild/CMakeFiles/capchild.dir/requires: capchild/CMakeFiles/capchild.dir/capture_ifinfo.c.o.requires
capchild/CMakeFiles/capchild.dir/requires: capchild/CMakeFiles/capchild.dir/capture_sync.c.o.requires

.PHONY : capchild/CMakeFiles/capchild.dir/requires

capchild/CMakeFiles/capchild.dir/clean:
	cd /home/sjoshi/Downloads/wireshark-3.0.1/capchild && $(CMAKE_COMMAND) -P CMakeFiles/capchild.dir/cmake_clean.cmake
.PHONY : capchild/CMakeFiles/capchild.dir/clean

capchild/CMakeFiles/capchild.dir/depend:
	cd /home/sjoshi/Downloads/wireshark-3.0.1 && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/sjoshi/Downloads/wireshark-3.0.1 /home/sjoshi/Downloads/wireshark-3.0.1/capchild /home/sjoshi/Downloads/wireshark-3.0.1 /home/sjoshi/Downloads/wireshark-3.0.1/capchild /home/sjoshi/Downloads/wireshark-3.0.1/capchild/CMakeFiles/capchild.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : capchild/CMakeFiles/capchild.dir/depend

