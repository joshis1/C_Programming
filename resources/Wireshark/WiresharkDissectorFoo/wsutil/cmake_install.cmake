# Install script for directory: /home/sjoshi/Downloads/wireshark-3.0.1/wsutil

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
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libwsutil.so.10.0.0"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libwsutil.so.10"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libwsutil.so"
      )
    if(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      file(RPATH_CHECK
           FILE "${file}"
           RPATH "$ORIGIN")
    endif()
  endforeach()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES
    "/home/sjoshi/Downloads/wireshark-3.0.1/run/libwsutil.so.10.0.0"
    "/home/sjoshi/Downloads/wireshark-3.0.1/run/libwsutil.so.10"
    "/home/sjoshi/Downloads/wireshark-3.0.1/run/libwsutil.so"
    )
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libwsutil.so.10.0.0"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libwsutil.so.10"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libwsutil.so"
      )
    if(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      file(RPATH_CHANGE
           FILE "${file}"
           OLD_RPATH ":::::::"
           NEW_RPATH "$ORIGIN")
      if(CMAKE_INSTALL_DO_STRIP)
        execute_process(COMMAND "/usr/bin/strip" "${file}")
      endif()
    endif()
  endforeach()
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/wireshark/wsutil" TYPE FILE FILES
    "/home/sjoshi/Downloads/wireshark-3.0.1/wsutil/adler32.h"
    "/home/sjoshi/Downloads/wireshark-3.0.1/wsutil/base32.h"
    "/home/sjoshi/Downloads/wireshark-3.0.1/wsutil/bits_count_ones.h"
    "/home/sjoshi/Downloads/wireshark-3.0.1/wsutil/bits_ctz.h"
    "/home/sjoshi/Downloads/wireshark-3.0.1/wsutil/bitswap.h"
    "/home/sjoshi/Downloads/wireshark-3.0.1/wsutil/buffer.h"
    "/home/sjoshi/Downloads/wireshark-3.0.1/wsutil/color.h"
    "/home/sjoshi/Downloads/wireshark-3.0.1/wsutil/copyright_info.h"
    "/home/sjoshi/Downloads/wireshark-3.0.1/wsutil/cpu_info.h"
    "/home/sjoshi/Downloads/wireshark-3.0.1/wsutil/crash_info.h"
    "/home/sjoshi/Downloads/wireshark-3.0.1/wsutil/crc6.h"
    "/home/sjoshi/Downloads/wireshark-3.0.1/wsutil/crc7.h"
    "/home/sjoshi/Downloads/wireshark-3.0.1/wsutil/crc8.h"
    "/home/sjoshi/Downloads/wireshark-3.0.1/wsutil/crc10.h"
    "/home/sjoshi/Downloads/wireshark-3.0.1/wsutil/crc11.h"
    "/home/sjoshi/Downloads/wireshark-3.0.1/wsutil/crc16.h"
    "/home/sjoshi/Downloads/wireshark-3.0.1/wsutil/crc16-plain.h"
    "/home/sjoshi/Downloads/wireshark-3.0.1/wsutil/crc32.h"
    "/home/sjoshi/Downloads/wireshark-3.0.1/wsutil/curve25519.h"
    "/home/sjoshi/Downloads/wireshark-3.0.1/wsutil/eax.h"
    "/home/sjoshi/Downloads/wireshark-3.0.1/wsutil/filesystem.h"
    "/home/sjoshi/Downloads/wireshark-3.0.1/wsutil/frequency-utils.h"
    "/home/sjoshi/Downloads/wireshark-3.0.1/wsutil/g711.h"
    "/home/sjoshi/Downloads/wireshark-3.0.1/wsutil/inet_addr.h"
    "/home/sjoshi/Downloads/wireshark-3.0.1/wsutil/inet_ipv4.h"
    "/home/sjoshi/Downloads/wireshark-3.0.1/wsutil/inet_ipv6.h"
    "/home/sjoshi/Downloads/wireshark-3.0.1/wsutil/interface.h"
    "/home/sjoshi/Downloads/wireshark-3.0.1/wsutil/jsmn.h"
    "/home/sjoshi/Downloads/wireshark-3.0.1/wsutil/json_dumper.h"
    "/home/sjoshi/Downloads/wireshark-3.0.1/wsutil/mpeg-audio.h"
    "/home/sjoshi/Downloads/wireshark-3.0.1/wsutil/netlink.h"
    "/home/sjoshi/Downloads/wireshark-3.0.1/wsutil/nstime.h"
    "/home/sjoshi/Downloads/wireshark-3.0.1/wsutil/os_version_info.h"
    "/home/sjoshi/Downloads/wireshark-3.0.1/wsutil/pint.h"
    "/home/sjoshi/Downloads/wireshark-3.0.1/wsutil/plugins.h"
    "/home/sjoshi/Downloads/wireshark-3.0.1/wsutil/pow2.h"
    "/home/sjoshi/Downloads/wireshark-3.0.1/wsutil/privileges.h"
    "/home/sjoshi/Downloads/wireshark-3.0.1/wsutil/processes.h"
    "/home/sjoshi/Downloads/wireshark-3.0.1/wsutil/report_message.h"
    "/home/sjoshi/Downloads/wireshark-3.0.1/wsutil/sign_ext.h"
    "/home/sjoshi/Downloads/wireshark-3.0.1/wsutil/sober128.h"
    "/home/sjoshi/Downloads/wireshark-3.0.1/wsutil/socket.h"
    "/home/sjoshi/Downloads/wireshark-3.0.1/wsutil/str_util.h"
    "/home/sjoshi/Downloads/wireshark-3.0.1/wsutil/strnatcmp.h"
    "/home/sjoshi/Downloads/wireshark-3.0.1/wsutil/strtoi.h"
    "/home/sjoshi/Downloads/wireshark-3.0.1/wsutil/tempfile.h"
    "/home/sjoshi/Downloads/wireshark-3.0.1/wsutil/time_util.h"
    "/home/sjoshi/Downloads/wireshark-3.0.1/wsutil/type_util.h"
    "/home/sjoshi/Downloads/wireshark-3.0.1/wsutil/unicode-utils.h"
    "/home/sjoshi/Downloads/wireshark-3.0.1/wsutil/utf8_entities.h"
    "/home/sjoshi/Downloads/wireshark-3.0.1/wsutil/ws_cpuid.h"
    "/home/sjoshi/Downloads/wireshark-3.0.1/wsutil/ws_mempbrk.h"
    "/home/sjoshi/Downloads/wireshark-3.0.1/wsutil/ws_mempbrk_int.h"
    "/home/sjoshi/Downloads/wireshark-3.0.1/wsutil/ws_pipe.h"
    "/home/sjoshi/Downloads/wireshark-3.0.1/wsutil/ws_printf.h"
    "/home/sjoshi/Downloads/wireshark-3.0.1/wsutil/wsjson.h"
    "/home/sjoshi/Downloads/wireshark-3.0.1/wsutil/xtea.h"
    )
endif()

