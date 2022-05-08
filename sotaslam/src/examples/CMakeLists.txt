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
    RUNTIME_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/bin
)