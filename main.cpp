#include <vector>
#include <data.h>

int main() {

    std::vector<kiri::Data*> vec_arr;
    std::string value_str;
    int value_int;

    char exit_condition;
    while(true){

        std::cout << "Write data:\n" << "1)string:\n";
        std::cin >> value_str;
        std::cout << "2)int\n";
        std::cin >> value_int;

        auto * ptr = new kiri::Data(value_str, value_int);
        vec_arr.push_back(ptr);

        std::cout << "Do you want to continue? y/n" << std::endl;
        std::cin >> exit_condition;

        if(exit_condition != 'y'){
            break;
        }
    }
    std::cout << "Goodbye)";

    for(auto it : vec_arr){
        delete it;
        it = nullptr; //warning: the value is never used
        //возможна утечка, на этом этапе не удаляется value_int из объектов vec_arr
    }
    vec_arr.clear();

    return 0;
}