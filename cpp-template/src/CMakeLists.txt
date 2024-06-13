add_executable(${TARGET_NAME}
        ${TARGET_MAIN}
        ${TARGET_SOURCES}
)

set_target_properties(${TARGET_NAME}
        PROPERTIES
        ENABLE_EXPORTS 1
        OUTPUT_NAME "example"
        RUNTIME_OUTPUT_DIRECTORY "${PROJECT_SOURCE_DIR}/bin"
)

target_sources(${TARGET_NAME} INTERFACE ${TARGET_SOURCES} PUBLIC ${TARGET_HEADERS})
target_include_directories(${TARGET_NAME} PUBLIC ${TARGET_SRC_PATH})

target_compile_options(${TARGET_NAME}
        PRIVATE
        -DPROJECT_DIR="${TARGET_PATH}"
)