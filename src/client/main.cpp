#include <base/socket.h>

int main() {
    socket_lib::init();
    SOCKET sock = socket_lib::socket();
    socket_lib::close(sock);
    socket_lib::quit();
    return 0;
}
