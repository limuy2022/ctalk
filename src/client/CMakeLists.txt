
file(GLOB_RECURSE client_SRCS "*.cpp")
add_executable(ctalk
    ${client_SRCS}
)
