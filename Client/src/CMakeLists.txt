cmake_minimum_required(VERSION 3.16)
project(C2Client)

set(CMAKE_CXX_STANDARD 20)

add_executable(C2CLIClient main.cpp HttpParser.cpp HttpParser.h ExecCLIFunction.h)
