//
// Created by nicla on 20.10.2022.
//
#include <iostream>
#include "HttpParser.h"
#include "HTTPRequest.hpp"

char* HttpParser::ParseResponse(/*char* addr*/) {
    char* output;
    cout<< "methexec"<<endl;
    try
    {

        // you can pass http::InternetProtocol::V6 to Request to make an IPv6 request
        http::Request request{"http://172.26.96.1"};

        // send a get request
        const auto response = request.send("GET");
        string responsestr = {response.body.begin(), response.body.end()};

        output = new char[responsestr.length()+1];
        strcpy(output, responsestr.c_str());
    }
    catch (const std::exception& e)
    {
        output += *e.what();
    }
    return output;
}