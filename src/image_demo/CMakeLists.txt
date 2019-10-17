
cmake_minimum_required(VERSION 2.8.12)

project("generated_code")

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_EXTENSIONS OFF)

# Find requirements
find_package(fastcdr REQUIRED)
find_package(fastrtps REQUIRED)
find_package(OpenCV REQUIRED)


message(STATUS "Configuring ImageMessage...")
add_library(ImageMessage_lib ImageMessage.cxx)
target_link_libraries(ImageMessage_lib fastcdr fastrtps)

add_executable(ImageMessage ImageMessagePubSubTypes.cxx ImageMessagePublisher.cxx ImageMessageSubscriber.cxx ImageMessagePubSubMain.cxx)
target_link_libraries(ImageMessage fastcdr fastrtps
        ImageMessage_lib 
        ${OpenCV_LIBRARIES})

