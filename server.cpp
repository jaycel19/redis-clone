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



int main () {
    int poll (struct pollfd *fds, nfds_t nfds, int timeout);
    std::vector<Conn *> fd2conn;
    std::vector<struct pollfd> poll_args;
    while (true) {
        poll_args.clear();
        //struct pollfd pfd = {fd, POLLIN, 0};
        //poll_args.push_back(pfd);
    }
}