#----------------------------------------------------------------
# Generated CMake target import file.
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "wxcharts::wxcharts" for configuration ""
set_property(TARGET wxcharts::wxcharts APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(wxcharts::wxcharts PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_NOCONFIG "CXX"
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/libwxcharts.a"
  )

list(APPEND _cmake_import_check_targets wxcharts::wxcharts )
list(APPEND _cmake_import_check_files_for_wxcharts::wxcharts "${_IMPORT_PREFIX}/lib/libwxcharts.a" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
