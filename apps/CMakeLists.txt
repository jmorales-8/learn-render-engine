cmake_minimum_required(VERSION 3.22)

add_executable(
    renderingengine
    "${HEADER_FILES}"
    "main.cpp"
)

# C++ 20
target_compile_features(
    renderingengine PRIVATE
    cxx_std_20
)

# Visual Studio set project as startup
set_property(
    DIRECTORY "${CMAKE_CURRENT_SOURCE_DIR}"
    PROPERTY VS_STARTUP_PROJECT renderingengine
)

# Find and add Vulkan's lib and include files
find_package(Vulkan REQUIRED)
target_link_libraries(renderingengine "${Vulkan_LIBRARIES}")

# Find and add SDL2's lib
target_link_libraries(renderingengine "${Vulkan_LIBRARIES}/../SDL2.lib")

# Find and add stb's include header
set(STB_INCLUDE_DIRS "dependencies/stb")

# Include the library headers with the SYSTEM flag to suppress warnings when building
target_include_directories(
    renderingengine SYSTEM PUBLIC
    "${Vulkan_INCLUDE_DIRS}"
    "${STB_INCLUDE_DIRS}"
)

target_include_directories(
    renderingengine PUBLIC
    "${PROJECT_BINARY_DIR}"
    "${PROJECT_SOURCE_DIR}/src"
)
