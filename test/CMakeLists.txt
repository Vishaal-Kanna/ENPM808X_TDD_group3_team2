set(GTEST_SHUFFLE 1)

add_executable(
    cpp-test
    main.cpp
    test.cpp
)

target_link_libraries(cpp-test PUBLIC gtest)
