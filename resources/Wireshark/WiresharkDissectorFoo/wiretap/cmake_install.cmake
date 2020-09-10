# Install script for directory: /home/sjoshi/Downloads/wireshark-3.0.1/wiretap

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/usr/local")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "RelWithDebInfo")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libwiretap.so.9.0.1"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libwiretap.so.9"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libwiretap.so"
      )
    if(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      file(RPATH_CHECK
           FILE "${file}"
           RPATH "$ORIGIN")
    endif()
  endforeach()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES
    "/home/sjoshi/Downloads/wireshark-3.0.1/run/libwiretap.so.9.0.1"
    "/home/sjoshi/Downloads/wireshark-3.0.1/run/libwiretap.so.9"
    "/home/sjoshi/Downloads/wireshark-3.0.1/run/libwiretap.so"
    )
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libwiretap.so.9.0.1"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libwiretap.so.9"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libwiretap.so"
      )
    if(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      file(RPATH_CHANGE
           FILE "${file}"
           OLD_RPATH "/home/sjoshi/Downloads/wireshark-3.0.1/run:"
           NEW_RPATH "$ORIGIN")
      if(CMAKE_INSTALL_DO_STRIP)
        execute_process(COMMAND "/usr/bin/strip" "${file}")
      endif()
    endif()
  endforeach()
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/wireshark/wiretap" TYPE FILE FILES
    "/home/sjoshi/Downloads/wireshark-3.0.1/wiretap/file_wrappers.h"
    "/home/sjoshi/Downloads/wireshark-3.0.1/wiretap/merge.h"
    "/home/sjoshi/Downloads/wireshark-3.0.1/wiretap/pcap-encap.h"
    "/home/sjoshi/Downloads/wireshark-3.0.1/wiretap/pcapng_module.h"
    "/home/sjoshi/Downloads/wireshark-3.0.1/wiretap/secrets-types.h"
    "/home/sjoshi/Downloads/wireshark-3.0.1/wiretap/wtap.h"
    "/home/sjoshi/Downloads/wireshark-3.0.1/wiretap/wtap_opttypes.h"
    )
endif()

