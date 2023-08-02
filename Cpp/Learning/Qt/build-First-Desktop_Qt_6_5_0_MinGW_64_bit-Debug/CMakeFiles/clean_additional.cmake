# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\First_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\First_autogen.dir\\ParseCache.txt"
  "First_autogen"
  )
endif()
