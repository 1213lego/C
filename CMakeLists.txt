cmake_minimum_required(VERSION 3.14)
project(C C)

set(CMAKE_C_STANDARD 99)

add_executable(C
        Data-Structures/DoubleLinkedList/main.c Data-Structures/DoubleLinkedList/double-linked-list.c Data-Structures/DoubleLinkedList/double-linked-list.h)
