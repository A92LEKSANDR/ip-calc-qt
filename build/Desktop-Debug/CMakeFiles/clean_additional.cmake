# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles/ip-calc_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/ip-calc_autogen.dir/ParseCache.txt"
  "ip-calc_autogen"
  )
endif()
