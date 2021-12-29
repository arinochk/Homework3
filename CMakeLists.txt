cmake_minimum_required(VERSION 3.20)
project(task2)

set(CMAKE_CXX_STANDARD 14)

add_executable(task2 main.cpp include/include.h src/parseNumber.cpp src/expressionParse.cpp src/parseBrackets.cpp src/baseParse.cpp src/validateSymbol.cpp src/bracketChecker.cpp)
