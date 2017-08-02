cmake_minimum_required(VERSION 2.8.7)

set (Sources
  lodepng/lodepng.cpp
  lodepng/lodepng.h
  )

SET(SCI_LODEPNG_LIBRARY lodepng CACHE INTERNAL "Lodepng library name.")
MESSAGE("lodepng: " ${SCI_LODEPNG_LIBRARY})
add_library(${SCI_LODEPNG_LIBRARY} STATIC ${Sources})

SET(SCI_LODEPNG_INCLUDE "${CMAKE_CURRENT_SOURCE_DIR}" CACHE INTERNAL "LODEPNG include directories.")

set(SCI_LODEPNG_LIBRARY_DIR ${CMAKE_CURRENT_BINARY_DIR})
set(LODEPNG_USE_FILE "${CMAKE_CURRENT_SOURCE_DIR}/UseLodePng.cmake")

configure_file(LodePngConfig.cmake.in "${CMAKE_CURRENT_BINARY_DIR}/LodePngConfig.cmake" @ONLY)
export(TARGETS ${SCI_LODEPNG_LIBRARY} FILE LodePngExports.cmake)
