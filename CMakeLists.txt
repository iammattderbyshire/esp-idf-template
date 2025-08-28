cmake_minimum_required(VERSION 3.5)

# Discover components inside the src/ folder so src/ can hold main/, drivers/, components/, etc.
set(EXTRA_COMPONENT_DIRS "${CMAKE_SOURCE_DIR}/src")

include($ENV{IDF_PATH}/tools/cmake/project.cmake)
project(app-template)
