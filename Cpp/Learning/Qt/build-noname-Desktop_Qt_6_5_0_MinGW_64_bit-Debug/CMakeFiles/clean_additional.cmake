# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\noname_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\noname_autogen.dir\\ParseCache.txt"
  "noname_autogen"
  )
endif()
