//
// Created by nicla on 21.10.2022.
//
#include <string>
#include "ResponseParser.h"
#include <iostream>
using namespace std;

std::string ResponseParser::ParseBasicCMD(string input) {
    int num = 00;
    try {
        num = stoi(input);
    }
    catch (const std::exception& exception)
    {
        return "exit";
    }
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
    cout << "sleep 5" <<endl;
    return "sleep 5";

}

