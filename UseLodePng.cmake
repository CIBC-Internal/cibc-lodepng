if(NOT LodePng_FOUND)
  MESSAGE(FATAL_ERROR "Including UseLodePng.cmake but the LODEPNG package was not found.")
endif()

include_directories(${SCI_LODEPNG_INCLUDE})
link_directories(${SCI_LODEPNG_LIBRARY_DIR})
if (DO_LODEPNG_MANGLE)
  add_definitions(-DZ_PREFIX)
endif()
