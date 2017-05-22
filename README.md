# clion_cmake_gtest_gcov_lcov
Integration of clion, cmake, gtest, gcov and lcov

## Usage

run the unit tests with coverage analysis:

    cmake .
    make unit_tests_coverage

observe the test coverage:

    xdg-open coverage/src/index.html
