cmake_minimum_required(VERSION 3.1)
project(PackageTest CXX)

include(${CMAKE_BINARY_DIR}/conanbuildinfo.cmake)
conan_basic_setup()

find_package(Catch2 3 REQUIRED)
add_executable(test test_LomontFFT.cpp)
target_link_libraries(test ${CONAN_LIBS})
target_link_libraries(test Catch2::Catch2)