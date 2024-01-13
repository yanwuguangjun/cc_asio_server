# set(CMAKE_CXX_STANDARD 20)

include(FetchContent)

FetchContent_Declare(gtest
  QUIET
  URL https://github.com/google/googletest/archive/release-1.10.0.tar.gz
)

# configure build of googletest
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
set(BUILD_GMOCK OFF CACHE BOOL "" FORCE)

FetchContent_MakeAvailable(gtest)

find_package(GTest REQUIRED)


find_package(fmt CONFIG REQUIRED)

add_executable( UNIT_TEST test_connect.cc )

add_compile_definitions(__PROJECT_NAME__="server")

target_link_libraries(UNIT_TEST PRIVATE server_lib gtest_main  )

# automatic discovery of unit tests
include(GoogleTest)
gtest_discover_tests(UNIT_TEST
  PROPERTIES
    LABELS "unit"
  DISCOVERY_TIMEOUT  # how long to wait (in seconds) before crashing
    240
  )
