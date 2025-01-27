cmake_minimum_required(VERSION 3.16)

project(example5 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(example5 main.cpp
    acsystem.h acsystem.cpp
    switches.h switches.cpp
    wire.h wire.cpp
)

include(GNUInstallDirs)
install(TARGETS example5
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
