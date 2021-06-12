cmake_minimum_required(VERSION 3.15)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS ON)

project(seam_carving)

include_directories("inc/")

add_executable(carvnonymous
	src/main.cpp
	src/image.cpp
	src/filter.cpp
	src/algorithm.cpp
)

set(Boost_USE_STATIC_LIBS ON)
set(Boost_USE_MULTITHREADED ON)
set(Boost_USE_STATIC_RUNTIME OFF)

find_package(Boost REQUIRED COMPONENTS)

find_library(LIB_JPEG "jpeg")

if(Boost_FOUND)
    include_directories(${Boost_INCLUDE_DIRS})
	target_link_libraries(carvnonymous ${Boost_LIBRARIES} ${LIB_JPEG})
endif()
