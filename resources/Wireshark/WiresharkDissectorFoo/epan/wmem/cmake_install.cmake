# Install script for directory: /home/sjoshi/Downloads/wireshark-3.0.1/epan/wmem

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
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/wireshark/epan/wmem" TYPE FILE FILES
    "/home/sjoshi/Downloads/wireshark-3.0.1/epan/wmem/wmem.h"
    "/home/sjoshi/Downloads/wireshark-3.0.1/epan/wmem/wmem_array.h"
    "/home/sjoshi/Downloads/wireshark-3.0.1/epan/wmem/wmem_core.h"
    "/home/sjoshi/Downloads/wireshark-3.0.1/epan/wmem/wmem_list.h"
    "/home/sjoshi/Downloads/wireshark-3.0.1/epan/wmem/wmem_map.h"
    "/home/sjoshi/Downloads/wireshark-3.0.1/epan/wmem/wmem_miscutl.h"
    "/home/sjoshi/Downloads/wireshark-3.0.1/epan/wmem/wmem_queue.h"
    "/home/sjoshi/Downloads/wireshark-3.0.1/epan/wmem/wmem_scopes.h"
    "/home/sjoshi/Downloads/wireshark-3.0.1/epan/wmem/wmem_stack.h"
    "/home/sjoshi/Downloads/wireshark-3.0.1/epan/wmem/wmem_strbuf.h"
    "/home/sjoshi/Downloads/wireshark-3.0.1/epan/wmem/wmem_strutl.h"
    "/home/sjoshi/Downloads/wireshark-3.0.1/epan/wmem/wmem_tree.h"
    "/home/sjoshi/Downloads/wireshark-3.0.1/epan/wmem/wmem_interval_tree.h"
    "/home/sjoshi/Downloads/wireshark-3.0.1/epan/wmem/wmem_user_cb.h"
    )
endif()

