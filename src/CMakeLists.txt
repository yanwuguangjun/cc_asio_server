
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)


find_package(fmt CONFIG REQUIRED)
find_package(asio CONFIG REQUIRED)

add_compile_definitions(__PROJECT_NAME__ = 'server')




# target_sources(server_lib PRIVATE udp_server.cc PUBLIC udp_server.h)
# target_sources(server_lib PRIVATE helloworld.cc)

  find_package(Protobuf CONFIG REQUIRED)
  find_package(jsoncpp CONFIG REQUIRED)
  find_package(absl CONFIG REQUIRED)
  add_library(pro type.pb.cc)
  target_link_libraries(pro PUBLIC  protobuf::libprotoc protobuf::libprotobuf protobuf::libprotobuf-lite absl::any absl::log absl::base absl::bits JsonCpp::JsonCpp  )


  add_library(server_lib  tcp_server.cc udp_server.cc)

  target_include_directories(server_lib PUBLIC ${CMAKE_CURRENT_LIST_DIR} )

  target_link_libraries(server_lib PUBLIC fmt::fmt PUBLIC asio::asio proto)


  add_executable(server echo.cc)

  target_link_libraries(server PUBLIC server_lib)