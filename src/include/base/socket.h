#include <WinSock2.h>

// todo:支持linux
namespace socket_lib {
    void init();

    SOCKET socket();

    /**
     * @brief 返回以太网适配器ip
     * @return char* 
     */
    char* get_self_ip();

    void bind(SOCKET s, char*ip);

    void listen_(SOCKET s, int backlog);

    SOCKET accept(SOCKET s, sockaddr&addr, int&len);

    void send_(SOCKET s, char* buf, int len, int flag);

    void recv_(SOCKET s, char* buf, int len, int flag);

    void close(SOCKET s);

    void quit();

    void connect_(SOCKET s, char*ip);
}
