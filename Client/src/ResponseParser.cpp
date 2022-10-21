//
// Created by nicla on 21.10.2022.
//
#include <string>
#include "ResponseParser.h"
using namespace std;

std::string ResponseParser::ParseBasicCMD(string input) {
    int num = stoi(input);
    switch (num) {
        case 00:
            return "sleep 10";
        case 01:
            return "pwd";
        case 02:
            return "ls -al";
        case 03:
            return "ip -4 addr show eth0 | grep -oP '(?<=inet\\s)\\d+(\\.\\d+){3}'";
        case 04:
            return "ip a";
    }
    return "sleep 5";

}

