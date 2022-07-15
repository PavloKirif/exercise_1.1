#include <iostream>
#include <vector>
#include <data.h>

int main() {

    std::vector<kiri::Data> vec_arr;
    std::string value_str;
    int value_int;

    char exit_condition;
    while(true){

        std::cout << "Write data:\n" << "1)string:\n";
        std::cin >> value_str;
        std::cout << "2)int\n";
        std::cin >> value_int;

        std::cout << "Do you want to continue? y/n" << std::endl;
        std::cin >> exit_condition;

        if(exit_condition != 'y'){
            break;
        }
    }
    std::cout << "Goodbye)";
    return 0;
}