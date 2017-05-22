# clion_cmake_gtest_gcov_lcov

Integration of cmake, cmake module CodeCoverage, gtest, gcc/g++, gcov, lcov and
gcovr. And basic examples of different code coverage types in C/C++.

## Usage

run the unit tests with coverage analysis:

    cmake .
    make unit_tests_coverage

observe the test coverage:

    xdg-open coverage/src/index.html
