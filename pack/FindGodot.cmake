include_directories(${CMAKE_SOURCE_DIR}/pack/godot-cpp/include)
include_directories(${CMAKE_SOURCE_DIR}/pack/godot-cpp/gen/include)
include_directories(${CMAKE_SOURCE_DIR}/pack/godot-cpp/gdextension)
link_directories(${CMAKE_SOURCE_DIR}/pack/godot-cpp/bin)
link_libraries(godot-cpp.windows.template_release.x86_64)