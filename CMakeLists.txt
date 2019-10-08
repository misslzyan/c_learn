cmake_minimum_required(VERSION 3.13)
project(proto)

set(CMAKE_CXX_STANDARD 11)
include_directories(/usr/local/include)
link_directories(/usr/local/lib)


add_subdirectory(file)

add_executable(proto main.cpp hello.pb.cc)
add_executable(read read.cpp hello.pb.cc)

target_link_libraries(proto pthread protobuf)
target_link_libraries(read pthread protobuf)