CMAKE_MINIMUM_REQUIRED(VERSION 3.12)
PROJECT(oplang)

SET(CMAKE_CXX_STANDARD 17)

# define preprocessor variables for different operating systems
IF(MINGW)
    MESSAGE("Building for Windows using MinGW")
    ADD_COMPILE_DEFINITIONS(BUILD_WINDOWS)
ELSEIF(APPLE)
    MESSAGE("Building for MacOS")
    ADD_COMPILE_DEFINITIONS(BUILD_MACOS)
ELSEIF(UNIX)
    MESSAGE("Building for Linux / Unixlike")
    ADD_COMPILE_DEFINITIONS(BUILD_LINUX)
ENDIF()

# define filepaths
SET(DEPENDENCIES ${CMAKE_HOME_DIRECTORY}/dependencies)
SET(LIBRARY_INCLUDE_DIRS ${CMAKE_HOME_DIRECTORY}/src)

# define subdirectories
ADD_SUBDIRECTORY(src)
ADD_SUBDIRECTORY(test)
