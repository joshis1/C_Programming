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

# Utility rule file for checkAPI_foo.

# Include the progress variables for this target.
include plugins/epan/foo/CMakeFiles/checkAPI_foo.dir/progress.make

plugins/epan/foo/CMakeFiles/checkAPI_foo:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/sjoshi/Downloads/wireshark-3.0.1/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Running checkAPI_foo"
	cd /home/sjoshi/Downloads/wireshark-3.0.1/plugins/epan/foo && /usr/bin/perl /home/sjoshi/Downloads/wireshark-3.0.1/tools/checkAPIs.pl -g abort -g termoutput -build packet-foo.c packet-foo.h

checkAPI_foo: plugins/epan/foo/CMakeFiles/checkAPI_foo
checkAPI_foo: plugins/epan/foo/CMakeFiles/checkAPI_foo.dir/build.make

.PHONY : checkAPI_foo

# Rule to build all files generated by this target.
plugins/epan/foo/CMakeFiles/checkAPI_foo.dir/build: checkAPI_foo

.PHONY : plugins/epan/foo/CMakeFiles/checkAPI_foo.dir/build

plugins/epan/foo/CMakeFiles/checkAPI_foo.dir/clean:
	cd /home/sjoshi/Downloads/wireshark-3.0.1/plugins/epan/foo && $(CMAKE_COMMAND) -P CMakeFiles/checkAPI_foo.dir/cmake_clean.cmake
.PHONY : plugins/epan/foo/CMakeFiles/checkAPI_foo.dir/clean

plugins/epan/foo/CMakeFiles/checkAPI_foo.dir/depend:
	cd /home/sjoshi/Downloads/wireshark-3.0.1 && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/sjoshi/Downloads/wireshark-3.0.1 /home/sjoshi/Downloads/wireshark-3.0.1/plugins/epan/foo /home/sjoshi/Downloads/wireshark-3.0.1 /home/sjoshi/Downloads/wireshark-3.0.1/plugins/epan/foo /home/sjoshi/Downloads/wireshark-3.0.1/plugins/epan/foo/CMakeFiles/checkAPI_foo.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : plugins/epan/foo/CMakeFiles/checkAPI_foo.dir/depend

