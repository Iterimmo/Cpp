# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\SecondTry_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\SecondTry_autogen.dir\\ParseCache.txt"
  "SecondTry_autogen"
  )
endif()
