#include <iostream>
#include <string>

const std::string get_value(){
    return "Hello World";
}

int main() {
    const std::string value = get_value();
    std::cout << "value : " << value << std::endl;
    return 0;
}
