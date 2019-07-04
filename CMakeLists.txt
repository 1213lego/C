cmake_minimum_required(VERSION 3.14)
project(C C)

set(CMAKE_C_STANDARD 99)

add_executable(C
        Data-Structures/GenericDoubleLinkedList/main.c Data-Structures/GenericDoubleLinkedList/double-linked-list.c Data-Structures/GenericDoubleLinkedList/double-linked-list.h)
