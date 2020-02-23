project(HelloWorldCS)

cmake_minimum_required(VERSION 3.8)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(CopperSpice REQUIRED)

# Setting the rpath to '$ORIGIN' ensures our application looks for the
# CopperSpice libraries and plugins in its own directory first.
set(CMAKE_INSTALL_RPATH "\$ORIGIN")

add_executable(HelloWorldCS src/main.cpp)

target_link_libraries(
  HelloWorldCS
  CopperSpice::CsCore
  CopperSpice::CsGui
)

install(TARGETS HelloWorldCS DESTINATION ${CMAKE_INSTALL_PREFIX})

# Copy the libraries and plugins necessary for our application to our install path.
cs_copy_library(CsCore)
cs_copy_library(CsGui)

cs_copy_plugins(CsGui)
