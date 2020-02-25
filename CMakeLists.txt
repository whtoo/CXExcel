cmake_minimum_required(VERSION 3.7.1)
 
project(NFAStudy)
 
find_package(LLVM REQUIRED CONFIG)
 #设定我们的源码目录
aux_source_directory(./src DIR_SRCS)

message(STATUS "This is BINARY dir " ${PROJECT_BINARY_DIR})
message(STATUS "This is SOURCE dir " ${PROJECT_SOURCE_DIR})
message(STATUS "Found LLVM ${LLVM_PACKAGE_VERSION}")
message(STATUS "Using LLVMConfig.cmake in: ${LLVM_DIR}")
 
# Set your project compile flags.
# E.g. if using the C++ header files
# you will need to enable C++11 support
# for your compiler.
 
include_directories(${LLVM_INCLUDE_DIRS})
add_definitions(${LLVM_DEFINITIONS})
 
# Now build our tools
add_executable(NFAStudy ${DIR_SRCS})
 
 
# Find the libraries that correspond to the LLVM components
# that we wish to use
llvm_map_components_to_libnames(llvm_libs support core irreader)
 
# Link against LLVM libraries
target_link_libraries(NFAStudy ${llvm_libs})
