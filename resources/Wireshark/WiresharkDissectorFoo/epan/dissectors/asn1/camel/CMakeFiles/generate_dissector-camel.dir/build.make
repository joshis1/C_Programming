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

# Utility rule file for generate_dissector-camel.

# Include the progress variables for this target.
include epan/dissectors/asn1/camel/CMakeFiles/generate_dissector-camel.dir/progress.make

epan/dissectors/asn1/camel/CMakeFiles/generate_dissector-camel: epan/dissectors/asn1/camel/packet-camel-stamp


epan/dissectors/asn1/camel/packet-camel-stamp: tools/asn2wrs.py
epan/dissectors/asn1/camel/packet-camel-stamp: epan/dissectors/asn1/camel/CAP-object-identifiers.asn
epan/dissectors/asn1/camel/packet-camel-stamp: epan/dissectors/asn1/camel/CAP-classes.asn
epan/dissectors/asn1/camel/packet-camel-stamp: epan/dissectors/asn1/camel/CAP-datatypes.asn
epan/dissectors/asn1/camel/packet-camel-stamp: epan/dissectors/asn1/camel/CAP-errorcodes.asn
epan/dissectors/asn1/camel/packet-camel-stamp: epan/dissectors/asn1/camel/CAP-errortypes.asn
epan/dissectors/asn1/camel/packet-camel-stamp: epan/dissectors/asn1/camel/CAP-operationcodes.asn
epan/dissectors/asn1/camel/packet-camel-stamp: epan/dissectors/asn1/camel/CAP-GPRS-ReferenceNumber.asn
epan/dissectors/asn1/camel/packet-camel-stamp: epan/dissectors/asn1/camel/CAP-gsmSCF-gsmSRF-ops-args.asn
epan/dissectors/asn1/camel/packet-camel-stamp: epan/dissectors/asn1/camel/CAP-gsmSSF-gsmSCF-ops-args.asn
epan/dissectors/asn1/camel/packet-camel-stamp: epan/dissectors/asn1/camel/CAP-gprsSSF-gsmSCF-ops-args.asn
epan/dissectors/asn1/camel/packet-camel-stamp: epan/dissectors/asn1/camel/CAP-SMS-ops-args.asn
epan/dissectors/asn1/camel/packet-camel-stamp: epan/dissectors/asn1/camel/CAP-U-ABORT-Data.asn
epan/dissectors/asn1/camel/packet-camel-stamp: epan/dissectors/asn1/camel/CamelV2diff.asn
epan/dissectors/asn1/camel/packet-camel-stamp: epan/dissectors/asn1/camel/packet-camel-template.c
epan/dissectors/asn1/camel/packet-camel-stamp: epan/dissectors/asn1/camel/packet-camel-template.h
epan/dissectors/asn1/camel/packet-camel-stamp: epan/dissectors/asn1/camel/camel.asn
epan/dissectors/asn1/camel/packet-camel-stamp: epan/dissectors/asn1/camel/camel.cnf
epan/dissectors/asn1/camel/packet-camel-stamp: epan/dissectors/asn1/inap/inap-exp.cnf
epan/dissectors/asn1/camel/packet-camel-stamp: epan/dissectors/asn1/gsm_map/gsm_map-exp.cnf
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/sjoshi/Downloads/wireshark-3.0.1/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating packet-camel-stamp"
	cd /home/sjoshi/Downloads/wireshark-3.0.1/epan/dissectors/asn1/camel && /usr/bin/python3 /home/sjoshi/Downloads/wireshark-3.0.1/tools/asn2wrs.py -b -L -p camel -c /home/sjoshi/Downloads/wireshark-3.0.1/epan/dissectors/asn1/camel/camel.cnf -s /home/sjoshi/Downloads/wireshark-3.0.1/epan/dissectors/asn1/camel/packet-camel-template -D /home/sjoshi/Downloads/wireshark-3.0.1/epan/dissectors/asn1/camel -O /home/sjoshi/Downloads/wireshark-3.0.1/epan/dissectors CAP-object-identifiers.asn CAP-classes.asn CAP-datatypes.asn CAP-errorcodes.asn CAP-errortypes.asn CAP-operationcodes.asn CAP-GPRS-ReferenceNumber.asn CAP-gsmSCF-gsmSRF-ops-args.asn CAP-gsmSSF-gsmSCF-ops-args.asn CAP-gprsSSF-gsmSCF-ops-args.asn CAP-SMS-ops-args.asn CAP-U-ABORT-Data.asn CamelV2diff.asn ../ros/Remote-Operations-Information-Objects.asn ../ros/Remote-Operations-Generic-ROS-PDUs.asn
	cd /home/sjoshi/Downloads/wireshark-3.0.1/epan/dissectors/asn1/camel && /usr/bin/python3 -c "import shutil, sys; x,s,d=sys.argv; open(d, 'w'); shutil.copystat(s, d)" /home/sjoshi/Downloads/wireshark-3.0.1/epan/dissectors/packet-camel.c packet-camel-stamp

generate_dissector-camel: epan/dissectors/asn1/camel/CMakeFiles/generate_dissector-camel
generate_dissector-camel: epan/dissectors/asn1/camel/packet-camel-stamp
generate_dissector-camel: epan/dissectors/asn1/camel/CMakeFiles/generate_dissector-camel.dir/build.make

.PHONY : generate_dissector-camel

# Rule to build all files generated by this target.
epan/dissectors/asn1/camel/CMakeFiles/generate_dissector-camel.dir/build: generate_dissector-camel

.PHONY : epan/dissectors/asn1/camel/CMakeFiles/generate_dissector-camel.dir/build

epan/dissectors/asn1/camel/CMakeFiles/generate_dissector-camel.dir/clean:
	cd /home/sjoshi/Downloads/wireshark-3.0.1/epan/dissectors/asn1/camel && $(CMAKE_COMMAND) -P CMakeFiles/generate_dissector-camel.dir/cmake_clean.cmake
.PHONY : epan/dissectors/asn1/camel/CMakeFiles/generate_dissector-camel.dir/clean

epan/dissectors/asn1/camel/CMakeFiles/generate_dissector-camel.dir/depend:
	cd /home/sjoshi/Downloads/wireshark-3.0.1 && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/sjoshi/Downloads/wireshark-3.0.1 /home/sjoshi/Downloads/wireshark-3.0.1/epan/dissectors/asn1/camel /home/sjoshi/Downloads/wireshark-3.0.1 /home/sjoshi/Downloads/wireshark-3.0.1/epan/dissectors/asn1/camel /home/sjoshi/Downloads/wireshark-3.0.1/epan/dissectors/asn1/camel/CMakeFiles/generate_dissector-camel.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : epan/dissectors/asn1/camel/CMakeFiles/generate_dissector-camel.dir/depend
