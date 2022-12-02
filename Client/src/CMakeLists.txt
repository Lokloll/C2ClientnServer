cmake_minimum_required(VERSION 3.16)
project(C2Client)

set(CMAKE_CXX_STANDARD 20)

add_executable(C2CLIClient main.cpp HTTP/SendRequest.cpp HTTP/SendRequest.h ExecCLIFunction.h HTTP/ResponseParser.cpp HTTP/ResponseParser.h Types.h Utils/IPUtils.h Utils/UtilsIF.h)
