//
// Created by nicla on 20.10.2022.
//
#include <iostream>
#include "HTTPRequest.hpp"
using namespace std;

int main() {
    std::cout << "Hello, World!" << std::endl;
    try
    {
        http::Request request{"http://test.com/test"};
        const string body = "foo=1&bar=baz";
        const auto response = request.send("POST", body, {
                {"Content-Type", "application/x-www-form-urlencoded"}
        });
        std::cout << std::string{response.body.begin(), response.body.end()} << '\n'; // print the result
    }
    catch (const std::exception& e)
    {
        std::cerr << "Request failed, error: " << e.what() << '\n';
    }
    return 0;
}
