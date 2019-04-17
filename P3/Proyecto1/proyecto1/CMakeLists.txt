cmake_minimum_required(VERSION 3.12)
project(proyecto1)

set(CMAKE_CXX_STANDARD 14)

add_executable(proyecto1 MiniPtest.c Tokens.h lex.yy.c y.tab.c)