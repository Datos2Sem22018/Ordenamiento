cmake_minimum_required(VERSION 3.12)
project(Ordenamiento)

set(CMAKE_CXX_STANDARD 14)

add_executable(Ordenamiento main.cpp LinkedList/LinkedList.cpp LinkedList/LinkedList.h LinkedList/Node/Node.cpp LinkedList/Node/Node.h InsertionSort/InsertionSort.cpp InsertionSort/InsertionSort.h QuickSort/QuickSort.cpp QuickSort/QuickSort.h BubbleSort/BubbleSort.cpp BubbleSort/BubbleSort.h)