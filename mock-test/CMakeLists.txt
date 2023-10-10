add_executable(
  testF
    test.cpp
)
target_link_libraries(
  testF
  GTest::gtest_main
)

gtest_discover_tests(testF)