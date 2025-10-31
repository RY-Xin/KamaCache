cmake_minimum_required(VERSION 3.10)
project(KamaCache)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# 包含头文件目录
include_directories(include src)

# ===============================
# 编译主程序 main
# ===============================
add_executable(main
    src/main.cpp
    src/lru_cache.cpp
#   src/container_demo.cpp
)

# ===============================
# 编译 container_demo
# ===============================
# add_executable(container_demo
#     src/container_demo.cpp
# )

# ===============================
# 编译 LRU demo
# ===============================
add_executable(lru_demo
    src/lru_demo.cpp
    src/lru_cache.cpp
)

# ===============================
# 编译 LFU demo（预留，Day4 使用）
# ===============================
add_executable(lfu_demo
    src/lfu_cache.cpp
)

# ===============================
# 输出信息
# ===============================
message(STATUS "Project: KamaCache")
message(STATUS "C++ Standard: ${CMAKE_CXX_STANDARD}")
