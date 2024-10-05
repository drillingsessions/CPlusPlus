cmake_minimum_required(VERSION 3.20)

project(Tutorial LANGUAGES CXX)

add_executable(app)
target_sources(app PRIVATE "main.cpp")
target_compile_features(app PRIVATE cxx_std_20)
target_include_directories(app PRIVATE "${PROJECT_SOURCE_DIR}")
install(TARGETS app)
