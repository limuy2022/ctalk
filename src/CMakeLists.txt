add_subdirectory(client)
add_subdirectory(server)
add_subdirectory(base)

target_link_libraries(base ws2_32)
target_link_libraries(ctalk base)
target_link_libraries(ctalk_server base)
