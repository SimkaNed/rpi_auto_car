cmake_minimum_required(VERSION 3.12)

project(RC_Car)
set(CMAKE_CXX_STANDARD 20)

file(GLOB TEST tests/*.h tests/*.cpp)
file(GLOB EXMPL examples/*.h examples/*.cpp)

add_executable(test ${TEST})
target_include_directories(test PUBLIC tests)

#add_executable(example ${EXMPL})
#target_include_directories(example PUBLIC examples)
