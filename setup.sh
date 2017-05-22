#!/bin/sh
sudo apt-get install cmake
sudo apt-get install build-essential  # gcc, g++, gcov
# gtest - begin
sudo apt-get install libgtest-dev
cd /usr/src/gtest
sudo cmake CMakeLists.txt
sudo make
GTEST_ROOT="/usr/src/gtest"
export GTEST_ROOT
# gtest - end
sudo apt-get install lcov
sudo apt-get install gcovr
sudo apt-get install xdg-utils
