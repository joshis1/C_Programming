# Install script for directory: /home/sjoshi/Downloads/wireshark-3.0.1

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
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/wireshark" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/wireshark")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/wireshark"
         RPATH "$ORIGIN/../lib")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE EXECUTABLE FILES "/home/sjoshi/Downloads/wireshark-3.0.1/run/wireshark")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/wireshark" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/wireshark")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/wireshark"
         OLD_RPATH "/home/sjoshi/Downloads/wireshark-3.0.1/run:"
         NEW_RPATH "$ORIGIN/../lib")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/wireshark")
    endif()
  endif()
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/tshark" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/tshark")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/tshark"
         RPATH "$ORIGIN/../lib")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE EXECUTABLE FILES "/home/sjoshi/Downloads/wireshark-3.0.1/run/tshark")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/tshark" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/tshark")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/tshark"
         OLD_RPATH "/home/sjoshi/Downloads/wireshark-3.0.1/run:"
         NEW_RPATH "$ORIGIN/../lib")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/tshark")
    endif()
  endif()
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/rawshark" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/rawshark")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/rawshark"
         RPATH "$ORIGIN/../lib")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE EXECUTABLE FILES "/home/sjoshi/Downloads/wireshark-3.0.1/run/rawshark")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/rawshark" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/rawshark")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/rawshark"
         OLD_RPATH "/home/sjoshi/Downloads/wireshark-3.0.1/run:"
         NEW_RPATH "$ORIGIN/../lib")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/rawshark")
    endif()
  endif()
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/sharkd" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/sharkd")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/sharkd"
         RPATH "$ORIGIN/../lib")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE EXECUTABLE FILES "/home/sjoshi/Downloads/wireshark-3.0.1/run/sharkd")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/sharkd" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/sharkd")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/sharkd"
         OLD_RPATH "/home/sjoshi/Downloads/wireshark-3.0.1/run:"
         NEW_RPATH "$ORIGIN/../lib")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/sharkd")
    endif()
  endif()
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/randpkt" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/randpkt")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/randpkt"
         RPATH "$ORIGIN/../lib")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE EXECUTABLE FILES "/home/sjoshi/Downloads/wireshark-3.0.1/run/randpkt")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/randpkt" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/randpkt")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/randpkt"
         OLD_RPATH "/home/sjoshi/Downloads/wireshark-3.0.1/run:"
         NEW_RPATH "$ORIGIN/../lib")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/randpkt")
    endif()
  endif()
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/text2pcap" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/text2pcap")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/text2pcap"
         RPATH "$ORIGIN/../lib")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE EXECUTABLE FILES "/home/sjoshi/Downloads/wireshark-3.0.1/run/text2pcap")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/text2pcap" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/text2pcap")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/text2pcap"
         OLD_RPATH "/home/sjoshi/Downloads/wireshark-3.0.1/run:"
         NEW_RPATH "$ORIGIN/../lib")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/text2pcap")
    endif()
  endif()
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/mergecap" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/mergecap")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/mergecap"
         RPATH "$ORIGIN/../lib")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE EXECUTABLE FILES "/home/sjoshi/Downloads/wireshark-3.0.1/run/mergecap")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/mergecap" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/mergecap")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/mergecap"
         OLD_RPATH "/home/sjoshi/Downloads/wireshark-3.0.1/run:"
         NEW_RPATH "$ORIGIN/../lib")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/mergecap")
    endif()
  endif()
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/reordercap" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/reordercap")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/reordercap"
         RPATH "$ORIGIN/../lib")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE EXECUTABLE FILES "/home/sjoshi/Downloads/wireshark-3.0.1/run/reordercap")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/reordercap" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/reordercap")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/reordercap"
         OLD_RPATH "/home/sjoshi/Downloads/wireshark-3.0.1/run:"
         NEW_RPATH "$ORIGIN/../lib")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/reordercap")
    endif()
  endif()
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/capinfos" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/capinfos")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/capinfos"
         RPATH "$ORIGIN/../lib")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE EXECUTABLE FILES "/home/sjoshi/Downloads/wireshark-3.0.1/run/capinfos")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/capinfos" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/capinfos")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/capinfos"
         OLD_RPATH "/home/sjoshi/Downloads/wireshark-3.0.1/run:"
         NEW_RPATH "$ORIGIN/../lib")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/capinfos")
    endif()
  endif()
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/captype" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/captype")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/captype"
         RPATH "$ORIGIN/../lib")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE EXECUTABLE FILES "/home/sjoshi/Downloads/wireshark-3.0.1/run/captype")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/captype" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/captype")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/captype"
         OLD_RPATH "/home/sjoshi/Downloads/wireshark-3.0.1/run:"
         NEW_RPATH "$ORIGIN/../lib")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/captype")
    endif()
  endif()
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/editcap" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/editcap")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/editcap"
         RPATH "$ORIGIN/../lib")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE EXECUTABLE FILES "/home/sjoshi/Downloads/wireshark-3.0.1/run/editcap")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/editcap" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/editcap")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/editcap"
         OLD_RPATH "/home/sjoshi/Downloads/wireshark-3.0.1/run:"
         NEW_RPATH "$ORIGIN/../lib")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/editcap")
    endif()
  endif()
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/dumpcap" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/dumpcap")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/dumpcap"
         RPATH "$ORIGIN/../lib")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE EXECUTABLE PERMISSIONS OWNER_READ OWNER_WRITE OWNER_EXECUTE GROUP_READ GROUP_EXECUTE WORLD_READ WORLD_EXECUTE FILES "/home/sjoshi/Downloads/wireshark-3.0.1/run/dumpcap")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/dumpcap" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/dumpcap")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/dumpcap"
         OLD_RPATH "/home/sjoshi/Downloads/wireshark-3.0.1/run:"
         NEW_RPATH "$ORIGIN/../lib")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/dumpcap")
    endif()
  endif()
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/idl2wrs" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/idl2wrs")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/idl2wrs"
         RPATH "$ORIGIN/../lib")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE EXECUTABLE FILES "/home/sjoshi/Downloads/wireshark-3.0.1/run/idl2wrs")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/idl2wrs" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/idl2wrs")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/idl2wrs"
         OLD_RPATH "/home/sjoshi/Downloads/wireshark-3.0.1/run:"
         NEW_RPATH "$ORIGIN/../lib")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/idl2wrs")
    endif()
  endif()
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/wireshark" TYPE FILE PERMISSIONS OWNER_WRITE OWNER_READ GROUP_READ WORLD_READ FILES
    "/home/sjoshi/Downloads/wireshark-3.0.1/COPYING"
    "/home/sjoshi/Downloads/wireshark-3.0.1/cfilters"
    "/home/sjoshi/Downloads/wireshark-3.0.1/colorfilters"
    "/home/sjoshi/Downloads/wireshark-3.0.1/dfilters"
    "/home/sjoshi/Downloads/wireshark-3.0.1/enterprises.tsv"
    "/home/sjoshi/Downloads/wireshark-3.0.1/ipmap.html"
    "/home/sjoshi/Downloads/wireshark-3.0.1/manuf"
    "/home/sjoshi/Downloads/wireshark-3.0.1/pdml2html.xsl"
    "/home/sjoshi/Downloads/wireshark-3.0.1/services"
    "/home/sjoshi/Downloads/wireshark-3.0.1/smi_modules"
    "/home/sjoshi/Downloads/wireshark-3.0.1/wka"
    "/home/sjoshi/Downloads/wireshark-3.0.1/docbook/ws.css"
    "/home/sjoshi/Downloads/wireshark-3.0.1/doc/AUTHORS-SHORT"
    "/home/sjoshi/Downloads/wireshark-3.0.1/doc/androiddump.html"
    "/home/sjoshi/Downloads/wireshark-3.0.1/doc/udpdump.html"
    "/home/sjoshi/Downloads/wireshark-3.0.1/doc/capinfos.html"
    "/home/sjoshi/Downloads/wireshark-3.0.1/doc/captype.html"
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
    "/home/sjoshi/Downloads/wireshark-3.0.1/doc/wireshark.html"
    "/home/sjoshi/Downloads/wireshark-3.0.1/doc/wireshark-filter.html"
    )
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/wireshark" TYPE FILE FILES
    "/home/sjoshi/Downloads/wireshark-3.0.1/cfile.h"
    "/home/sjoshi/Downloads/wireshark-3.0.1/cli_main.h"
    "/home/sjoshi/Downloads/wireshark-3.0.1/file.h"
    "/home/sjoshi/Downloads/wireshark-3.0.1/globals.h"
    "/home/sjoshi/Downloads/wireshark-3.0.1/log.h"
    "/home/sjoshi/Downloads/wireshark-3.0.1/ws_attributes.h"
    "/home/sjoshi/Downloads/wireshark-3.0.1/ws_compiler_tests.h"
    "/home/sjoshi/Downloads/wireshark-3.0.1/ws_diag_control.h"
    "/home/sjoshi/Downloads/wireshark-3.0.1/ws_symbol_export.h"
    "/home/sjoshi/Downloads/wireshark-3.0.1/version_info.h"
    "/home/sjoshi/Downloads/wireshark-3.0.1/ws_version.h"
    )
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/mime/packages" TYPE FILE RENAME "wireshark.xml" FILES "/home/sjoshi/Downloads/wireshark-3.0.1/wireshark-mime-package.xml")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/appdata" TYPE FILE FILES "/home/sjoshi/Downloads/wireshark-3.0.1/wireshark.appdata.xml")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/applications" TYPE FILE FILES "/home/sjoshi/Downloads/wireshark-3.0.1/wireshark.desktop")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/icons/hicolor/16x16/apps" TYPE FILE RENAME "wireshark.png" FILES "/home/sjoshi/Downloads/wireshark-3.0.1/image/wsicon16.png")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/icons/hicolor/16x16/mimetypes" TYPE FILE RENAME "application-wireshark-doc.png" FILES "/home/sjoshi/Downloads/wireshark-3.0.1/image/WiresharkDoc-16.png")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/icons/hicolor/24x24/apps" TYPE FILE RENAME "wireshark.png" FILES "/home/sjoshi/Downloads/wireshark-3.0.1/image/wsicon24.png")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/icons/hicolor/24x24/mimetypes" TYPE FILE RENAME "application-wireshark-doc.png" FILES "/home/sjoshi/Downloads/wireshark-3.0.1/image/WiresharkDoc-24.png")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/icons/hicolor/32x32/apps" TYPE FILE RENAME "wireshark.png" FILES "/home/sjoshi/Downloads/wireshark-3.0.1/image/wsicon32.png")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/icons/hicolor/32x32/mimetypes" TYPE FILE RENAME "application-wireshark-doc.png" FILES "/home/sjoshi/Downloads/wireshark-3.0.1/image/WiresharkDoc-32.png")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/icons/hicolor/48x48/apps" TYPE FILE RENAME "wireshark.png" FILES "/home/sjoshi/Downloads/wireshark-3.0.1/image/wsicon48.png")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/icons/hicolor/48x48/mimetypes" TYPE FILE RENAME "application-wireshark-doc.png" FILES "/home/sjoshi/Downloads/wireshark-3.0.1/image/WiresharkDoc-48.png")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/icons/hicolor/64x64/apps" TYPE FILE RENAME "wireshark.png" FILES "/home/sjoshi/Downloads/wireshark-3.0.1/image/wsicon64.png")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/icons/hicolor/64x64/mimetypes" TYPE FILE RENAME "application-wireshark-doc.png" FILES "/home/sjoshi/Downloads/wireshark-3.0.1/image/WiresharkDoc-64.png")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/icons/hicolor/128x128/apps" TYPE FILE RENAME "wireshark.png" FILES "/home/sjoshi/Downloads/wireshark-3.0.1/image/wsicon128.png")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/icons/hicolor/128x128/mimetypes" TYPE FILE RENAME "application-wireshark-doc.png" FILES "/home/sjoshi/Downloads/wireshark-3.0.1/image/WiresharkDoc-128.png")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/icons/hicolor/256x256/apps" TYPE FILE RENAME "wireshark.png" FILES "/home/sjoshi/Downloads/wireshark-3.0.1/image/wsicon256.png")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/icons/hicolor/256x256/mimetypes" TYPE FILE RENAME "application-wireshark-doc.png" FILES "/home/sjoshi/Downloads/wireshark-3.0.1/image/WiresharkDoc-256.png")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/icons/hicolor/scalable/apps" TYPE FILE RENAME "wireshark.svg" FILES "/home/sjoshi/Downloads/wireshark-3.0.1/image/wsicon.svg")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/pkgconfig" TYPE FILE FILES "/home/sjoshi/Downloads/wireshark-3.0.1/wireshark.pc")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/wireshark" TYPE DIRECTORY PERMISSIONS OWNER_WRITE OWNER_READ GROUP_READ WORLD_READ DIR_PERMISSIONS OWNER_EXECUTE OWNER_WRITE OWNER_READ GROUP_EXECUTE GROUP_READ WORLD_EXECUTE WORLD_READ FILES
    "/home/sjoshi/Downloads/wireshark-3.0.1/diameter"
    "/home/sjoshi/Downloads/wireshark-3.0.1/dtds"
    "/home/sjoshi/Downloads/wireshark-3.0.1/profiles"
    "/home/sjoshi/Downloads/wireshark-3.0.1/radius"
    "/home/sjoshi/Downloads/wireshark-3.0.1/tpncp"
    "/home/sjoshi/Downloads/wireshark-3.0.1/wimaxasncp"
    "/home/sjoshi/Downloads/wireshark-3.0.1/help"
    REGEX "/\\.git$" EXCLUDE REGEX "/\\.svn$" EXCLUDE REGEX "/Makefile\\.[^/]*$" EXCLUDE)
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/wireshark/cmake" TYPE FILE FILES
    "/home/sjoshi/Downloads/wireshark-3.0.1/cmake/modules/FindGLIB2.cmake"
    "/home/sjoshi/Downloads/wireshark-3.0.1/cmake/modules/FindWSWinLibs.cmake"
    "/home/sjoshi/Downloads/wireshark-3.0.1/cmake/modules/UseAsn2Wrs.cmake"
    "/home/sjoshi/Downloads/wireshark-3.0.1/cmake/modules/LocatePythonModule.cmake"
    "/home/sjoshi/Downloads/wireshark-3.0.1/cmake/modules/UseMakePluginReg.cmake"
    )
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/wireshark/cmake" TYPE FILE FILES
    "/home/sjoshi/Downloads/wireshark-3.0.1/WiresharkConfig.cmake"
    "/home/sjoshi/Downloads/wireshark-3.0.1/WiresharkConfigVersion.cmake"
    )
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/wireshark/cmake/WiresharkTargets.cmake")
    file(DIFFERENT EXPORT_FILE_CHANGED FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/wireshark/cmake/WiresharkTargets.cmake"
         "/home/sjoshi/Downloads/wireshark-3.0.1/CMakeFiles/Export/lib/wireshark/cmake/WiresharkTargets.cmake")
    if(EXPORT_FILE_CHANGED)
      file(GLOB OLD_CONFIG_FILES "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/wireshark/cmake/WiresharkTargets-*.cmake")
      if(OLD_CONFIG_FILES)
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/wireshark/cmake/WiresharkTargets.cmake\" will be replaced.  Removing files [${OLD_CONFIG_FILES}].")
        file(REMOVE ${OLD_CONFIG_FILES})
      endif()
    endif()
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/wireshark/cmake" TYPE FILE FILES "/home/sjoshi/Downloads/wireshark-3.0.1/CMakeFiles/Export/lib/wireshark/cmake/WiresharkTargets.cmake")
  if("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ww][Ii][Tt][Hh][Dd][Ee][Bb][Ii][Nn][Ff][Oo])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/wireshark/cmake" TYPE FILE FILES "/home/sjoshi/Downloads/wireshark-3.0.1/CMakeFiles/Export/lib/wireshark/cmake/WiresharkTargets-relwithdebinfo.cmake")
  endif()
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("/home/sjoshi/Downloads/wireshark-3.0.1/capchild/cmake_install.cmake")
  include("/home/sjoshi/Downloads/wireshark-3.0.1/caputils/cmake_install.cmake")
  include("/home/sjoshi/Downloads/wireshark-3.0.1/codecs/cmake_install.cmake")
  include("/home/sjoshi/Downloads/wireshark-3.0.1/doc/cmake_install.cmake")
  include("/home/sjoshi/Downloads/wireshark-3.0.1/epan/cmake_install.cmake")
  include("/home/sjoshi/Downloads/wireshark-3.0.1/extcap/cmake_install.cmake")
  include("/home/sjoshi/Downloads/wireshark-3.0.1/randpkt_core/cmake_install.cmake")
  include("/home/sjoshi/Downloads/wireshark-3.0.1/tools/lemon/cmake_install.cmake")
  include("/home/sjoshi/Downloads/wireshark-3.0.1/ui/cmake_install.cmake")
  include("/home/sjoshi/Downloads/wireshark-3.0.1/wiretap/cmake_install.cmake")
  include("/home/sjoshi/Downloads/wireshark-3.0.1/writecap/cmake_install.cmake")
  include("/home/sjoshi/Downloads/wireshark-3.0.1/wsutil/cmake_install.cmake")
  include("/home/sjoshi/Downloads/wireshark-3.0.1/ui/qt/cmake_install.cmake")
  include("/home/sjoshi/Downloads/wireshark-3.0.1/plugins/epan/ethercat/cmake_install.cmake")
  include("/home/sjoshi/Downloads/wireshark-3.0.1/plugins/epan/foo/cmake_install.cmake")
  include("/home/sjoshi/Downloads/wireshark-3.0.1/plugins/epan/gryphon/cmake_install.cmake")
  include("/home/sjoshi/Downloads/wireshark-3.0.1/plugins/epan/irda/cmake_install.cmake")
  include("/home/sjoshi/Downloads/wireshark-3.0.1/plugins/epan/mate/cmake_install.cmake")
  include("/home/sjoshi/Downloads/wireshark-3.0.1/plugins/epan/opcua/cmake_install.cmake")
  include("/home/sjoshi/Downloads/wireshark-3.0.1/plugins/epan/profinet/cmake_install.cmake")
  include("/home/sjoshi/Downloads/wireshark-3.0.1/plugins/epan/stats_tree/cmake_install.cmake")
  include("/home/sjoshi/Downloads/wireshark-3.0.1/plugins/epan/transum/cmake_install.cmake")
  include("/home/sjoshi/Downloads/wireshark-3.0.1/plugins/epan/unistim/cmake_install.cmake")
  include("/home/sjoshi/Downloads/wireshark-3.0.1/plugins/epan/wimax/cmake_install.cmake")
  include("/home/sjoshi/Downloads/wireshark-3.0.1/plugins/epan/wimaxasncp/cmake_install.cmake")
  include("/home/sjoshi/Downloads/wireshark-3.0.1/plugins/epan/wimaxmacphy/cmake_install.cmake")
  include("/home/sjoshi/Downloads/wireshark-3.0.1/plugins/wiretap/usbdump/cmake_install.cmake")
  include("/home/sjoshi/Downloads/wireshark-3.0.1/plugins/codecs/l16_mono/cmake_install.cmake")
  include("/home/sjoshi/Downloads/wireshark-3.0.1/fuzz/cmake_install.cmake")

endif()

if(CMAKE_INSTALL_COMPONENT)
  set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
file(WRITE "/home/sjoshi/Downloads/wireshark-3.0.1/${CMAKE_INSTALL_MANIFEST}"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
