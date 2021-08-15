cmake_minimum_required(VERSION 3.17)
project(Elaborato)

add_subdirectory(test)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

set(QT_VERSION 6)
set(REQUIRED_LIBS Core Gui Widgets)
set(REQUIRED_LIBS_QUALIFIED Qt6::Core Qt6::Gui Qt6::Widgets)

add_executable(${PROJECT_NAME} main.cpp mainwindow.cpp mainwindow.h mainwindow.ui Time.cpp Time.h Date.cpp Date.h Timer.cpp Timer.h)

find_package(Qt${QT_VERSION} COMPONENTS ${REQUIRED_LIBS} REQUIRED)
target_link_libraries(${PROJECT_NAME} ${REQUIRED_LIBS_QUALIFIED})

set(SOURCE_FILES mainwindow.cpp mainwindow.h mainwindow.ui Time.cpp Time.h Date.cpp Date.h Timer.cpp Timer.h)
add_library(core ${SOURCE_FILES})
target_link_libraries(core ${REQUIRED_LIBS_QUALIFIED})