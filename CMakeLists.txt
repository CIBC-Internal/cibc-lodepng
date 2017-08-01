cmake_minimum_required(VERSION 2.8.7)

set (Sources
  lodepng/lodepng.cpp
  lodepng/lodepng.h
  )

add_library(lodepng STATIC ${Sources})

SET(SCI_LODEPNG_LIBRARY lodepng CACHE INTERNAL "Lodepng library name.")
