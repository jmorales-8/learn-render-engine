# CMakeList.txt : Top-level CMake project file, do global configuration
# and include sub-projects here.
#
cmake_minimum_required (VERSION 3.8)

project ("renderingengine")

# Add source files
add_executable (renderingengine 
    "src/graphics/vulkan/backend_vulkan.cpp"
    "src/graphics/vulkan/backend_vulkan.hpp"
    "src/win64/main.cpp"
)

# C++20 and above only
set_property(TARGET renderingengine PROPERTY CXX_STANDARD 20)

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

