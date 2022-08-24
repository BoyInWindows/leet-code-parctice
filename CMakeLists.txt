# CMake 最低版本号要求
cmake_minimum_required (VERSION 3.16)

# 项目信息
project(leet-code-practice)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_BUILD_TYPE "Debug")
# 添加对gdb的支持
set(CMAKE_XX_FLAGS_DEBUG "$ENV{CXXFLAGS} -O0 -Wall -g2 -ggdb")
set(CMAKE_XX_FLAGS_RELEASE "$ENV{CXXFLAGS} -O3 -Wall")

# 源码文件夹
# set(CODE_DIRECTORY 001-TwoSum)
set(CODE_DIRECTORY 002-AddTwoNumbers)

# 可执行文件
set(EXCUTABLE_FILE test_exe)
add_executable(${EXCUTABLE_FILE} ./src/${CODE_DIRECTORY}/test.cc ./src/${CODE_DIRECTORY}/Solution.cc)

set(GTEST_LIB gtest gtest_main pthread)
target_link_libraries(${EXCUTABLE_FILE} ${GTEST_LIB})

enable_testing()
# 测试文件
add_test(NAME ${EXCUTABLE_FILE} COMMAND ${EXCUTABLE_FILE})

