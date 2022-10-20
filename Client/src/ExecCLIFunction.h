//
// Created by nicla on 20.10.2022.
//

#ifndef C2CLIENT_EXECCLIFUNCTION_H
#define C2CLIENT_EXECCLIFUNCTION_H
#include <iostream>
#include <stdexcept>
#include <stdio.h>
#include <string>



class ExecCLIFunction {
public:
    static std::string exec(std::string command) {
        char buffer[128];
        std::string result = "";

        // Open pipe to file
        FILE* pipe = popen(command.c_str(), "r");
        if (!pipe) {
            return "popen failed!";
        }

        // read till end of process:
        while (!feof(pipe)) {

            // use buffer to read and add to result
            if (fgets(buffer, 128, pipe) != NULL)
                result += buffer;
        }

        pclose(pipe);
        return result;
    }

};


#endif //C2CLIENT_EXECCLIFUNCTION_H
