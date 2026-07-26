cmake_minimum_required(VERSION 3.12)
project(singeltoon)

set(SOURCE_FILES
    src/main.cpp
    src/DataBase.cpp
    )

add_executable(${PROJECT_NAME} ${SOURCE_FILES})