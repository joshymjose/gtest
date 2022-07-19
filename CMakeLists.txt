cmake_minimum_required(VERSION 3.13.2)

project(addition)

set(CMAKE_CXX_STANDARD 11)

include(FetchContent)

FetchContent_Declare(
  googletest
  GIT_REPOSITORY https://github.com/google/googletest.git
  GIT_TAG       v1.12.0
)

# For Windows: Prevent overriding the parent project's compiler/linker settings
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_GetProperties(googletest)
if(NOT googletest_POPULATED)
  FetchContent_Populate(googletest)
  add_subdirectory(${googletest_SOURCE_DIR} ${googletest_BINARY_DIR})
endif()

enable_testing()

include(GoogleTest)

add_executable(
  addition_test
  basic_test.cpp
  addition.cpp
  addition_tests.cpp
)
target_link_libraries(
  addition_test
  GTest::gtest_main
)

add_subdirectory(TEST_F)


gtest_discover_tests(addition_test)