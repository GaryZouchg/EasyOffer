#cmake_minimum_required(VERSION 3.10)
cmake_minimum_required(VERSION 3.5.1)
project(CVpractice)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED TRUE)

#add_executable(CVpractice main.cpp )
add_executable(videocapture videocapture.cc)
add_executable(smoothing Smoothing.cc)
add_executable(mat_the_basic_image_container mat_the_basic_image_container.cc)
add_executable(how_to_scan_images how_to_scan_images.cc)
add_executable(mat_mask_operations mat_mask_operations.cc)

find_package(OpenCV HINTS /home/test2/github/opencv/build/)


if(OpenCV_FOUND)
    message(STATUS, "OpenCV_INCLUDE_DIRS=${OpenCV_INCLUDE_DIRS}")
    include_directories(${OpenCV_INCLUDE_DIRS})

    message(STATUS, "OpenCV_LIBS=${OpenCV_LIBS}")

    #target_link_libraries( CVpractice ${OpenCV_LIBS})
    target_link_libraries( videocapture ${OpenCV_LIBS})
    target_link_libraries( smoothing ${OpenCV_LIBS})
    target_link_libraries( mat_the_basic_image_container ${OpenCV_LIBS})
    target_link_libraries( how_to_scan_images ${OpenCV_LIBS})
    target_link_libraries( mat_mask_operations ${OpenCV_LIBS})

    #LIST(APPEND LIBRARIES ${OpenCV_LIBS} opencv_highgui)
    #LIST(APPEND LIBRARIES ${OpenCV_LIBS} libopencv_imgcodecs)

    add_definitions(-DWITH_OPENCV)
else()
    message(FATAL_ERROR "OpenCV required")
endif()

