# Documentation and links
[GoogleTest User’s Guide](https://google.github.io/googletest/)
[assertions](https://google.github.io/googletest/reference/assertions.html)


1. test case/test suite: Groupe of tests
2. test (TEST()): individual test
3. gtest automaticall adds CTest stuffs.

# building the tests
[Testing with cmake and CTest](https://cmake.org/cmake/help/book/mastering-cmake/chapter/Testing%20With%20CMake%20and%20CTest.html)

The cmake generates a file CTestTestfile.cmake and generates a target "ctest"

## Windows
    using linux subsystem for windows (installed cmake, g++, ninja, make, etc.)

# running the tests (using ctest)
1. Run all tests
    $ ctest
2. Run a specific test
   using test option: -R <regex>  Run tests matching regular expression
    $ ctest -R <test name>
# runnig the test execuitable
simply running the test executable gives the colored output on console
stream the custom failure messages

# Types of test
1. simple test
2. Test fixtures: using same data configuration for multiple tests
   TEST_F (example at ./TEST_F)