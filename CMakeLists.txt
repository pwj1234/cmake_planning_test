cmake_minimum_required(VERSION 3.29.0)
project(my_hello)
set(CMAKE_CXX_STANDARD 17)

set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)
aux_source_directory(. SRC_LIST)

add_executable(my_helllo ${SRC_LIST})
