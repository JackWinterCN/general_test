# 设置CMake最低版本要求
cmake_minimum_required(VERSION 3.10)

# 设置项目名称
project(PIMPLTest)

FILE(GLOB SRC ./*.cpp)

# 添加库
add_library(mypimpl SHARED ${SRC})

set(TEST_ROOT_DIR "/root/autodl-tmp/general_test/design_pattern/pimpl")

# 设置库的安装路径
set(install_header creater.hpp interface_base.hpp)
install(TARGETS mypimpl DESTINATION ${TEST_ROOT_DIR}/lib)
install(FILES ${install_header} DESTINATION ${TEST_ROOT_DIR}/include)