//
// Created by nicla on 21.10.2022.
//

#ifndef C2CLIENT_RESPONSEPARSER_H
#define C2CLIENT_RESPONSEPARSER_H
#include <string>

class ResponseParser {
public:
    static std::string ParseBasicCMD(int num);
    static std::string InputString(std::string input);
    static std::string ParseAdvancedCMD(std::string input);
};


#endif //C2CLIENT_RESPONSEPARSER_H
