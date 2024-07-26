# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles/ip-calc-qt-window_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/ip-calc-qt-window_autogen.dir/ParseCache.txt"
  "ip-calc-qt-window_autogen"
  )
endif()
