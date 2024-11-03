cmake_minimum_required(VERSION 3.30)
project(outputLib)

add_library(${PROJECT_NAME} SHARED ${PROJECT_SOURCE_DIR}/src/Output.cpp)
target_include_directories(${PROJECT_NAME} PUBLIC ${PROJECT_SOURCE_DIR}/include)