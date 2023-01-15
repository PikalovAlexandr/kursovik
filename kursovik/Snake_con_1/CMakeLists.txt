cmake_minimum_required(VERSION 3.5)

project(Snake_con_1 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(Snake_con_1 main.cpp
                           snake.cpp
                           snake.h
                           game.cpp
                           game.h
                           const.h
                           field.cpp
                           field.h)
