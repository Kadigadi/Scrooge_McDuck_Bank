cmake_minimum_required(VERSION 3.6)
project(Bank)

set(CMAKE_CXX_STANDARD 14)

set(SOURCE_FILES main.cpp Credit/Credit.cpp Credit/Credit.h Credit/AnnKredSumKr.cpp Credit/AnnKredSumKr.h)
add_executable(Bank ${SOURCE_FILES})