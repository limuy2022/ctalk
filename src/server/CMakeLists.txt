file(GLOB_RECURSE server_SRCS "*.cpp")
add_executable(ctalk_server
    ${server_SRCS}
)