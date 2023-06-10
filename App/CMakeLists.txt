#构建目标名
get_filename_component(BUILD_TARGET_NAME ${CMAKE_CURRENT_SOURCE_DIR} NAME)#设置当前目录名作为构建目标名

#C/C++标准
set(CMAKE_C_STANDARD 17)
set(CMAKE_CXX_STANDARD 20)

#私有源码
aux_source_directory(${CMAKE_CURRENT_SOURCE_DIR}/src PRIVATE_SRC)
#构建目标
add_executable(${BUILD_TARGET_NAME}
    ${PRIVATE_SRC}
)
#目标包含目录
target_include_directories(${BUILD_TARGET_NAME} PRIVATE
)
#目标链接库
target_link_libraries(${BUILD_TARGET_NAME} PRIVATE
)
