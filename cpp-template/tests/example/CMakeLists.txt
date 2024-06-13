set(TEST_NAME "example-test")
set(TEST_SOURCES "${CMAKE_CURRENT_SOURCE_DIR}/ExampleTest.cpp")

add_executable(${TEST_NAME}
        ${TEST_SOURCES}
)

target_include_directories(${TEST_NAME}
        PUBLIC
        ${TARGET_SRC_PATH}
)

target_link_libraries(${TEST_NAME}
        PRIVATE
        GTest::gtest
        GTest::gtest_main
        ${TARGET_NAME}
)

gtest_discover_tests(${TEST_NAME} EXTRA_ARGS "--gtest_color=yes")