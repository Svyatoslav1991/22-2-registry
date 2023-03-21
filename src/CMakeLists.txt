# CMakeList.txt : CMake project for 22_2_registry_1, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)

set(MY_INCLUDE_DIR ${CMAKE_SOURCE_DIR}/include)

# Add source to this project's executable.
add_executable (22_2_registry_1 main.cpp ${MY_INCLUDE_DIR}/functions.h)
target_include_directories(22_2_registry_1 PUBLIC ${CMAKE_SOURCE_DIR}/include)


# TODO: Add tests and install targets if needed.
