//
// Created by nicla on 22.11.2022.
//

#ifndef C2CLIENT_TYPES_H
#define C2CLIENT_TYPES_H
#include "string"
using namespace std;
class Types{
public:
    struct AgentSysInfos{
        string InteralIP;
        string ExternalIP;
        string HostName;
        string UserName;
    };

    struct AgentInfos{
        string ClientID;
        string Active ;
        string Reason;
        string HasRecievedFirstTask;
        AgentSysInfos Sysinfo;
    };
};

#endif //C2CLIENT_TYPES_H
