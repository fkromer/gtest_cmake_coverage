cmake_minimum_required(VERSION 2.6)
project("cmake_gtest_gcov_lcov")
set(CMAKE_BUILD_TYPE Coverage)  # required: Coverage or Debug
set(PROJECT_TEST_NAME unit_tests)

# add the project specific cmake modules directory
# (or copy the module into cmakes installation module directory)
set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${CMAKE_SOURCE_DIR}/cmake/Modules/")
include(CodeCoverage)  # include the cmake code coverage module
# cmake code coverage module target
setup_target_for_coverage(${PROJECT_TEST_NAME}_coverage ${PROJECT_TEST_NAME} coverage)

# for C: debug build, no optimization, profiling enabled
SET(CMAKE_C_FLAGS "-g -O0 -Wall -W -fprofile-arcs -ftest-coverage")
# for C++: debug build, no optimization, profiling enabled
SET(CMAKE_CXX_FLAGS "-g -O0 -Wall -fprofile-arcs -ftest-coverage")

find_package(GTest REQUIRED)
set(includes_production ${PROJECT_SOURCE_DIR}/inc)
include_directories(${GTEST_INCLUDE_DIRS} ${includes_production})

file(GLOB_RECURSE sources_production src/*.c)
file(GLOB_RECURSE sources_test test/*.cc)

add_executable(${PROJECT_TEST_NAME} ${sources_test} ${sources_production})
# add gcov, lcov, genhtml and gcovr explicitly as dependencies
target_link_libraries(unit_tests ${GTEST_LIBRARIES} pthread)
