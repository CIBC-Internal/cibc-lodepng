cmake_minimum_required(VERSION 2.8.7)

set (Sources
  lodepng/lodepng.cpp
  lodepng/lodepng.h
  )

SET(SCI_LODEPNG_LIBRARY lodepng CACHE INTERNAL "Lodepng library name.")
add_library(${SCI_LODEPNG_LIBRARY} STATIC ${Sources})
