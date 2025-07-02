cmake_minimum_required(VERSION 3.10)
project(synad)

set(CMAKE_C_STANDARD 23)
add_executable(synad
        ALL_SYMBOLS_AND_OR_KEYWORDS.h
        main.c
        Utility.h
        find_and_link_files.c
        find_and_link_files.h
)