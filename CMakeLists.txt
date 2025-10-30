cmake_minimum_required(VERSION 3.10)
project(KamaCache)

# 使用 C++17
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# 包含头文件目录
include_directories(include)

# 添加源文件
add_executable(KamaCache
    src/main.cpp
    src/container_demo.cpp
)
