cmake_minimum_required(VERSION 3.24)
project(25_4_2_Computer_Sim)

set(CMAKE_CXX_STANDARD 14)

add_executable(25_4_2_Computer_Sim  main.cpp my_cpu.h my_ram.h my_disk.h
                                    my_gpu.h my_kbd.h my_cpu.cpp my_disk.cpp
                                    my_gpu.cpp my_kbd.cpp my_ram.cpp)
