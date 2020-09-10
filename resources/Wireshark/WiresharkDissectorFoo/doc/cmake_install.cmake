# Install script for directory: /home/sjoshi/Downloads/wireshark-3.0.1/doc

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
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/man/man1" TYPE FILE FILES
    "/home/sjoshi/Downloads/wireshark-3.0.1/doc/androiddump.1"
    "/home/sjoshi/Downloads/wireshark-3.0.1/doc/capinfos.1"
    "/home/sjoshi/Downloads/wireshark-3.0.1/doc/captype.1"
    "/home/sjoshi/Downloads/wireshark-3.0.1/doc/ciscodump.1"
    "/home/sjoshi/Downloads/wireshark-3.0.1/doc/ciscodump.1"
    "/home/sjoshi/Downloads/wireshark-3.0.1/doc/dftest.1"
    "/home/sjoshi/Downloads/wireshark-3.0.1/doc/dumpcap.1"
    "/home/sjoshi/Downloads/wireshark-3.0.1/doc/editcap.1"
    "/home/sjoshi/Downloads/wireshark-3.0.1/doc/mergecap.1"
    "/home/sjoshi/Downloads/wireshark-3.0.1/doc/randpkt.1"
    "/home/sjoshi/Downloads/wireshark-3.0.1/doc/randpktdump.1"
    "/home/sjoshi/Downloads/wireshark-3.0.1/doc/rawshark.1"
    "/home/sjoshi/Downloads/wireshark-3.0.1/doc/reordercap.1"
    "/home/sjoshi/Downloads/wireshark-3.0.1/doc/sshdump.1"
    "/home/sjoshi/Downloads/wireshark-3.0.1/doc/text2pcap.1"
    "/home/sjoshi/Downloads/wireshark-3.0.1/doc/tshark.1"
    "/home/sjoshi/Downloads/wireshark-3.0.1/doc/udpdump.1"
    "/home/sjoshi/Downloads/wireshark-3.0.1/doc/wireshark.1"
    )
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/man/man4" TYPE FILE FILES
    "/home/sjoshi/Downloads/wireshark-3.0.1/doc/extcap.4"
    "/home/sjoshi/Downloads/wireshark-3.0.1/doc/wireshark-filter.4"
    )
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/doc/wireshark" TYPE FILE FILES
    "/home/sjoshi/Downloads/wireshark-3.0.1/doc/androiddump.html"
    "/home/sjoshi/Downloads/wireshark-3.0.1/doc/capinfos.html"
    "/home/sjoshi/Downloads/wireshark-3.0.1/doc/captype.html"
    "/home/sjoshi/Downloads/wireshark-3.0.1/doc/ciscodump.html"
    "/home/sjoshi/Downloads/wireshark-3.0.1/doc/ciscodump.html"
    "/home/sjoshi/Downloads/wireshark-3.0.1/doc/dftest.html"
    "/home/sjoshi/Downloads/wireshark-3.0.1/doc/dumpcap.html"
    "/home/sjoshi/Downloads/wireshark-3.0.1/doc/editcap.html"
    "/home/sjoshi/Downloads/wireshark-3.0.1/doc/extcap.html"
    "/home/sjoshi/Downloads/wireshark-3.0.1/doc/mergecap.html"
    "/home/sjoshi/Downloads/wireshark-3.0.1/doc/randpkt.html"
    "/home/sjoshi/Downloads/wireshark-3.0.1/doc/randpktdump.html"
    "/home/sjoshi/Downloads/wireshark-3.0.1/doc/rawshark.html"
    "/home/sjoshi/Downloads/wireshark-3.0.1/doc/reordercap.html"
    "/home/sjoshi/Downloads/wireshark-3.0.1/doc/sshdump.html"
    "/home/sjoshi/Downloads/wireshark-3.0.1/doc/text2pcap.html"
    "/home/sjoshi/Downloads/wireshark-3.0.1/doc/tshark.html"
    "/home/sjoshi/Downloads/wireshark-3.0.1/doc/udpdump.html"
    "/home/sjoshi/Downloads/wireshark-3.0.1/doc/wireshark-filter.html"
    "/home/sjoshi/Downloads/wireshark-3.0.1/doc/wireshark.html"
    )
endif()

