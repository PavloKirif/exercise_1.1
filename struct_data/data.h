#pragma once
#include <iostream>

namespace kiri {

    struct Data {
        std::string value_str;
        int value_int;
        Data(std::string &value_str, int value_int);
    };

}