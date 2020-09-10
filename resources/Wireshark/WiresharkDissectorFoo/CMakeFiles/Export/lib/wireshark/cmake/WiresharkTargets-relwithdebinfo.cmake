#----------------------------------------------------------------
# Generated CMake target import file for configuration "RelWithDebInfo".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "epan" for configuration "RelWithDebInfo"
set_property(TARGET epan APPEND PROPERTY IMPORTED_CONFIGURATIONS RELWITHDEBINFO)
set_target_properties(epan PROPERTIES
  IMPORTED_LOCATION_RELWITHDEBINFO "${_IMPORT_PREFIX}/lib/libwireshark.so.12.0.1"
  IMPORTED_SONAME_RELWITHDEBINFO "libwireshark.so.12"
  )

list(APPEND _IMPORT_CHECK_TARGETS epan )
list(APPEND _IMPORT_CHECK_FILES_FOR_epan "${_IMPORT_PREFIX}/lib/libwireshark.so.12.0.1" )

# Import target "wiretap" for configuration "RelWithDebInfo"
set_property(TARGET wiretap APPEND PROPERTY IMPORTED_CONFIGURATIONS RELWITHDEBINFO)
set_target_properties(wiretap PROPERTIES
  IMPORTED_LOCATION_RELWITHDEBINFO "${_IMPORT_PREFIX}/lib/libwiretap.so.9.0.1"
  IMPORTED_SONAME_RELWITHDEBINFO "libwiretap.so.9"
  )

list(APPEND _IMPORT_CHECK_TARGETS wiretap )
list(APPEND _IMPORT_CHECK_FILES_FOR_wiretap "${_IMPORT_PREFIX}/lib/libwiretap.so.9.0.1" )

# Import target "wsutil" for configuration "RelWithDebInfo"
set_property(TARGET wsutil APPEND PROPERTY IMPORTED_CONFIGURATIONS RELWITHDEBINFO)
set_target_properties(wsutil PROPERTIES
  IMPORTED_LOCATION_RELWITHDEBINFO "${_IMPORT_PREFIX}/lib/libwsutil.so.10.0.0"
  IMPORTED_SONAME_RELWITHDEBINFO "libwsutil.so.10"
  )

list(APPEND _IMPORT_CHECK_TARGETS wsutil )
list(APPEND _IMPORT_CHECK_FILES_FOR_wsutil "${_IMPORT_PREFIX}/lib/libwsutil.so.10.0.0" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
