#include <iostream>
#include <string>

int addNumbers(int a, int b) {
    int result = a + b;
    return result;
}
const std::string get_value(){
    return "Hello World";
}

int main() {
    const std::string value = get_value();
    std::cout << "value : " << value << std::endl;
    int sum = addNumbers(15,12);
    sum = addNumbers(42,13);
    std::cout << "Sum of 2 numbers : " << sum << std::endl;

    std::string name;
    int age;
    std::cout << "What is your name : " << std::endl;
    std::getline(std::cin, name);

    std::cout << "What is your age " << name << "?" <<std::endl;
    std::cin >> age;
    return 0;
}
