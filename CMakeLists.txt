cmake_minimum_required(VERSION 3.28)

project(ASIO-Sockets
  VERSION
  1.0

  DESCRIPTION
  "Project folder for random files and scripts."

  LANGUAGES
  CXX
)

add_custom_target(
    clang-tidy-check clang-tidy -p ${CMAKE_BINARY_DIR}/compile_commands.json -checks=cert* ${sources}
    DEPENDS ${sources})

add_custom_target(check DEPENDS clang-tidy-check)

add_executable(constructors constructors.cpp)
add_executable(pointer pointers.cpp)
add_executable(pointer2 pointers2.cpp)
add_executable(hello-world myfirstcpp.cpp)
add_executable(test scratch1.cpp)
add_executable(refs references.cpp)
add_executable(text text.cpp)
