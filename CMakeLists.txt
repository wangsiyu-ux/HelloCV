cmake_minimum_required(VERSION 3.10)
project(CryptoTool)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(SOURCES
    src/main.cpp
    src/Crypto.cpp
    src/FileHandler.cpp
    src/Menu.cpp
)

set(HEADERS
    include/Crypto.h
    include/FileHandler.h
    include/Menu.h
)

add_executable(CryptoTool ${SOURCES} ${HEADERS})

target_include_directories(CryptoTool PUBLIC include)
