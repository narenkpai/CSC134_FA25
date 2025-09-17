cmake_minimum_required(VERSION 4.0)
project(WakeTechC__)

set(CMAKE_CXX_STANDARD 14)

include_directories(CSC134_Lab1)

add_executable(WakeTechC__
        CSC134_Lab1/CSC134_Lab1.docx
        CSC134_Lab1/IPO_Algorithm_Example.docx
        CSC134_Lab1/main.cpp
        CSC134_Lab1/Translate_IPO_into_C++.docx
        CSC134_Lab3/Pai_Lab3.cpp
        CSC134_Lab3/Pai_Lab3.h)
