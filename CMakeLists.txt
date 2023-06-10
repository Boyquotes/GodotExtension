#Cmake最低版本
cmake_minimum_required(VERSION 3.18.0)

#设置工具链文件
set(CMAKE_TOOLCHAIN_FILE ${CMAKE_CURRENT_SOURCE_DIR}/vcpkg/scripts/buildsystems/vcpkg.cmake)

#项目名称
get_filename_component(PROJECT_NAME ${CMAKE_CURRENT_SOURCE_DIR} NAME)#获取当前目录名
project(PROJECT_NAME)

#设置包配置文件目录
set(CMAKE_MODULE_PATH ${CMAKE_CURRENT_SOURCE_DIR}/pack)

#构建目标
add_subdirectory(App)
