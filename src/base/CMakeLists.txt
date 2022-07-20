file(GLOB_RECURSE SRCS "*.cpp")
add_library(base SHARED
    ${SRCS}
)