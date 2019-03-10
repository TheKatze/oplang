# define the source files of the library
SET(INTERPRETER_SRC Interpreter.h Interpreter.cpp util/FileLoader.cpp util/FileLoader.h util/Logger.cpp util/Logger.h Token.h)

# create a statically linked library
ADD_LIBRARY(interpreter_lib STATIC ${INTERPRETER_SRC})

# create executable with linked library
ADD_EXECUTABLE(interpreter main.cpp)
TARGET_INCLUDE_DIRECTORIES(interpreter PUBLIC ${LIBRARY_INCLUDE_DIRS})
TARGET_LINK_LIBRARIES(interpreter interpreter_lib)

# define the libs and includes
# TARGET_LINK_LIBRARIES(interpreter_lib)
# TARGET_INCLUDE_DIRECTORIES(interpreter_lib PUBLIC)
# TARGET_COMPILE_OPTIONS(interpreter_lib PUBLIC)