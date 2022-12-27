# CMakeList.txt : Top-level CMake project file, do global configuration
# and include sub-projects here.
#
cmake_minimum_required (VERSION 3.8)

project ("renderingengine")

# Add source files
add_executable (renderingengine 
    "src/graphics/vulkan/backend.cpp"
    "src/graphics/vulkan/backend.hpp"
    "src/win64/main.cpp"
)

# C++ 17
set_property(TARGET renderingengine PROPERTY CXX_STANDARD 17)

# Visual Studio set project as startup
set_property(DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR} 
	PROPERTY VS_STARTUP_PROJECT "renderingengine")


# Find and add Vulkan's lib and include files
find_package(Vulkan REQUIRED)
target_link_libraries(renderingengine ${Vulkan_LIBRARIES})
include_directories(${Vulkan_INCLUDE_DIRS})

## Replace with SDL2??
# Find and add GLFW's lib and include files
#list(APPEND CMAKE_PREFIX_PATH "C:/Libraries/GLFW/glfw-3.3.8/lib-vc2022")
#set(GLFW3_INCLUDE_DIRS "C:/Libraries/GLFW/glfw-3.3.8/include")
#find_library(glfw NAMES glfw3 REQUIRED)
#target_link_libraries(renderingengine ${glfw})
#include_directories(${GLFW3_INCLUDE_DIRS})

# Find and add stb's include header
set(STB_INCLUDE_DIRS "dependencies/stb")
include_directories(${STB_INCLUDE_DIRS})

