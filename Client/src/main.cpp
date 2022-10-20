//
// Created by nicla on 20.10.2022.
//
#include <iostream>
#include "HttpParser.h"
#include "ExecCLIFunction.h"
using namespace std;

int main() {

    string response = HttpParser::ParseResponse();
    cout << endl;
    string out = ExecCLIFunction::exec(response);
    cout <<out;
    cout << "hello "<< endl;



    return 0;
}
