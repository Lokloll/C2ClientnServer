//
// Created by nicla on 22.11.2022.
//

#ifndef C2CLIENT_IPUTILS_H
#define C2CLIENT_IPUTILS_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <arpa/inet.h>
#include <netinet/in.h>
#include "assert.h"

class IPUltils{
public:
    static void GetPrimaryIp(char* buffer, size_t buflen)
    {
        assert(buflen >= 16);

        int sock = socket(AF_INET, SOCK_DGRAM, 0);
        assert(sock != -1);

        const char* kGoogleDnsIp = "8.8.8.8";
        uint16_t kDnsPort = 53;
        struct sockaddr_in serv;
        memset(&serv, 0, sizeof(serv));
        serv.sin_family = AF_INET;
        serv.sin_addr.s_addr = inet_addr(kGoogleDnsIp);
        serv.sin_port = htons(kDnsPort);

        int err = connect(sock, (const sockaddr*) &serv, sizeof(serv));
        assert(err != -1);

        sockaddr_in name;
        socklen_t namelen = sizeof(name);
        err = getsockname(sock, (sockaddr*) &name, &namelen);
        assert(err != -1);

        const char* p = inet_ntop(AF_INET, &name.sin_addr, buffer, buflen);
        assert(p);

        close(sock);
    }
};
#endif //C2CLIENT_IPUTILS_H
