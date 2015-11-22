#Change this if you need to target a specific CMake version
cmake_minimum_required(VERSION 2.6)
project(SFMLProject)

# Enable debug symbols by default
if(CMAKE_BUILD_TYPE STREQUAL "")
    set(CMAKE_BUILD_TYPE Debug)
endif()
# (you can also set it on the command line: -D CMAKE_BUILD_TYPE=Release)

# Set version information in a config.h file
set(SFMLProject_VERSION_MAJOR 1)
set(SFMLProject_VERSION_MINOR 0)

include_directories("${PROJECT_BINARY_DIR}")

# Define sources and executable
set(EXECUTABLE_NAME "SFMLProject")
add_executable(${EXECUTABLE_NAME} main.cpp src/util/Image.cpp src/util/Image.h src/util/Geom.cpp src/util/Geom.h src/entities/Entity.cpp src/entities/Entity.h src/states/GameState.cpp src/states/GameState.h src/states/Play.cpp src/states/Play.h src/states/Menu.cpp src/states/Menu.h src/states/PlayData.cpp src/states/PlayData.h src/entities/Living.cpp src/entities/Living.h src/entities/Player.cpp src/entities/Player.h src/util/Keys.cpp src/util/Keys.h src/entities/Enemy.cpp src/entities/Enemy.h src/map/Map.cpp src/map/Map.h src/util/Screen.cpp src/util/Screen.h)



# Detect and add SFML
set(CMAKE_MODULE_PATH "${CMAKE_SOURCE_DIR}/cmake_modules" ${CMAKE_MODULE_PATH})
#Find any version 2.X of SFML
#See the FindSFML.cmake file for additional details and instructions
find_package(SFML 2 REQUIRED system window graphics network audio)
if(SFML_FOUND)
    include_directories(${SFML_INCLUDE_DIR})
    target_link_libraries(${EXECUTABLE_NAME} ${SFML_LIBRARIES})
endif()


# Install target
install(TARGETS ${EXECUTABLE_NAME} DESTINATION bin)


# CPack packaging
include(InstallRequiredSystemLibraries)
set(CPACK_PACKAGE_VERSION_MAJOR "${SFMLProject_VERSION_MAJOR}")
set(CPACK_PACKAGE_VERSION_MINOR "${SFMLProject_VERSION_MINOR}")
include(CPack)