#include <iostream>
#include <vector>
#include <cstdint>
#include <poll.h>

struct Conn {
    int fd = -1;
    bool want_read = false;
    bool want_write = false;
    bool want_close = false;

    std::vector<uint8_t> incoming;
    std::vector<uint8_t> outgoing;
};

struct pollfd {
    int fd;
    short events;
    short revents;
};

int main () {
    int poll (struct pollfd *fds, nfds_t nfds, int timeout);
}