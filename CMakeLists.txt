cmake_minimum_required(VERSION 3.17)
project(drugDealerSim)

set(CMAKE_CXX_STANDARD 20)

add_executable(drugDealerSim main.cpp drug.cpp drug.h backpack.cpp backpack.h buyer.cpp buyer.h DayGenerator.cpp DayGenerator.h)