cmake_minimum_required(VERSION 4.1)
project(untitled C)

set(CMAKE_C_STANDARD 99)

add_executable(untitled src/main.c
        include/shell.h
        include/process.h
        include/builtint.h
        src/process.c
        src/parser.c
        src/shell.c
        src/builtin.c
        include/executor.h
        include/parser.h
        src/executor.c)
