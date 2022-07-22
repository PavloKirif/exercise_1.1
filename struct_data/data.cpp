#include "data.h"

namespace kiri {

    Data::Data(std::string &value_str, int value_int) {
        this->value_str = value_str;
        this->value_int = value_int;
    }

}