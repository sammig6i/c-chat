#include "client.h"

#include <netdb.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/socket.h>
#include <sys/types.h>

void client_initialize(void) {
    memset(&hints, 0, sizeof(hints));  // ensure struct is empty
    hints.ai_family = AF_UNSPEC;       // either IPv4 or IPv6
    hints.ai_socktype = SOCK_STREAM;   // TCP stream socket

    // get client ready to connect
    status = getaddrinfo("www.example.com", "3490", &hints, &servinfo);

    // servinfo points to a linked list of struct addrinfos
}