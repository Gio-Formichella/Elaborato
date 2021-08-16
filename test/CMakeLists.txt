cmake_minimum_required(VERSION 3.17)

add_subdirectory(./lib/googletest-master)
set(gtest_SOURCE_DIR, ./lib/googletest-master/)
include_directories(${gtest_SOURCE_DIR}/include {gtest_SOURCE_DIR})

set(TEST_SOURCE_FILES runAllTests.cpp TimeTest.cpp DateTest.cpp)
add_executable(runAllTests ${TEST_SOURCE_FILES})

target_link_libraries(runAllTests gtest gtest_main core)