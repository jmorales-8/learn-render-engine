# CMakeList.txt : Top-level CMake project file, do global configuration
# and include sub-projects here.
#
cmake_minimum_required(VERSION 3.11)

project(
    renderingengine
    VERSION 0.1.0.0 # TODO: Handle by CI?
    DESCRIPTION "A Personal Rendering Engine Project"
    LANGUAGES CXX
)

include("cmake/generate_headers.cmake")

# List of headers to include in the build
set(HEADER_FILES "")

# Subdirectories
add_subdirectory("src")
add_subdirectory("apps")
