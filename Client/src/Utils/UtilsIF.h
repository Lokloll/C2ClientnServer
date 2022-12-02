//
// Created by nicla on 22.11.2022.
//

#ifndef C2CLIENT_INITCLIENTID_H
#define C2CLIENT_INITCLIENTID_H
#include "IPUtils.h"

using namespace std;
class Utils{
public:
    static char* Init(){
        char* buffer = GetInternalIP();
        return buffer;
    }

    static char* GetInternalIP(){
        char* buffer = new char[16];
        size_t bufflength = 16;
        IPUltils::GetPrimaryIp(buffer,bufflength);
        return buffer;
    }
};
#endif //C2CLIENT_INITCLIENTID_H
