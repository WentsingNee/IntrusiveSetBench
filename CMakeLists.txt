cmake_minimum_required(VERSION 3.28)
project(intrusive CXX)

set(CMAKE_CXX_STANDARD 14)

set(CMAKE_CXX_FLAGS_RELEASE  "-O2")
set(CMAKE_CXX_FLAGS_RELWITHDEBINFO "-O2")

#add_compile_options(-fno-exceptions)


find_package(Boost REQUIRED)

set(FREE_BSD_DIR ~/open-source/git-cold/freebsd-src/)


add_executable(std_set main.cpp test_std_set.cpp)

add_executable(boost_intrusive main.cpp test_boost_intrusive.cpp)
target_link_libraries(boost_intrusive PRIVATE Boost::boost)


add_executable(free_bsd main.cpp test_free_bsd.cpp)
target_include_directories(free_bsd PRIVATE ${FREE_BSD_DIR})


add_executable(free_bsd_outside main.cpp test_free_bsd_outside.cpp)
target_include_directories(free_bsd_outside PRIVATE ${FREE_BSD_DIR})

add_library(outside_cmp SHARED outside_cmp.cpp)
target_include_directories(outside_cmp PRIVATE ${FREE_BSD_DIR})
target_link_libraries(free_bsd_outside PRIVATE outside_cmp)

