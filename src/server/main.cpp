#include <base/socket.h>

int main() {
    socket_lib::init();
    SOCKET sock = socket_lib::socket();
    socket_lib::bind(sock, socket_lib::get_self_ip());
    socket_lib::listen_(sock, 5);
    for(;;) {
        sockaddr addrcli;
        int len = sizeof(addrcli);
        SOCKET sockcli = socket_lib::accept(sock, addrcli, len);
        char buf[1024];
        socket_lib::recv_(sockcli, buf, sizeof(buf), 0);
    }
    socket_lib::close(sock);
    socket_lib::quit();
    return 0;
}
