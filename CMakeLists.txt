# Minimum version of CMake required
cmake_minimum_required(VERSION 3.16)

# Project name and version
project(TTG_APP VERSION 1.0 LANGUAGES CXX)

# Set the C++ standard
set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Recursively find all source files in the src/ directory
file(GLOB_RECURSE SOURCES CONFIGURE_DEPENDS
    src/*.cpp
    src/*.c
)

# Include directories (e.g., headers)
include_directories(
    include
)

# Create the executable
add_executable(${PROJECT_NAME} ${SOURCES})

# Link libraries (optional)
# target_link_libraries(${PROJECT_NAME} library_name)

# Add compiler options (optional)
# target_compile_options(${PROJECT_NAME} PRIVATE -Wall -Wextra -Werror)

# Install rules (optional)
install(TARGETS ${PROJECT_NAME} DESTINATION bin)

# Testing (optional)
enable_testing()
add_test(NAME MyTest COMMAND ${PROJECT_NAME})
