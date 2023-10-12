cmake_minimum_required(VERSION 3.0.2)

find_package(Git)

set(renderingengine_GIT_SHA1 "Unknown")
set(renderingengine_GIT_DATE "Unknown")

if(GIT_FOUND)
    # the commit's SHA1, and whether the building workspace was dirty or not
    execute_process(COMMAND
    "${GIT_EXECUTABLE}" describe --always --abbrev=12 --dirty
    WORKING_DIRECTORY "${CMAKE_SOURCE_DIR}"
    OUTPUT_VARIABLE renderingengine_GIT_SHA1
    ERROR_QUIET OUTPUT_STRIP_TRAILING_WHITESPACE)

    # the date of the commit
    execute_process(COMMAND
    "${GIT_EXECUTABLE}" log -1 --format=%ad --date=local
    WORKING_DIRECTORY "${CMAKE_SOURCE_DIR}"
    OUTPUT_VARIABLE renderingengine_GIT_DATE
    ERROR_QUIET OUTPUT_STRIP_TRAILING_WHITESPACE)
endif()

configure_file(
    "cmake/version.h.in"
    "version.h"
)
