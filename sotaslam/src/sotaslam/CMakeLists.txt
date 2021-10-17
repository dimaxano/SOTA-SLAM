add_library(${PROJECT_NAME} SHARED
            ${CMAKE_CURRENT_SOURCE_DIR}/frontend.cc
            ${CMAKE_CURRENT_SOURCE_DIR}/system.cc
            ${CMAKE_CURRENT_SOURCE_DIR}/frontend.h
            ${CMAKE_CURRENT_SOURCE_DIR}/system.h)

message("${PROJECT_SOURCE_DIR}")

# add_subdirectory(data)
add_subdirectory(features)

target_link_libraries(${PROJECT_NAME}
                        opencv_core
                        opencv_features2d
                        opencv_calib3d)

target_include_directories(${PROJECT_NAME} PUBLIC
                            "$<BUILD_INTERFACE:${PROJECT_SOURCE_DIR}/src/>")
