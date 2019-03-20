# unit tests for the library
INCLUDE(SetupGTest.cmake)

SET(TEST_SRC main.cpp)

ADD_EXECUTABLE(unit_tests ${TEST_SRC})
TARGET_LINK_LIBRARIES(unit_tests gtest gmock interpreter_lib)
TARGET_INCLUDE_DIRECTORIES(unit_tests PUBLIC ${LIBRARY_INCLUDE_DIRS})