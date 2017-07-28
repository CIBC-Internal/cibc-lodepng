cmake_minimum_required(VERSION 2.8.7)

set (Sources
  lodepng/lodepng.cpp
  lodepng/lodepng.h
  )

add_library(lodepng ${Sources})
