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

# Utility rule file for release_notes_html.

# Include the progress variables for this target.
include docbook/CMakeFiles/release_notes_html.dir/progress.make

docbook/CMakeFiles/release_notes_html: docbook/release-notes.html


release_notes_html: docbook/CMakeFiles/release_notes_html
release_notes_html: docbook/CMakeFiles/release_notes_html.dir/build.make

.PHONY : release_notes_html

# Rule to build all files generated by this target.
docbook/CMakeFiles/release_notes_html.dir/build: release_notes_html

.PHONY : docbook/CMakeFiles/release_notes_html.dir/build

docbook/CMakeFiles/release_notes_html.dir/clean:
	cd /home/sjoshi/Downloads/wireshark-3.0.1/docbook && $(CMAKE_COMMAND) -P CMakeFiles/release_notes_html.dir/cmake_clean.cmake
.PHONY : docbook/CMakeFiles/release_notes_html.dir/clean

docbook/CMakeFiles/release_notes_html.dir/depend:
	cd /home/sjoshi/Downloads/wireshark-3.0.1 && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/sjoshi/Downloads/wireshark-3.0.1 /home/sjoshi/Downloads/wireshark-3.0.1/docbook /home/sjoshi/Downloads/wireshark-3.0.1 /home/sjoshi/Downloads/wireshark-3.0.1/docbook /home/sjoshi/Downloads/wireshark-3.0.1/docbook/CMakeFiles/release_notes_html.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : docbook/CMakeFiles/release_notes_html.dir/depend

