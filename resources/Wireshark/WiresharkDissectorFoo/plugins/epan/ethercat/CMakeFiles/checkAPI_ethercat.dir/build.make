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

# Utility rule file for checkAPI_ethercat.

# Include the progress variables for this target.
include plugins/epan/ethercat/CMakeFiles/checkAPI_ethercat.dir/progress.make

plugins/epan/ethercat/CMakeFiles/checkAPI_ethercat:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/sjoshi/Downloads/wireshark-3.0.1/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Running checkAPI_ethercat"
	cd /home/sjoshi/Downloads/wireshark-3.0.1/plugins/epan/ethercat && /usr/bin/perl /home/sjoshi/Downloads/wireshark-3.0.1/tools/checkAPIs.pl -g abort -g termoutput -build packet-ams.c packet-ecatmb.c packet-esl.c packet-ethercat-datagram.c packet-ethercat-frame.c packet-ioraw.c packet-nv.c packet-ethercat-frame.h packet-ecatmb.h packet-nv.h packet-ioraw.h packet-ethercat-datagram.h packet-ams.h

checkAPI_ethercat: plugins/epan/ethercat/CMakeFiles/checkAPI_ethercat
checkAPI_ethercat: plugins/epan/ethercat/CMakeFiles/checkAPI_ethercat.dir/build.make

.PHONY : checkAPI_ethercat

# Rule to build all files generated by this target.
plugins/epan/ethercat/CMakeFiles/checkAPI_ethercat.dir/build: checkAPI_ethercat

.PHONY : plugins/epan/ethercat/CMakeFiles/checkAPI_ethercat.dir/build

plugins/epan/ethercat/CMakeFiles/checkAPI_ethercat.dir/clean:
	cd /home/sjoshi/Downloads/wireshark-3.0.1/plugins/epan/ethercat && $(CMAKE_COMMAND) -P CMakeFiles/checkAPI_ethercat.dir/cmake_clean.cmake
.PHONY : plugins/epan/ethercat/CMakeFiles/checkAPI_ethercat.dir/clean

plugins/epan/ethercat/CMakeFiles/checkAPI_ethercat.dir/depend:
	cd /home/sjoshi/Downloads/wireshark-3.0.1 && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/sjoshi/Downloads/wireshark-3.0.1 /home/sjoshi/Downloads/wireshark-3.0.1/plugins/epan/ethercat /home/sjoshi/Downloads/wireshark-3.0.1 /home/sjoshi/Downloads/wireshark-3.0.1/plugins/epan/ethercat /home/sjoshi/Downloads/wireshark-3.0.1/plugins/epan/ethercat/CMakeFiles/checkAPI_ethercat.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : plugins/epan/ethercat/CMakeFiles/checkAPI_ethercat.dir/depend
