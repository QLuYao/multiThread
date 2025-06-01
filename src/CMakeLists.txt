#cmake需要的最小版本
cmake_minimum_required(VERSION 3.8)
#设置工程的名称
project("MultiThread")
#设置编译模式.
set(CMAKE_BUILD_TYPE "Debug")
#设置C++调试编译选项
#set(CMAKE_CXX_FLAGS_DEBUG "$ENV{CXXFLAGS} -Og -Wall -g3")
SET(CMAKE_CXX_FLAGS_DEBUG "$ENV{CXXFLAGS} -O0 -Wall -g -ggdb")
#加载当前目录下所有的源文件
file(GLOB HEADFILE ${CMAKE_CURRENT_SOURCE_DIR}/*.h)
file(GLOB SOURCEFILE ${CMAKE_CURRENT_SOURCE_DIR}/*.cpp)
#生成可执行文件
add_executable(${PROJECT_NAME} ${HEADFILE} ${SOURCEFILE})
#设置目标的属性
set_property(TARGET ${PROJECT_NAME} PROPERTY CXX_STANDARD 20)
#设置当前目标的头文件路径
target_include_directories(${PROJECT_NAME} PRIVATE ${CMAKE_CURRENT_SOURCE_DIR})
