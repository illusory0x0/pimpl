cmake_minimum_required(VERSION 3.29.3)
project(dtcpp VERSION 0.1.0 LANGUAGES C CXX)

set(CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_EXPORT_COMPILE_COMMANDS on)

add_executable(main main.cpp Widget.cpp WidgetPrivate.cpp)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})