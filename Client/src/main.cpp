//
// Created by nicla on 20.10.2022.
//
#include <iostream>
#include "HttpParser.h"
#include "ExecCLIFunction.h"
using namespace std;

int main(int mode, char** argv) {
    std::cout << "Hello, World!" << std::endl;
    cout<<HttpParser::ParseResponse()<<endl;

    cout << endl;
    string out = ExecCLIFunction::exec("ls -al");

    cout <<out;



    return 0;
}
