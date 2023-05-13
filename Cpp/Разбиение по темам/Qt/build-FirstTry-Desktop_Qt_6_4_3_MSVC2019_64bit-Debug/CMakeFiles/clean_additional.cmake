# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\FirstTry_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\FirstTry_autogen.dir\\ParseCache.txt"
  "FirstTry_autogen"
  )
endif()
