# 设置CMake最低版本要求
cmake_minimum_required(VERSION 3.10)

# 设置项目名称
project(PIMPLMainTest)

FILE(GLOB SRC ./*.cpp)

# 添加库
add_executable(main main.cpp)
target_include_directories(main
PRIVATE
    ${CMAKE_CURRENT_SOURCE_DIR}/include
)

target_link_directories(main
PRIVATE
    ${CMAKE_CURRENT_SOURCE_DIR}/lib
)

target_link_libraries(main mypimpl)