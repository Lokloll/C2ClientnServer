//
// Created by nicla on 21.10.2022.
//
#include <string>
#include "ResponseParser.h"
#include <iostream>
#include "cstring"
using namespace std;


std::string ResponseParser::InputString(std::string input) {
    int output = 00;
    cout << input << endl;

    if (input[0] == '6' && input[1] == '9')
    {
        return ParseAdvancedCMD(input);
    }


    try {
        output = stoi(input);
    }
    catch (const std::exception& exception)
    {
        return "LOL";
    }
    return ParseBasicCMD(output);


}


std::string ResponseParser::ParseBasicCMD(int num) {
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



std::string ResponseParser::ParseAdvancedCMD(std::string input) {
    string output ;

    for (int i = 0; i < input.length()-3; ++i) {
        output += input[i+3];
    }
    return output;
}


