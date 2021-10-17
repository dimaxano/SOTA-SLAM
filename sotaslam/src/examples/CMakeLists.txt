add_executable(midair midair.cc)

target_sources(midair
            PUBLIC
            utils.cc
            utils.h)
            
target_link_libraries(midair PUBLIC
                    ${PROJECT_NAME}
                    opencv_imgcodecs)

set_target_properties(midair
    PROPERTIES
    # ARCHIVE_OUTPUT_DIRECTORY "/home/xy/cmake_practice/lib/"
    # LIBRARY_OUTPUT_DIRECTORY "/home/xy/cmake_practice/lib/"
    RUNTIME_OUTPUT_DIRECTORY "/home/dimeow/Documents/repos/SOTA-SLAM/sotaslam/bin"
)