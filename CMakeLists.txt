cmake_minimum_required(VERSION 3.19)

# ccache的使用
find_program(CCACHE_PROGRAM ccache)
if(CCACHE_PROGRAM)
	message("using ccache")
	set_property(GLOBAL PROPERTY RULE_LAUNCH_COMPILE ccache)
	set_property(GLOBAL PROPERTY RULE_LAUNCH_LINK ccache)
endif()

#去除那些烦人的警告
add_definitions(-D _CRT_SECURE_NO_WARNINGS)

project(ctalk CXX)

set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)
set(LIBRARY_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)

link_directories(${PROJECT_SOURCE_DIR}/bin)

set(CMAKE_CXX_STANDARD 20)
INCLUDE_DIRECTORIES(src/include)

add_subdirectory(src)
