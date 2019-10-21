
cmake_minimum_required(VERSION 2.8.12)

project("generated_code")

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_EXTENSIONS OFF)

# Find requirements
find_package(fastcdr REQUIRED)
find_package(fastrtps REQUIRED)
find_package(OpenCV REQUIRED)


message(STATUS "Configuring ImageRequest...")
add_library(ImageRequest_lib ImageRequest.cxx)
target_link_libraries(ImageRequest_lib fastcdr fastrtps)

add_executable(ImageRequest ImageRequestPubSubTypes.cxx ImageRequestPublisher.cxx ImageRequestSubscriber.cxx
 ImageRequestPubSubMain.cxx
 Utils.cpp)
target_link_libraries(ImageRequest fastcdr fastrtps
        ImageRequest_lib 
        ${OpenCV_LIBRARIES})

