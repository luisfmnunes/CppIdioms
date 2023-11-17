add_executable(crtp crtp.cc src/Polygon2D.cc src/Polygon3D.cc)
target_include_directories(crtp PUBLIC ${CMAKE_CURRENT_LIST_DIR}/include)